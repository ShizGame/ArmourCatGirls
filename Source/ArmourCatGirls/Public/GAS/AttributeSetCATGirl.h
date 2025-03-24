// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSetMain.h"
#include "AttributeSetCATGirl.generated.h"


UCLASS()
class ARMOURCATGIRLS_API UAttributeSetCATGirl : public UAttributeSetMain
{
	GENERATED_BODY()

	UPROPERTY()
	FGameplayAttributeData Weight = 100.0f;
	ATTRIBUTE_ACCESSORS(UAttributeSetCATGirl, Weight)
};
