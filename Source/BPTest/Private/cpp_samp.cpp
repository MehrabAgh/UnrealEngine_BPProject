// Fill out your copyright notice in the Description page of Project Settings.


#include "cpp_samp.h"



// Sets default values
Acpp_samp::Acpp_samp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Acpp_samp::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i < 15; i++)
	{			
		UE_LOG(LogTemp, Warning, TEXT("%llu"), i);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, FString::Printf(TEXT("%lld") , "sd"));
	}
	
}

// Called every frame
void Acpp_samp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

