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

// Function WBP_EventProgress.WBP_EventProgress_C.InitializeWithActivityInstance
// (Final, RequiredAPI, BlueprintCosmetic)

void UWBP_EventProgress_C::InitializeWithActivityInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventProgress.WBP_EventProgress_C.InitializeWithActivityInstance");

	UWBP_EventProgress_C_InitializeWithActivityInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
