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

// Function WBP_ProgressionCardSlot_Reputation.WBP_ProgressionCardSlot_Reputation_C.ProcessPlayerProgression
// (Final)

void UWBP_ProgressionCardSlot_Reputation_C::ProcessPlayerProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_Reputation.WBP_ProgressionCardSlot_Reputation_C.ProcessPlayerProgression");

	UWBP_ProgressionCardSlot_Reputation_C_ProcessPlayerProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
