// Shoot Them Up SB Game. All Rights Reserved


#include "Player/STUBCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ASTUBCharacter::ASTUBCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
    SpringArmComponent->SetupAttachment(GetRootComponent());
    SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    CameraComponent->SetupAttachment(SpringArmComponent);
}

// Called when the game starts or when spawned
void ASTUBCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTUBCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASTUBCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASTUBCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASTUBCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ASTUBCharacter::LookUp);
    PlayerInputComponent->BindAxis("TurnAround", this, &ASTUBCharacter::TurnAround);

}

void ASTUBCharacter::MoveForward(float Amount) 
{
    AddMovementInput(GetActorForwardVector(), Amount);
}

void ASTUBCharacter::MoveRight(float Amount) 
{
    AddMovementInput(GetActorRightVector(), Amount);
}

void ASTUBCharacter::LookUp(float Amount) 
{
    AddControllerPitchInput(Amount);
}

void ASTUBCharacter::TurnAround(float Amount) 
{
    AddControllerYawInput(Amount);
}

