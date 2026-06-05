// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Fighter.generated.h"

/**
 * 
 */
UCLASS()
class TEST_TP4_API AFighter : public APaperCharacter
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, SimpleDisplay, Category = "Fighter")
		int32 Health_Points;

	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Fighter")
		int32 Stuck_In_Animation;

	UPROPERTY(BlueprintReadWrite, Category = "Fighter")
		bool Melee_Attack;

	UPROPERTY(BlueprintReadWrite, Category = "Fighter")
		bool Ranged_Attack;

	UPROPERTY(BlueprintReadWrite, Category = "Fighter")
		int32 Animation_Number;

};
