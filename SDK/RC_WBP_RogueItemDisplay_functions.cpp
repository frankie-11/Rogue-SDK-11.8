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

// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.SetItem
// (Final, RequiredAPI)

void UWBP_RogueItemDisplay_C::SetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.SetItem");

	UWBP_RogueItemDisplay_C_SetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.Construct
// (Final)

void UWBP_RogueItemDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.Construct");

	UWBP_RogueItemDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.PreConstruct
// (Final)

void UWBP_RogueItemDisplay_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.PreConstruct");

	UWBP_RogueItemDisplay_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.ExecuteUbergraph_WBP_RogueItemDisplay
// (RequiredAPI)

void UWBP_RogueItemDisplay_C::ExecuteUbergraph_WBP_RogueItemDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.ExecuteUbergraph_WBP_RogueItemDisplay");

	UWBP_RogueItemDisplay_C_ExecuteUbergraph_WBP_RogueItemDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
