// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CountryRoadGameMode.h"
#include "CountryRoadHUD.h"
#include "CountryRoadCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACountryRoadGameMode::ACountryRoadGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACountryRoadHUD::StaticClass();
}
