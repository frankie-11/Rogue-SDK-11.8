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

// Function StatusEffect.StatusEffect_C.StopHideTimer
// (Final)

void UStatusEffect_C::StopHideTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.StopHideTimer");

	UStatusEffect_C_StopHideTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.StartHideTimer
// (Final)

void UStatusEffect_C::StartHideTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.StartHideTimer");

	UStatusEffect_C_StartHideTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.PreClearPawn
// (Final)

void UStatusEffect_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.PreClearPawn");

	UStatusEffect_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.PostSetPawn
// (Final)

void UStatusEffect_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.PostSetPawn");

	UStatusEffect_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.RevealStatus
// (Final)

void UStatusEffect_C::RevealStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.RevealStatus");

	UStatusEffect_C_RevealStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.OnStuck
// (Final)

void UStatusEffect_C::OnStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.OnStuck");

	UStatusEffect_C_OnStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.HideTimeExpired
// (Final)

void UStatusEffect_C::HideTimeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.HideTimeExpired");

	UStatusEffect_C_HideTimeExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.UpdateRevealStatus
// (Final)

void UStatusEffect_C::UpdateRevealStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.UpdateRevealStatus");

	UStatusEffect_C_UpdateRevealStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffect.StatusEffect_C.ExecuteUbergraph_StatusEffect
// (Final, BlueprintCosmetic)

void UStatusEffect_C::ExecuteUbergraph_StatusEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.ExecuteUbergraph_StatusEffect");

	UStatusEffect_C_ExecuteUbergraph_StatusEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
