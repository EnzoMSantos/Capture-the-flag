// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h" 
#include "InputMappingContext.h"
#include "InputAction.h"
#include "FlagActor.h"
#include "CapturePlayerState.h"
#include "CaptureGameMode.h"
#include "CaptureGameState.h"

ACaptureCharacter::ACaptureCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	//Capsule Component
	GetCapsuleComponent()->InitCapsuleSize(55.5f, 96.f);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);

	//Camera configurations
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	GetMesh()->SetupAttachment(GetCapsuleComponent());
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	GetMesh()->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
	GetMesh()->bUseAttachParentBound = true;
	GetMesh()->bReceivesDecals = false;
	GetMesh()->SetCollisionObjectType(ECC_Pawn);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	GetMesh()->SetCollisionResponseToAllChannels(ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);
	GetMesh()->SetUsingAbsoluteRotation(false);
	GetMesh()->SetOnlyOwnerSee(false);
	GetMesh()->SetOwnerNoSee(true);
	GetMesh()->bCastDynamicShadow = false;
	GetMesh()->CastShadow = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

	//Moviment Config
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;

	bReplicates = true;
	bHasFlag = false;

	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
}

void ACaptureCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (IsLocallyControlled())
	{
		GetMesh()->SetOwnerNoSee(true);
		FirstPersonCameraComponent->SetActive(true);
	}
	else
	{
		GetMesh()->SetOwnerNoSee(false);
		FirstPersonCameraComponent->SetActive(false);
	}

	// Setup Enhanced Input
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem
			<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	
	//Set Material
	if (ACaptureGameState* GS = GetWorld()->GetGameState<ACaptureGameState>())
	{
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [GS]()
			{
				GS->Multicast_ApplyAllTeamMaterials();
			}, 1.0f, false);
	}
}

void ACaptureCharacter::PickupFlag()
{
	if (HasAuthority())
	{
		bHasFlag = true;
		OnRep_HasFlag();
	}
}

void ACaptureCharacter::Server_DropFlag_Implementation()
{
	if (!bHasFlag) return;

	bHasFlag = false;
	OnRep_HasFlag();

	if (CarriedFlag)
	{
		CarriedFlag->Server_DropFlag(GetActorLocation());
		CarriedFlag = nullptr;
	}
}

void ACaptureCharacter::ServerSetControlRotation_Implementation(FRotator NewRotation)
{
	ReplicatedControlRotation = NewRotation;

	FRotator YawRotation(0.f, NewRotation.Yaw, 0.f);
	SetActorRotation(YawRotation);
}

bool ACaptureCharacter::ServerSetControlRotation_Validate(FRotator NewRotation)
{
	if (NewRotation.ContainsNaN())
	{
		UE_LOG(LogTemp, Error, TEXT("Rotation contains NaN values"));
		return false;
	}

	const bool bValid =
		(NewRotation.Pitch >= -180.0f && NewRotation.Pitch <= 180.0f) &&
		(NewRotation.Yaw >= -360.0f && NewRotation.Yaw <= 360.0f) &&
		(NewRotation.Roll >= -180.0f && NewRotation.Roll <= 180.0f);

	if (!bValid)
	{
		UE_LOG(LogTemp, Warning, TEXT("Rotation out of expected range: %s"), *NewRotation.ToString());
	}
	return true;
}

void ACaptureCharacter::TryScore()
{
	if (!HasAuthority() || !bHasFlag) return;

	if (ACapturePlayerState* PS = GetPlayerState<ACapturePlayerState>())
	{
		if (ACaptureGameMode* GM = GetWorld()->GetAuthGameMode<ACaptureGameMode>())
		{
			GM->PlayerScored(PS);
			bHasFlag = false;
			OnRep_HasFlag();

			if (CarriedFlag)
			{
				CarriedFlag->ResetFlag();
				CarriedFlag = nullptr;
			}
			UE_LOG(LogTemp, Warning, TEXT("Player scored for team %d!"), (int32)PS->GetTeam());
		}
	}
}

void ACaptureCharacter::SetOutlineEnabled(bool bEnabled)
{
	if (GetMesh())
	{
		if (bEnabled)
		{
			if (ACapturePlayerState* PS = GetPlayerState<ACapturePlayerState>())
			{
				PS->ApplyTeamMaterial();
			}
		}
		else
		{
			GetMesh()->SetOverlayMaterial(nullptr);
		}
	}
}

void ACaptureCharacter::UpdateOutlineColor(const FLinearColor& NewColor)
{
	if (GetMesh() && GetMesh()->GetOverlayMaterial())
	{
		if (UMaterialInstanceDynamic* DynamicMaterial = Cast<UMaterialInstanceDynamic>(GetMesh()->GetOverlayMaterial()))
		{
			DynamicMaterial->SetVectorParameterValue(FName("TeamColor"), NewColor);
		}
	}
}

void ACaptureCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsLocallyControlled())
	{
		FRotator ControlRot = GetControlRotation();
		ControlRot.Pitch = FMath::Clamp(ControlRot.Pitch, -89.0f, 89.0f);
		ControlRot.Roll = 0.0f;

		ServerSetControlRotation(ControlRot);
	}
	else
	{
		FRotator Current = GetActorRotation();
		FRotator Target(0.f, ReplicatedControlRotation.Yaw, 0.f);

		FRotator NewRotation = FMath::RInterpTo(Current, Target, DeltaTime, 10.f);
		SetActorRotation(NewRotation);
	}

}

void ACaptureCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACaptureCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ACaptureCharacter::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACaptureCharacter::StartJump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACaptureCharacter::StopJump);
	}
}

void ACaptureCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ACaptureCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ACaptureCharacter::StartJump()
{
	Jump();
}

void ACaptureCharacter::StopJump()
{
	StopJumping();
}


void ACaptureCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ACaptureCharacter, bHasFlag);
	DOREPLIFETIME(ACaptureCharacter, ReplicatedControlRotation);

}

void ACaptureCharacter::OnRep_HasFlag()
{
	if (bHasFlag)
	{
	}
	else
	{
	}
}



