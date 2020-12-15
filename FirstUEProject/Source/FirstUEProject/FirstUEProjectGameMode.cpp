// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstUEProjectGameMode.h"
#include "FirstUEProjectPawn.h"

AFirstUEProjectGameMode::AFirstUEProjectGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFirstUEProjectPawn::StaticClass();
}

