// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodItem.h"
#include "InventorySystemCharacter.h"
#include "InventoryComponent.h"

void UFoodItem::Use(class AInventorySystemCharacter* Character)
{
    if (Character)
    {
        Character->Health += HealingAmount;
    }

    if (OwningInventory)
    {
        OwningInventory->RemoveItem(this);
    }
}