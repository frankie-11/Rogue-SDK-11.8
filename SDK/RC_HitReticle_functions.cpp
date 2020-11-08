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

// Function HitReticle.HitReticle_C.OnHitAnimationFinished
// (Final)

void UHitReticle_C::OnHitAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReticle.HitReticle_C.OnHitAnimationFinished");

	UHitReticle_C_OnHitAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitReticle.HitReticle_C.ResetHitReticle
// (Final)

void UHitReticle_C::ResetHitReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReticle.HitReticle_C.ResetHitReticle");

	UHitReticle_C_ResetHitReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitReticle.HitReticle_C.ExecuteUbergraph_HitReticle
// (Final, BlueprintCosmetic)

void UHitReticle_C::ExecuteUbergraph_HitReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReticle.HitReticle_C.ExecuteUbergraph_HitReticle");

	UHitReticle_C_ExecuteUbergraph_HitReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
