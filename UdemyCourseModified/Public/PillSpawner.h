// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PillSpawner.generated.h"

UCLASS()
class UDEMYCOURSEMODIFIED_API APillSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APillSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Spawning")
	TSubclassOf<class AMagicPill> ItemToSpawn;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// This is the spawning volume as a box component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="SPawning", meta=(AllowPrivateAccess="true"))
	class UBoxComponent* SpawningVolume;

};
