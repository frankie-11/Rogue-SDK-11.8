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

// Function NearMissCurveComponent.NearMissCurveComponent_C.UpdateScalarTrack
// ()

void UNearMissCurveComponent_C::UpdateScalarTrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function NearMissCurveComponent.NearMissCurveComponent_C.UpdateScalarTrack");

	UNearMissCurveComponent_C_UpdateScalarTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NearMissCurveComponent.NearMissCurveComponent_C.ExecuteUbergraph_NearMissCurveComponent
// ()

void UNearMissCurveComponent_C::ExecuteUbergraph_NearMissCurveComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function NearMissCurveComponent.NearMissCurveComponent_C.ExecuteUbergraph_NearMissCurveComponent");

	UNearMissCurveComponent_C_ExecuteUbergraph_NearMissCurveComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
