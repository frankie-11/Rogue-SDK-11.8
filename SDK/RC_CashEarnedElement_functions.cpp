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

// Function CashEarnedElement.CashEarnedElement_C.ShowRewardEarned
// (BlueprintAuthorityOnly, BlueprintCosmetic)

void UCashEarnedElement_C::ShowRewardEarned()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.ShowRewardEarned");

	UCashEarnedElement_C_ShowRewardEarned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashEarnedElement.CashEarnedElement_C.Construct
// (Final)

void UCashEarnedElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.Construct");

	UCashEarnedElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashEarnedElement.CashEarnedElement_C.HandleShowValueAnimFinished
// (Final)

void UCashEarnedElement_C::HandleShowValueAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.HandleShowValueAnimFinished");

	UCashEarnedElement_C_HandleShowValueAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashEarnedElement.CashEarnedElement_C.HandleHideValueAnimFinished
// (Final)

void UCashEarnedElement_C::HandleHideValueAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.HandleHideValueAnimFinished");

	UCashEarnedElement_C_HandleHideValueAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashEarnedElement.CashEarnedElement_C.ExecuteUbergraph_CashEarnedElement
// (Final, BlueprintAuthorityOnly)

void UCashEarnedElement_C::ExecuteUbergraph_CashEarnedElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.ExecuteUbergraph_CashEarnedElement");

	UCashEarnedElement_C_ExecuteUbergraph_CashEarnedElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
