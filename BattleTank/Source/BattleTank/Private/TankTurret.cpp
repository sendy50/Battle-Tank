// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"
#include "BattleTank.h"

void UTankTurret::Rotate(float RelativeSpeed)
{

	if (GetWorld()->DeltaTimeSeconds == 0) {
		RelativeRotation.Yaw = 0.f;
		RelativeSpeed = 0.f;
	}

	UE_LOG(LogTemp, Warning, TEXT("RelativeSpeed:: %f"), RelativeSpeed);
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	UE_LOG(LogTemp, Warning, TEXT("RelativeSpeed: %f"), RelativeSpeed);
	auto RotationChange = RelativeSpeed * MaxDegreePerSecond * GetWorld()->DeltaTimeSeconds;
	UE_LOG(LogTemp, Warning, TEXT("RotationChange: %f"), RotationChange);
	auto Rotation = RelativeRotation.Yaw + RotationChange;
	UE_LOG(LogTemp, Warning, TEXT("Rotation: %f"), (Rotation));
	SetRelativeRotation(FRotator(0, Rotation, 0));
}
