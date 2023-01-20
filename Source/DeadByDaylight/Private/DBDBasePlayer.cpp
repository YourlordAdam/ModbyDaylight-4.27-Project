// Fill out your copyright notice in the Description page of Project Settings.

#include "DBDBasePlayer.h"

// Sets default values
ADBDBasePlayer::ADBDBasePlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADBDBasePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADBDBasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADBDBasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool ADBDBasePlayer::TeleportWithClothHandling(struct FVector Location, struct FRotator Rotation, bool checkCollisions){return false;}
bool ADBDBasePlayer::GetShowBlindDebugInfo(){return false;}
FName ADBDBasePlayer::GetCharacterName(){return "";}
int ADBDBasePlayer::GetCharacterIndex(){return 0;}