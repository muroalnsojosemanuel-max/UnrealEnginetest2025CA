// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor2025.generated.h"

UCLASS()
class EU2025CA_API AMyActor2025 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor2025();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//Ejemplo  de una variable de instancia publica
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor2025")
	float MyFloatVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor2025")
	int32 edad;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor2025")
	bool esInstructor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor2025")
	FString nombre;
//Ejemplo  de una funcion publica
	
	UFUNCTION(BlueprintCallable, Category = "MyActor2025")
	void DemostrateFundamentals();



};
