// Fill out your copyright notice in the Description page of Project Settings.

#include "Math/UnrealMathUtility.h"
#include "CP_MovingStarfish.h"
#include "Components/SceneComponent.h"

// Sets default values
ACP_MovingStarfish::ACP_MovingStarfish()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StarfishStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StarfishStaticMesh"));
	RootComponent = StarfishStaticMesh;

}
// Called when the game starts or when spawned
void ACP_MovingStarfish::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACP_MovingStarfish::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

