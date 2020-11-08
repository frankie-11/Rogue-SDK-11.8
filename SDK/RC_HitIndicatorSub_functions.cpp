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

// Function HitIndicatorSub.HitIndicatorSub_C.Tick
// (Final)

void UHitIndicatorSub_C::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndicatorSub.HitIndicatorSub_C.Tick");

	UHitIndicatorSub_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndicatorSub.HitIndicatorSub_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1
// (Final)

void UHitIndicatorSub_C::WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndicatorSub.HitIndicatorSub_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1");

	UHitIndicatorSub_C_WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndicatorSub.HitIndicatorSub_C.StartDamageAnim
// (Final)

void UHitIndicatorSub_C::StartDamageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndicatorSub.HitIndicatorSub_C.StartDamageAnim");

	UHitIndicatorSub_C_StartDamageAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndicatorSub.HitIndicatorSub_C.ExecuteUbergraph_HitIndicatorSub
// (Final, RequiredAPI, BlueprintCosmetic)

void UHitIndicatorSub_C::ExecuteUbergraph_HitIndicatorSub()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndicatorSub.HitIndicatorSub_C.ExecuteUbergraph_HitIndicatorSub");

	UHitIndicatorSub_C_ExecuteUbergraph_HitIndicatorSub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
