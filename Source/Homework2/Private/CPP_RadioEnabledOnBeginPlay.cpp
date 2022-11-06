// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_RadioEnabledOnBeginPlay.h"

void ACPP_RadioEnabledOnBeginPlay::BeginPlay()
{
	Super::BeginPlay();
	this->PauseRadio(false); // enable radio
	
}
