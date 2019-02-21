// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UdemyCourseModifiedGameMode.h"
#include "UdemyCourseModifiedPlayerController.h"
#include "UdemyCourseModifiedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemyCourseModifiedGameMode::AUdemyCourseModifiedGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUdemyCourseModifiedPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}