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

// WidgetBlueprintGeneratedClass WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C
// 0xFFFFFFFFC3C4F380 (0x217B1D80 - 0x5DB62A00)
class UWBP_OutOfAmmoAlert_C : public UKSLowAmmoAlertWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C");
		return ptr;
	}


	void IsValidWeaponType();
	void HandleAmmoChanged();
	void BindToAmmoUpdate();
	void PostSetActiveWeaponComponent();
	void PreClearActiveWeaponComponent();
	void Construct();
	void ExecuteUbergraph_WBP_OutOfAmmoAlert();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
