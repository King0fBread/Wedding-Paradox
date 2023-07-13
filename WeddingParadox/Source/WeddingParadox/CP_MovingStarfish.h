// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CP_MovingStarfish.generated.h"

UCLASS()
class WEDDINGPARADOX_API ACP_MovingStarfish : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACP_MovingStarfish();

	UFUNCTION(BlueprintCallable)
	void MoveStarfishUp();

	UFUNCTION(BlueprintCallable)
	void RotateStarfish();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//Static mesh for rendering
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StarfishStaticMesh;

	bool shouldMoveUp;
	bool shouldRotate;
	bool shouldMoveToPlayer;

	UPROPERTY(EditAnywhere)
	float DesiredZPosition = -1045.f;
	UPROPERTY(EditAnywhere)
	float ZPositionChangeRate = 10.f;

	UPROPERTY(EditAnywhere)
	float DesiredYRotation = -90.f;
	UPROPERTY(EditAnywhere)
	float YRotationChangeRate = -5.f;
};
