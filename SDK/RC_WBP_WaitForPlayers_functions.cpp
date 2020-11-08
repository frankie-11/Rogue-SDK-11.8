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

// Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.Construct
// (Final)

void UWBP_WaitForPlayers_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.Construct");

	UWBP_WaitForPlayers_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.HandlePhaseChange
// (Final)

void UWBP_WaitForPlayers_C::HandlePhaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.HandlePhaseChange");

	UWBP_WaitForPlayers_C_HandlePhaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.ExecuteUbergraph_WBP_WaitForPlayers
// (Final, BlueprintAuthorityOnly, BlueprintCosmetic)

void UWBP_WaitForPlayers_C::ExecuteUbergraph_WBP_WaitForPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.ExecuteUbergraph_WBP_WaitForPlayers");

	UWBP_WaitForPlayers_C_ExecuteUbergraph_WBP_WaitForPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
