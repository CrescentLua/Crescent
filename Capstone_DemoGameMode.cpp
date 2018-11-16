// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Capstone_DemoGameMode.h"
#include "Capstone_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACapstone_DemoGameMode::ACapstone_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
