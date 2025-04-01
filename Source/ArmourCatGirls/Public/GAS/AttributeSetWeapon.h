// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSetMain.h"
#include "AttributeSetWeapon.generated.h"

/**
 * 
 */
UCLASS()
class ARMOURCATGIRLS_API UAttributeSetWeapon : public UAttributeSetMain
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_FireRate)
	FGameplayAttributeData FireRate;
	ATTRIBUTE_ACCESSORS(UAttributeSetWeapon, FireRate)

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_StartBulletsSpeed)
	FGameplayAttributeData StartBulletsSpeed;
	ATTRIBUTE_ACCESSORS(UAttributeSetWeapon, StartBulletsSpeed)

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_BulletsCount)
	FGameplayAttributeData BulletsCount;
	ATTRIBUTE_ACCESSORS(UAttributeSetWeapon, BulletsCount)

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxBulletsCount)
	FGameplayAttributeData MaxBulletsCount;
	ATTRIBUTE_ACCESSORS(UAttributeSetWeapon, MaxBulletsCount)

	UFUNCTION()
	virtual void OnRep_FireRate(const FGameplayAttributeData& OldFireRate);
	UFUNCTION()
	virtual void OnRep_StartBulletsSpeed(const FGameplayAttributeData& OldStartBulletsSpeed);
	UFUNCTION()
	virtual void OnRep_BulletsCount(const FGameplayAttributeData& OldBulletsCount);
	UFUNCTION()
	virtual void OnRep_MaxBulletsCount(const FGameplayAttributeData& OldMaxBulletsCount);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
