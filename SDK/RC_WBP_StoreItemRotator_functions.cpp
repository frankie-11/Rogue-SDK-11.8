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

// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetPercentTimeRemaining
// (Final)

void UWBP_StoreItemRotator_C::SetPercentTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetPercentTimeRemaining");

	UWBP_StoreItemRotator_C_SetPercentTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetRotatorSize
// (Final, BlueprintAuthorityOnly, BlueprintCosmetic)

void UWBP_StoreItemRotator_C::SetRotatorSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetRotatorSize");

	UWBP_StoreItemRotator_C_SetRotatorSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetActiveIndex
// (BlueprintCosmetic)

void UWBP_StoreItemRotator_C::SetActiveIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetActiveIndex");

	UWBP_StoreItemRotator_C_SetActiveIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
