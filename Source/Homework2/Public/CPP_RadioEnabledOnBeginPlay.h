// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_RadioParent.h"
#include "CPP_RadioEnabledOnBeginPlay.generated.h"

/**
 * 
 */
UCLASS()
class HOMEWORK2_API ACPP_RadioEnabledOnBeginPlay : public ACPP_RadioParent
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
};
