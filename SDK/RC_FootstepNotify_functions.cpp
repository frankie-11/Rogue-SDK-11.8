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

// Function FootstepNotify.FootstepNotify_C.Received_Notify
// ()

void UFootstepNotify_C::Received_Notify()
{
	static auto fn = UObject::FindObject<UFunction>("Function FootstepNotify.FootstepNotify_C.Received_Notify");

	UFootstepNotify_C_Received_Notify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootstepNotify.FootstepNotify_C.GetSFXMaterial
// ()

void UFootstepNotify_C::GetSFXMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function FootstepNotify.FootstepNotify_C.GetSFXMaterial");

	UFootstepNotify_C_GetSFXMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
