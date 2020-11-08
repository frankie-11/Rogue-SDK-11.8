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

// Function WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C.SetState
// ()

void UWBP_VoiceActivityIcon_C::SetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C.SetState");

	UWBP_VoiceActivityIcon_C_SetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
