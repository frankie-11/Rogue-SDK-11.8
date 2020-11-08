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

// WidgetBlueprintGeneratedClass WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C
// 0xFFFFFFFFC9B88000 (0x276EAA00 - 0x5DB62A00)
class UWBP_ActiveWeaponComponent_C : public UKSLowAmmoAlertWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C");
		return ptr;
	}


	void SetAmmoInClipDisplaySize();
	void SetClipCount();
	void DetermineLowAmmo();
	void OnAmmoChange();
	void SetReserveAmmo();
	void PostSetActiveWeaponComponent();
	void PreClearActiveWeaponComponent();
	void Construct();
	void ExecuteUbergraph_WBP_ActiveWeaponComponent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
