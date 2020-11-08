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

// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.UpdateProgressBar
// (RequiredAPI)

void UWBP_PlayerProfileScreen_AccountLevel_C::UpdateProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.UpdateProgressBar");

	UWBP_PlayerProfileScreen_AccountLevel_C_UpdateProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.RefreshStats
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic)

void UWBP_PlayerProfileScreen_AccountLevel_C::RefreshStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.RefreshStats");

	UWBP_PlayerProfileScreen_AccountLevel_C_RefreshStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.OnActivityInstanceChanged__DelegateSignature
// ()

void UWBP_PlayerProfileScreen_AccountLevel_C::OnActivityInstanceChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.OnActivityInstanceChanged__DelegateSignature");

	UWBP_PlayerProfileScreen_AccountLevel_C_OnActivityInstanceChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
