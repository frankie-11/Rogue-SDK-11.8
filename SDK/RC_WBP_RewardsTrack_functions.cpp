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

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithActivityInstance
// (Final, RequiredAPI, BlueprintCosmetic)

void UWBP_RewardsTrack_C::InitializeWithActivityInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithActivityInstance");

	UWBP_RewardsTrack_C_InitializeWithActivityInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWidget
// (Final)

void UWBP_RewardsTrack_C::InitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWidget");

	UWBP_RewardsTrack_C_InitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.ExecuteUbergraph_WBP_RewardsTrack
// (Final, RequiredAPI)

void UWBP_RewardsTrack_C::ExecuteUbergraph_WBP_RewardsTrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.ExecuteUbergraph_WBP_RewardsTrack");

	UWBP_RewardsTrack_C_ExecuteUbergraph_WBP_RewardsTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
