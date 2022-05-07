// Shoot Them Up SB Game. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "STUBCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class SHOOTTHEMUPSBGAME_API ASTUBCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASTUBCharacter();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
    USpringArmComponent* SpringArmComponent;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
    UCameraComponent* CameraComponent;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	private:
    void MoveForward(float Amount); 
    void MoveRight(float Amount); 

	void LookUp(float Amount);
	void TurnAround(float Amount);


};
