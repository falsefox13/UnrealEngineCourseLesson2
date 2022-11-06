// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_RadioParent.h"
#include "Components/BoxComponent.h"
#include "CPP_RadioEnabledOnOverlap.generated.h"

/**
 * 
 */
UCLASS()
class HOMEWORK2_API ACPP_RadioEnabledOnOverlap : public ACPP_RadioParent
{
	GENERATED_BODY()
public:
	ACPP_RadioEnabledOnOverlap();
	
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp,
		int otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp,
		int otherBodyIndex);


protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UBoxComponent* BoxCollision;
	
};
