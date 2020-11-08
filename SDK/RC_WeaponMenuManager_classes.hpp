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

// WidgetBlueprintGeneratedClass WeaponMenuManager.WeaponMenuManager_C
// 0x217BF580
class UWeaponMenuManager_C : public UKSViewedActiveWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x217BF580];                                // 0x0000(0x217BF580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponMenuManager.WeaponMenuManager_C");
		return ptr;
	}


	void IsFocusEnabled();
	void Close_All();
	void PostSetWeapon();
	void OtherWeaponUpdate();
	void PreClearWeapon();
	void InventoryChange();
	void Display_Target_List();
	void ExecuteUbergraph_WeaponMenuManager();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
