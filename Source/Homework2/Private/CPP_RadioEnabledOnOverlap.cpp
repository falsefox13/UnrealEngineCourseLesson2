// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_RadioEnabledOnOverlap.h"

ACPP_RadioEnabledOnOverlap::ACPP_RadioEnabledOnOverlap()
{
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(Mesh);
}

void ACPP_RadioEnabledOnOverlap::BeginPlay()
{
	BoxCollision->SetHiddenInGame(true);
	BoxCollision->SetBoxExtent(FVector(50.f, 50.f, 50.f));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ACPP_RadioEnabledOnOverlap::OnOverlapBegin);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &ACPP_RadioEnabledOnOverlap::OnOverlapEnd);
	PauseRadio(true);
}


void ACPP_RadioEnabledOnOverlap::OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor,
	UPrimitiveComponent* otherComp, int otherBodyIndex, bool fromSweep, const FHitResult& sweepResult)
{
	if (otherActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		this->PauseRadio(false);
	}
}

void ACPP_RadioEnabledOnOverlap::OnOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor,
	UPrimitiveComponent* otherComp, int otherBodyIndex)
{
	if (otherActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		this->PauseRadio(true);
	}
}
