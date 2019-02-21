// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MagicPill.generated.h"

UCLASS()
class UDEMYCOURSEMODIFIED_API AMagicPill : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMagicPill();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	// Magic Pill Health Amount (+/-)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Values")
	float PillEffect;
};
