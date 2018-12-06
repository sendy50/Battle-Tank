// Fill out your copyright notice in the Description page of Project Settings.


#include "Tankbarrel.h"
#include "BattleTank.h"

void UTankbarrel::Elevate(float DegreesPerSecond) 
{
	UE_LOG(LogTemp, Warning, TEXT("Elevate called at Speed : %f"), DegreesPerSecond);
}

