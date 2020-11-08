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

// Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.UpdateScalarTrack
// ()

void UBloodEffectCurveComponent_C::UpdateScalarTrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.UpdateScalarTrack");

	UBloodEffectCurveComponent_C_UpdateScalarTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.ExecuteUbergraph_BloodEffectCurveComponent
// ()

void UBloodEffectCurveComponent_C::ExecuteUbergraph_BloodEffectCurveComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.ExecuteUbergraph_BloodEffectCurveComponent");

	UBloodEffectCurveComponent_C_ExecuteUbergraph_BloodEffectCurveComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
