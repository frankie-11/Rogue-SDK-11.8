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

// Function WBP_StorePriceDisplay.WBP_StorePriceDisplay_C.SetStorePrices
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic)

void UWBP_StorePriceDisplay_C::SetStorePrices()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePriceDisplay.WBP_StorePriceDisplay_C.SetStorePrices");

	UWBP_StorePriceDisplay_C_SetStorePrices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
