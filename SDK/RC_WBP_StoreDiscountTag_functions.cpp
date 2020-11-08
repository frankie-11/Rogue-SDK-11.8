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

// Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetDiscountPercentage
// (BlueprintAuthorityOnly)

void UWBP_StoreDiscountTag_C::SetDiscountPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetDiscountPercentage");

	UWBP_StoreDiscountTag_C_SetDiscountPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
