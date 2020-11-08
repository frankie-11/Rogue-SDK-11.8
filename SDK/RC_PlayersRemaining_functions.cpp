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

// Function PlayersRemaining.PlayersRemaining_C.Construct
// (Final)

void UPlayersRemaining_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.Construct");

	UPlayersRemaining_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.RefreshPlayerCount
// (Final)

void UPlayersRemaining_C::RefreshPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.RefreshPlayerCount");

	UPlayersRemaining_C_RefreshPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.HandlePlayerEliminated
// (Final)

void UPlayersRemaining_C::HandlePlayerEliminated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.HandlePlayerEliminated");

	UPlayersRemaining_C_HandlePlayerEliminated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.HandlePlayerSpawn
// (Final)

void UPlayersRemaining_C::HandlePlayerSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.HandlePlayerSpawn");

	UPlayersRemaining_C_HandlePlayerSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.HandlePhaseChange
// (Final)

void UPlayersRemaining_C::HandlePhaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.HandlePhaseChange");

	UPlayersRemaining_C_HandlePhaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayersRemaining.PlayersRemaining_C.ExecuteUbergraph_PlayersRemaining
// (RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic)

void UPlayersRemaining_C::ExecuteUbergraph_PlayersRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayersRemaining.PlayersRemaining_C.ExecuteUbergraph_PlayersRemaining");

	UPlayersRemaining_C_ExecuteUbergraph_PlayersRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
