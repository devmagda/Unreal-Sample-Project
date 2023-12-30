// Fill out your copyright notice in the Description page of Project Settings.


#include "ue_files/systems/inventory/item/ItemBase.h"

UItemBase::UItemBase() {
}

UItemBase* UItemBase::CreateItemCopy() const
{
	UItemBase* ItemCopy = NewObject<UItemBase>(StaticClass());

	ItemCopy->ID = this->ID;
	ItemCopy->Count = this->Count;
	ItemCopy->DisplayData = this->DisplayData;
	ItemCopy->NumericData = this->NumericData;
	ItemCopy->TextData = this->TextData;

	return ItemCopy;
}

void UItemBase::SetQuantity(const int32 NewCount)
{
	Count = NewCount;
}

void UItemBase::Use(Aue_filesCharacter* Character)
{
}
