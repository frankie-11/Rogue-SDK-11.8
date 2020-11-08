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

// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.PostSetPawn
// (Final)

void UWBP_InventoryFullWarning_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.PostSetPawn");

	UWBP_InventoryFullWarning_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.Handle Inventory Full
// (Final)

void UWBP_InventoryFullWarning_C::Handle_Inventory_Full()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.Handle Inventory Full");

	UWBP_InventoryFullWarning_C_Handle_Inventory_Full_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.ExecuteUbergraph_WBP_InventoryFullWarning
// (RequiredAPI, BlueprintAuthorityOnly)

void UWBP_InventoryFullWarning_C::ExecuteUbergraph_WBP_InventoryFullWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.ExecuteUbergraph_WBP_InventoryFullWarning");

	UWBP_InventoryFullWarning_C_ExecuteUbergraph_WBP_InventoryFullWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
