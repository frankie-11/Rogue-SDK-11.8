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

// Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnWeaponSet
// ()

void UInt_InWorld_Reticle_C::OnWeaponSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnWeaponSet");

	UInt_InWorld_Reticle_C_OnWeaponSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnPossession
// ()

void UInt_InWorld_Reticle_C::OnPossession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnPossession");

	UInt_InWorld_Reticle_C_OnPossession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
