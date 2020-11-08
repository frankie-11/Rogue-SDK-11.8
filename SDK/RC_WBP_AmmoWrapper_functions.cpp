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

// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.GetAmmoWidgets
// ()

void UWBP_AmmoWrapper_C::GetAmmoWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.GetAmmoWidgets");

	UWBP_AmmoWrapper_C_GetAmmoWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.OnAmmoChanged
// ()

void UWBP_AmmoWrapper_C::OnAmmoChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.OnAmmoChanged");

	UWBP_AmmoWrapper_C_OnAmmoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.SetInitialAmmoCount
// ()

void UWBP_AmmoWrapper_C::SetInitialAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.SetInitialAmmoCount");

	UWBP_AmmoWrapper_C_SetInitialAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.AddAmmoCount
// ()

void UWBP_AmmoWrapper_C::AddAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.AddAmmoCount");

	UWBP_AmmoWrapper_C_AddAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
