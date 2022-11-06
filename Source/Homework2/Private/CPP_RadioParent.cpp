// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_RadioParent.h"

#include "Components/AudioComponent.h"

// Sets default values
ACPP_RadioParent::ACPP_RadioParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Audio->SetupAttachment(Mesh);

}

// Called when the game starts or when spawned
void ACPP_RadioParent::BeginPlay()
{
	Super::BeginPlay();
	PauseRadio(true);

}

// Called every frame
void ACPP_RadioParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_RadioParent::PauseRadio_Implementation(bool Pause)
{
	Audio->SetPaused(Pause);
}

