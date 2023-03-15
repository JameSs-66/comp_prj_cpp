#include "NativizedAssets.h"
#include "FlipbooksState_E__pf2567911892.h"
FText E__FlipbooksState_E__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__FlipbooksState_E__pf>(InValue);
	switch(EnumValue)
	{
		case E__FlipbooksState_E__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B8F8B8C24AE56FA72B3893A134FE7D7C]\", \"0A4E433845389423889DCD8AD60C9D0D\", \"Default\")"), Text); break;
		case E__FlipbooksState_E__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B8F8B8C24AE56FA72B3893A134FE7D7C]\", \"BA9A4F104441F39741AF27A4F70B2807\", \"Walk\")"), Text); break;
		case E__FlipbooksState_E__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B8F8B8C24AE56FA72B3893A134FE7D7C]\", \"5000B2FF44F7E454ED48A8B6EE69EE13\", \"Idle\")"), Text); break;
		case E__FlipbooksState_E__pf::E__FlipbooksState_E__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Flipbooks State MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
