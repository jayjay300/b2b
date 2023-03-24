// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "b2bGameMode.h"
#include "b2bCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ab2bGameMode::Ab2bGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
