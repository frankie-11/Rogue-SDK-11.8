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

// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveStarted
// ()

void UAttackBomb_WeaponComponent_C::OnSkyDiveStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveStarted");

	UAttackBomb_WeaponComponent_C_OnSkyDiveStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveSkipped
// ()

void UAttackBomb_WeaponComponent_C::OnSkyDiveSkipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveSkipped");

	UAttackBomb_WeaponComponent_C_OnSkyDiveSkipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveEnded
// ()

void UAttackBomb_WeaponComponent_C::OnSkyDiveEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveEnded");

	UAttackBomb_WeaponComponent_C_OnSkyDiveEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.DoesCharacterHaveBackpack
// ()

void UAttackBomb_WeaponComponent_C::DoesCharacterHaveBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.DoesCharacterHaveBackpack");

	UAttackBomb_WeaponComponent_C_DoesCharacterHaveBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.BombStateChange
// ()

void UAttackBomb_WeaponComponent_C::BombStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.BombStateChange");

	UAttackBomb_WeaponComponent_C_BombStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnNeutralBombStateChanged__DelegateSignature
// ()

void UAttackBomb_WeaponComponent_C::OnNeutralBombStateChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnNeutralBombStateChanged__DelegateSignature");

	UAttackBomb_WeaponComponent_C_OnNeutralBombStateChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
