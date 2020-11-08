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

// Function HiRezAnimationCommon.HiRezAnimationStatics.FindPositionFromDistanceCurve
// ()

void UHiRezAnimationStatics::FindPositionFromDistanceCurve()
{
	static auto fn = UObject::FindObject<UFunction>("Function HiRezAnimationCommon.HiRezAnimationStatics.FindPositionFromDistanceCurve");

	UHiRezAnimationStatics_FindPositionFromDistanceCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
