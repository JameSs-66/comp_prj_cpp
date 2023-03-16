#include "FlipbooksState.h"
FText EFlipbooksStateGetUserFriendlyName(int32 InValue)
{
  FText Text;
  const auto EnumValue = static_cast<EFlipbooksState>(InValue);
  switch (EnumValue) {
  case EFlipbooksState::NewEnumerator0:
    FTextStringHelper::ReadFromBuffer(TEXT("\"Default\")"), Text);
    break;
  case EFlipbooksState::NewEnumerator1:
    FTextStringHelper::ReadFromBuffer(TEXT("\"Walk\")"), Text);
    break;
  case EFlipbooksState::NewEnumerator2:
    FTextStringHelper::ReadFromBuffer(TEXT("\"Idle\")"), Text);
    break;
  case EFlipbooksState::EFlipbooksState_MAX:
    FTextStringHelper::ReadFromBuffer(TEXT("Flipbooks State MAX"), Text);
    break;
  default:
    ensure(false);
  };
  return Text;
};
