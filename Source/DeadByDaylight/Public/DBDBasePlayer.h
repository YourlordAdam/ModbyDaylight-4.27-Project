// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DBDBasePlayer.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCustomizationChanged); 
UCLASS()
class DEADBYDAYLIGHT_API ADBDBasePlayer : public ACharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite) //doubt this is correct
	FOnCustomizationChanged OnCustomizationChanged;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) 
	int32 _characterIndex;
	// Sets default values for this character's properties
	ADBDBasePlayer();


	UFUNCTION(BlueprintCallable)
	bool TeleportWithClothHandling(struct FVector Location, struct FRotator Rotation, bool checkCollisions);
	UFUNCTION(BlueprintCallable)
	bool GetShowBlindDebugInfo();
	UFUNCTION(BlueprintCallable)
	FName GetCharacterName();
	UFUNCTION(BlueprintCallable)
	int GetCharacterIndex();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
