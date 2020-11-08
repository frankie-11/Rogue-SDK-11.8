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

// WidgetBlueprintGeneratedClass GrenadeMarker.GrenadeMarker_C
// 0xFFFFFFFFC7357C00 (0x24E9B800 - 0x5DB43C00)
class UGrenadeMarker_C : public UKSMapIconWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GrenadeMarker.GrenadeMarker_C");
		return ptr;
	}


	void ShouldUpdate();
	void Get_Weapon_Asset_or_Secondary();
	void Update();
	void Tick();
	void PreConstruct();
	void OnWeaponAssetSet();
	void Construct();
	void ExecuteUbergraph_GrenadeMarker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
