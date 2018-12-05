 // Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "BattleTank.h"


void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank){
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not possessing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Player Controller possessing: %s"),*(ControlledTank->GetName()));
	}
	 
}

void ATankPlayerController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
	UE_LOG(LogTemp, Warning, TEXT("Player Controller Ticking"));
}

ATank* ATankPlayerController::GetControlledTank() const {
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair() {
	
	FVector HitLocation;

	if (GetSightRayHitLocation(HitLocation)) {

		UE_LOG(LogTemp, Warning, TEXT("HitLocation : %s"), *HitLocation.ToString());
	}
}

bool ATankPlayerController::GetSightRayHitLocation(FVector& HitLocation) const
{
	HitLocation = FVector(1.0);
	return false;
}
