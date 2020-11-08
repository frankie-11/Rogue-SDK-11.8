#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C
// 0xFFFFFFFFBD8BBA80 (0x24271400 - 0x669B5980)
class UAttackBomb_WeaponComponent_C : public UMaster_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C");
		return ptr;
	}


	void OnSkyDiveStarted();
	void OnSkyDiveSkipped();
	void OnSkyDiveEnded();
	void DoesCharacterHaveBackpack();
	void BombStateChange();
	void OnNeutralBombStateChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
