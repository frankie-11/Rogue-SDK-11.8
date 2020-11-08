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

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ProcessPlayerProgression
// (RequiredAPI, BlueprintAuthorityOnly)

void UWBP_ProgressionCardSlot_PlayerXP_C::ProcessPlayerProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ProcessPlayerProgression");

	UWBP_ProgressionCardSlot_PlayerXP_C_ProcessPlayerProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
