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

// Function INameplateWidget.INameplateWidget_C.OnUnhovered
// ()

void UINameplateWidget_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function INameplateWidget.INameplateWidget_C.OnUnhovered");

	UINameplateWidget_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INameplateWidget.INameplateWidget_C.OnPossession
// ()

void UINameplateWidget_C::OnPossession()
{
	static auto fn = UObject::FindObject<UFunction>("Function INameplateWidget.INameplateWidget_C.OnPossession");

	UINameplateWidget_C_OnPossession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INameplateWidget.INameplateWidget_C.OnHovered
// ()

void UINameplateWidget_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function INameplateWidget.INameplateWidget_C.OnHovered");

	UINameplateWidget_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
