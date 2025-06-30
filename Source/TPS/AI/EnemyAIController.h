// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class TPS_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AEnemyAIController();

public:
	virtual void OnPossess(APawn* InPawn) override;

public:
	void RunAI();
	void StopAI();

private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UBlackboardData> BBAsset;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UBehaviorTree> BTAsset;
};
