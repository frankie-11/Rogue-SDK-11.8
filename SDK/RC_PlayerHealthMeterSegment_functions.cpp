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

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility
// ()

void UPlayerHealthMeterSegment_C::SetDotVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility");

	UPlayerHealthMeterSegment_C_SetDotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse
// ()

void UPlayerHealthMeterSegment_C::PlayDamagePulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse");

	UPlayerHealthMeterSegment_C_PlayDamagePulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState
// ()

void UPlayerHealthMeterSegment_C::SetBonusState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState");

	UPlayerHealthMeterSegment_C_SetBonusState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues
// ()

void UPlayerHealthMeterSegment_C::SetSliceValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues");

	UPlayerHealthMeterSegment_C_SetSliceValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
