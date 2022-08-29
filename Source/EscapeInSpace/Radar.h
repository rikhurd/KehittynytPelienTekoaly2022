// copyright anssi.grohn@karelia.fi 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Radar.generated.h"

UCLASS()
class ESCAPEINSPACE_API ARadar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARadar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
