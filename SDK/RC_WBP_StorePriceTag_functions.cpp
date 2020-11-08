// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceDisplay
// (Final, BlueprintAuthorityOnly, BlueprintCosmetic)

void UWBP_StorePriceTag_C::SetPriceDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceDisplay");

	UWBP_StorePriceTag_C_SetPriceDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
