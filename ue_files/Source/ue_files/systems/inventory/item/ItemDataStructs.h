// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/Interface.h"
#include "ItemDataStructs.generated.h"

USTRUCT()
struct FItemNumericData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	bool Stackable;

	UPROPERTY(EditAnywhere)
	float Weight;

	UPROPERTY(EditAnywhere)
	float Value;
};

USTRUCT()
struct FItemTextData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	FText Name;
	
	UPROPERTY(EditAnywhere)
	FText Description;
};

USTRUCT()
struct FItemDisplayData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UStaticMesh* WorldActor;

	UPROPERTY(EditAnywhere)
	UTexture2D* DisplayImage;

	UPROPERTY(EditAnywhere)
	bool Displayable;
};

USTRUCT()
struct FItemData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere, Category="Items")
	FName ID; // FName can be used for id-ing

	UPROPERTY(EditAnywhere, Category="Items")
	FItemNumericData NumericData;

	UPROPERTY(EditAnywhere, Category="Items")
	FItemTextData TextData;
	
	UPROPERTY(EditAnywhere, Category="Items")
	FItemDisplayData DisplayData;
};
