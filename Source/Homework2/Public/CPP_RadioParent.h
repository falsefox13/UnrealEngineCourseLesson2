// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_RadioParent.generated.h"

UCLASS()
class HOMEWORK2_API ACPP_RadioParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_RadioParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) 
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) 
	UAudioComponent* Audio;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PauseRadio(bool Pause);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
