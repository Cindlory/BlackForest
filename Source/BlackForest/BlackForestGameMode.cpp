// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlackForestGameMode.h"
#include "BlackForestHUD.h"
#include "BlackForestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABlackForestGameMode::ABlackForestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABlackForestHUD::StaticClass();
}
