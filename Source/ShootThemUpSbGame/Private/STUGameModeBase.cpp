// Shoot Them Up SB Game. All Rights Reserved


#include "STUGameModeBase.h"
#include "Player/STUBCharacter.h"
#include "Player/STUPlayerController.h"

ASTUGModeBase::ASTUGModeBase()
{
    DefaultPawnClass = ASTUBCharacter::StaticClass();
    PlayerControllerClass = ASTUPlayerController::StaticClass();
}