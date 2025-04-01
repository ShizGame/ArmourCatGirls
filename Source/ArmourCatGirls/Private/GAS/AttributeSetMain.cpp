// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/AttributeSetMain.h"

#include "Net/UnrealNetwork.h"

void UAttributeSetMain::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetMain, Health, OldHealth);
}

void UAttributeSetMain::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetMain, MaxHealth, OldMaxHealth);
}

void UAttributeSetMain::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetMain, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetMain, MaxHealth, COND_None, REPNOTIFY_Always);
}
