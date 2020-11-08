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

// Function DebugMenuItem.DebugMenuItem_C.NavigateConfirm
// (Final)

void UDebugMenuItem_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenuItem.DebugMenuItem_C.NavigateConfirm");

	UDebugMenuItem_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenuItem.DebugMenuItem_C.Construct
// (Final)

void UDebugMenuItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenuItem.DebugMenuItem_C.Construct");

	UDebugMenuItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenuItem.DebugMenuItem_C.GamepadHover
// (Final)

void UDebugMenuItem_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenuItem.DebugMenuItem_C.GamepadHover");

	UDebugMenuItem_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenuItem.DebugMenuItem_C.GamepadUnhover
// (Final)

void UDebugMenuItem_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenuItem.DebugMenuItem_C.GamepadUnhover");

	UDebugMenuItem_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenuItem.DebugMenuItem_C.ExecuteUbergraph_DebugMenuItem
// (Final, RequiredAPI, BlueprintAuthorityOnly)

void UDebugMenuItem_C::ExecuteUbergraph_DebugMenuItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenuItem.DebugMenuItem_C.ExecuteUbergraph_DebugMenuItem");

	UDebugMenuItem_C_ExecuteUbergraph_DebugMenuItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenuItem.DebugMenuItem_C.ItemSelected__DelegateSignature
// ()

void UDebugMenuItem_C::ItemSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenuItem.DebugMenuItem_C.ItemSelected__DelegateSignature");

	UDebugMenuItem_C_ItemSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
