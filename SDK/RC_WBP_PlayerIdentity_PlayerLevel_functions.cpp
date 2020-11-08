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

// Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetThrobber
// ()

void UWBP_PlayerIdentity_PlayerLevel_C::SetThrobber()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetThrobber");

	UWBP_PlayerIdentity_PlayerLevel_C_SetThrobber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetPlayerLevelExplicit
// (Final)

void UWBP_PlayerIdentity_PlayerLevel_C::SetPlayerLevelExplicit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetPlayerLevelExplicit");

	UWBP_PlayerIdentity_PlayerLevel_C_SetPlayerLevelExplicit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
