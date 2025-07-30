// Copyright Epic Games, Inc. All Rights Reserved.

#include "GDIGameMode.h"
#include "GDICharacter.h"
#include "UObject/ConstructorHelpers.h"

AGDIGameMode::AGDIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
