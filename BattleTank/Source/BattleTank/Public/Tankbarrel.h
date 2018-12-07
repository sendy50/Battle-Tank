// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Tankbarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankbarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreePerSecond = 20;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegree = -30;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegree = 0;
}; 
