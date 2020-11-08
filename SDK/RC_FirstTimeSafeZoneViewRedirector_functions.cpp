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

// Function FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C.DoesLocalSettingApply
// (Final)

void UFirstTimeSafeZoneViewRedirector_C::DoesLocalSettingApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C.DoesLocalSettingApply");

	UFirstTimeSafeZoneViewRedirector_C_DoesLocalSettingApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
