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

// WidgetBlueprintGeneratedClass WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C
// 0xFFFFFFFFC9B81580 (0x276E3F80 - 0x5DB62A00)
class UWeaponComponentAmmoWarning_C : public UKSLowAmmoAlertWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C");
		return ptr;
	}


	void Get_Ammo_Warning_Text();
	void Update_Visibility_And_State();
	void PostSetPawn();
	void PreClearPawn();
	void PawnHealthChanged();
	void AmmoStateChanged();
	void PostSetActiveWeaponComponent();
	void ExecuteUbergraph_WeaponComponentAmmoWarning();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
