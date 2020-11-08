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

// Function WBP_ItemPickup.WBP_ItemPickup_C.Tick
// (Final)

void UWBP_ItemPickup_C::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.Tick");

	UWBP_ItemPickup_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.Construct
// (Final)

void UWBP_ItemPickup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.Construct");

	UWBP_ItemPickup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.OnItemPickedUp_Event_1
// (Final)

void UWBP_ItemPickup_C::OnItemPickedUp_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.OnItemPickedUp_Event_1");

	UWBP_ItemPickup_C_OnItemPickedUp_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.OnPostSetPawn
// (Final)

void UWBP_ItemPickup_C::OnPostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.OnPostSetPawn");

	UWBP_ItemPickup_C_OnPostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.ExecuteUbergraph_WBP_ItemPickup
// (Final, RequiredAPI)

void UWBP_ItemPickup_C::ExecuteUbergraph_WBP_ItemPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.ExecuteUbergraph_WBP_ItemPickup");

	UWBP_ItemPickup_C_ExecuteUbergraph_WBP_ItemPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
