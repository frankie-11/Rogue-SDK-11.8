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

// Function FirstTimeRegionSelectRedirector.FirstTimeRegionSelectRedirector_C.GetRelevantActivityManager
// (RequiredAPI)

void UFirstTimeRegionSelectRedirector_C::GetRelevantActivityManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeRegionSelectRedirector.FirstTimeRegionSelectRedirector_C.GetRelevantActivityManager");

	UFirstTimeRegionSelectRedirector_C_GetRelevantActivityManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
