#pragma once
#include "FlipbooksState.generated.h"
enum class FlipbooksState  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "FlipbooksState_E::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "FlipbooksState_E::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "FlipbooksState_E::NewEnumerator2"),
	FlipbooksState_MAX = 3 UMETA(OverrideName = "FlipbooksState_E::FlipbooksState_MAX"),
};
FText EFlipbooksState_GetUserFriendlyName(int32 InValue);
