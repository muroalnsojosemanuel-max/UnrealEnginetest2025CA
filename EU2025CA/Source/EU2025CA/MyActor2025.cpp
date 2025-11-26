// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor2025.h"

// Sets default values
AMyActor2025::AMyActor2025()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyFloatVariable = 50.0f;
	edad = 20;
	esInstructor = true;
	nombre = "Jose Manuel Muro Alonso"; 


}

// Called when the game starts or when spawned
void AMyActor2025::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor2025::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor2025::DemostrateFundamentals()	
{//Operadores Aricmeticos
	int32 sum = edad + 30;
	float product = MyFloatVariable * 2.5f;
//Estructuras de control
// Bucles y Ciclos 
	for (int32 i = 0; i < 5; i++)
		FString DEbugMessage = FString::printf(TEXT("loop iteration: %d"), i);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DEbugMessage);

