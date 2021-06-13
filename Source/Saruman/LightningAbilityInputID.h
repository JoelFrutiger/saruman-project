#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class LightningAbilityInputID : uint8
{
	// 1 Confirm
	Confirm			UMETA(DisplayName = "Confirm"),
	// 2 Cancel
	Cancel			UMETA(DisplayName = "Cancel")
};
