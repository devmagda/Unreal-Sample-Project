// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ue_files/systems/inventory/item/ItemDataStructs.h"
#include "ue_files/ue_filesCharacter.h"
#include "ItemBase.generated.h"


/**
 * 
 */
UCLASS()
class UE_FILES_API UItemBase : public UObject
{
	GENERATED_BODY()
	
public:

	// Variables -------------------------------------------------------------------------------------------------------

	UPROPERTY(EditAnywhere, Category="Items")
	FName ID;
	
	UPROPERTY(EditAnywhere, Category="Items")
	int32 Count;
	
	UPROPERTY(EditAnywhere, Category="Items")
	FItemNumericData NumericData;

	UPROPERTY(EditAnywhere, Category="Items")
	FItemTextData TextData;
	
	UPROPERTY(EditAnywhere, Category="Items")
	FItemDisplayData DisplayData;


	// Functions -------------------------------------------------------------------------------------------------------

	UItemBase();


	// Function to create an item from the Data Table
	UFUNCTION(Category="Items")
	UItemBase* CreateItemCopy() const;
	
	// "FORCEINLINE" is a code optimization which works best on small functions
	UFUNCTION(Category="Items")
	FORCEINLINE
	float GetStackWeight() const
	{
		if (NumericData.Stackable)
		{
			return Count * NumericData.Weight;
		}
		return NumericData.Weight;
	};

	UFUNCTION(Category="Items")
	FORCEINLINE
	bool GetStackable() const
	{
		return NumericData.Stackable;
	};

	UFUNCTION(Category="Items")
	FORCEINLINE
	float GetWeight() const
	{
		return NumericData.Weight;
	}

	UFUNCTION(Category="Items")
	FORCEINLINE
	int32 GetCount() const
	{
		return Count;
	}

	UFUNCTION(Category="Items")
	virtual void Use(Aue_filesCharacter* Character);

	UFUNCTION(Category="Items")
	void SetQuantity(const int32 NewCount);

protected:
	bool operator==(const FName& OtherID) const
	{
		return ID == OtherID;
	};
};
