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

// Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.GetNextMasteryRewardTier
// (BlueprintAuthorityOnly, BlueprintCosmetic)

void UWBP_MecMasteryProgress_C::GetNextMasteryRewardTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.GetNextMasteryRewardTier");

	UWBP_MecMasteryProgress_C_GetNextMasteryRewardTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.SetMasteryLevelForJob
// (RequiredAPI, BlueprintCosmetic)

void UWBP_MecMasteryProgress_C::SetMasteryLevelForJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.SetMasteryLevelForJob");

	UWBP_MecMasteryProgress_C_SetMasteryLevelForJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
