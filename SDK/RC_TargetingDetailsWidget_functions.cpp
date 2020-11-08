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

// Function TargetingDetailsWidget.TargetingDetailsWidget_C.OnCurrentDistanceChanged
// (Final)

void UTargetingDetailsWidget_C::OnCurrentDistanceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetingDetailsWidget.TargetingDetailsWidget_C.OnCurrentDistanceChanged");

	UTargetingDetailsWidget_C_OnCurrentDistanceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TargetingDetailsWidget.TargetingDetailsWidget_C.ExecuteUbergraph_TargetingDetailsWidget
// (Final, BlueprintAuthorityOnly)

void UTargetingDetailsWidget_C::ExecuteUbergraph_TargetingDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetingDetailsWidget.TargetingDetailsWidget_C.ExecuteUbergraph_TargetingDetailsWidget");

	UTargetingDetailsWidget_C_ExecuteUbergraph_TargetingDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
