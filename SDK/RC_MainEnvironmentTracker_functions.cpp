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

// Function MainEnvironmentTracker.MainEnvironmentTracker_C.BlueprintEnvironmentChanged
// ()

void UMainEnvironmentTracker_C::BlueprintEnvironmentChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainEnvironmentTracker.MainEnvironmentTracker_C.BlueprintEnvironmentChanged");

	UMainEnvironmentTracker_C_BlueprintEnvironmentChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
