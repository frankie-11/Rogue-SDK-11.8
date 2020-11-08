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

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay
// (Final, RequiredAPI)

void UWBP_CurrencySummary_C::UpdateCurrencyDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay");

	UWBP_CurrencySummary_C_UpdateCurrencyDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget
// (Final)

void UWBP_CurrencySummary_C::InitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget");

	UWBP_CurrencySummary_C_InitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary
// (Final, RequiredAPI)

void UWBP_CurrencySummary_C::ExecuteUbergraph_WBP_CurrencySummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary");

	UWBP_CurrencySummary_C_ExecuteUbergraph_WBP_CurrencySummary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
