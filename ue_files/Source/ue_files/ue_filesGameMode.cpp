// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue_filesGameMode.h"
#include "ue_filesCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue_filesGameMode::Aue_filesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
