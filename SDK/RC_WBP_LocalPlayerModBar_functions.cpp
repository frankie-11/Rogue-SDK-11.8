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

// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PostSetPawn
// (Final)

void UWBP_LocalPlayerModBar_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PostSetPawn");

	UWBP_LocalPlayerModBar_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PreClearPawn
// (Final)

void UWBP_LocalPlayerModBar_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PreClearPawn");

	UWBP_LocalPlayerModBar_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.Handle Mods Updated
// (Final)

void UWBP_LocalPlayerModBar_C::Handle_Mods_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.Handle Mods Updated");

	UWBP_LocalPlayerModBar_C_Handle_Mods_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.ExecuteUbergraph_WBP_LocalPlayerModBar
// (RequiredAPI, BlueprintAuthorityOnly)

void UWBP_LocalPlayerModBar_C::ExecuteUbergraph_WBP_LocalPlayerModBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.ExecuteUbergraph_WBP_LocalPlayerModBar");

	UWBP_LocalPlayerModBar_C_ExecuteUbergraph_WBP_LocalPlayerModBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
