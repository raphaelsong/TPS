// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindPatrolLocation.generated.h"

/**
 * 
 */
UCLASS()
class TPS_API UBTTask_FindPatrolLocation : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_FindPatrolLocation();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	UPROPERTY(EditAnywhere)
	float PatrolRadius = 1000.0f;

	UPROPERTY(EditAnywhere)
	FBlackboardKeySelector PatrolLocationKey;
};
