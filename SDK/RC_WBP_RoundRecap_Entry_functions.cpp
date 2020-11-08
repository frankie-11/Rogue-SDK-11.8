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

// Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.SetVisualState
// (Final, RequiredAPI, BlueprintAuthorityOnly)

void UWBP_RoundRecap_Entry_C::SetVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.SetVisualState");

	UWBP_RoundRecap_Entry_C_SetVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.RoundDataSet
// (Final)

void UWBP_RoundRecap_Entry_C::RoundDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.RoundDataSet");

	UWBP_RoundRecap_Entry_C_RoundDataSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.ExecuteUbergraph_WBP_RoundRecap_Entry
// ()

void UWBP_RoundRecap_Entry_C::ExecuteUbergraph_WBP_RoundRecap_Entry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.ExecuteUbergraph_WBP_RoundRecap_Entry");

	UWBP_RoundRecap_Entry_C_ExecuteUbergraph_WBP_RoundRecap_Entry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
