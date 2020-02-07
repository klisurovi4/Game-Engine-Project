// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/GameStateBase.h"
#include "TopDownARPGGameState.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNARPG_API ATopDownARPGGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	ATopDownARPGGameState();

	UDataTable* GetItemDB() const;

protected:
	UPROPERTY(EditDefaultsOnly)
		class UDataTable* ItemDB;
};
