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

// Function ActivePerkSlot.ActivePerkSlot_C.Construct
// (Final)

void UActivePerkSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivePerkSlot.ActivePerkSlot_C.Construct");

	UActivePerkSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivePerkSlot.ActivePerkSlot_C.HandleOnModTriggered
// (Final)

void UActivePerkSlot_C::HandleOnModTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivePerkSlot.ActivePerkSlot_C.HandleOnModTriggered");

	UActivePerkSlot_C_HandleOnModTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivePerkSlot.ActivePerkSlot_C.ExecuteUbergraph_ActivePerkSlot
// (RequiredAPI)

void UActivePerkSlot_C::ExecuteUbergraph_ActivePerkSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivePerkSlot.ActivePerkSlot_C.ExecuteUbergraph_ActivePerkSlot");

	UActivePerkSlot_C_ExecuteUbergraph_ActivePerkSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
