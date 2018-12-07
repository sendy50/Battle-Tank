// Fill out your copyright notice in the Description page of Project Settings.


#include "Tankbarrel.h"
#include "BattleTank.h"

void UTankbarrel::Elevate(float RelativeSpeed)
{
	//auto Time = GetWorld()->GetTimeSeconds();
	//UE_LOG(LogTemp, Warning, TEXT("%f : Elevate called at Speed : %f"), Time,RelativeSpeed);
	//UE_LOG(LogTemp, Warning, TEXT("RelativeSpeed: %f"), RelativeSpeed);
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto ElevationChange = RelativeSpeed * MaxDegreePerSecond * GetWorld()->DeltaTimeSeconds;
	//UE_LOG(LogTemp, Warning, TEXT("ElevationChange: %f"), ElevationChange);
	auto RawNewElevation = RelativeRotation.Roll - ElevationChange;
	//UE_LOG(LogTemp, Warning, TEXT("RawNewElevation: %f"), RawNewElevation);
	auto Elevation = FMath::Clamp<float>(RawNewElevation,MaxElevationDegree,MinElevationDegree);
	//UE_LOG(LogTemp, Warning, TEXT("Elevation: %f"), Elevation);
	SetRelativeRotation(FRotator(0,0, Elevation));

}

