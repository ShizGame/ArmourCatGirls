// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/AttributeSetWeapon.h"

#include "Net/UnrealNetwork.h"

void UAttributeSetWeapon::OnRep_FireRate(const FGameplayAttributeData& OldFireRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetWeapon, FireRate, OldFireRate);
}

void UAttributeSetWeapon::OnRep_StartBulletsSpeed(const FGameplayAttributeData& OldStartBulletsSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetWeapon, StartBulletsSpeed, OldStartBulletsSpeed);
}

void UAttributeSetWeapon::OnRep_BulletsCount(const FGameplayAttributeData& OldBulletsCount)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetWeapon, BulletsCount, OldBulletsCount);
}

void UAttributeSetWeapon::OnRep_MaxBulletsCount(const FGameplayAttributeData& OldMaxBulletsCount)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetWeapon, MaxBulletsCount, OldMaxBulletsCount);
}

void UAttributeSetWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetWeapon, FireRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetWeapon, StartBulletsSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetWeapon, BulletsCount, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetWeapon, MaxBulletsCount, COND_None, REPNOTIFY_Always);
}
