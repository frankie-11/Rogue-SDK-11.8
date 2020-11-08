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

// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinObject
// ()

void USkinnedAnimInstance::GetSkinObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinObject");

	USkinnedAnimInstance_GetSkinObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedBlendSpace
// ()

void USkinnedAnimInstance::GetSkinnedBlendSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedBlendSpace");

	USkinnedAnimInstance_GetSkinnedBlendSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimSequence
// ()

void USkinnedAnimInstance::GetSkinnedAnimSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimSequence");

	USkinnedAnimInstance_GetSkinnedAnimSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimOffset
// ()

void USkinnedAnimInstance::GetSkinnedAnimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimOffset");

	USkinnedAnimInstance_GetSkinnedAnimOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimMontage
// ()

void USkinnedAnimInstance::GetSkinnedAnimMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimMontage");

	USkinnedAnimInstance_GetSkinnedAnimMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
