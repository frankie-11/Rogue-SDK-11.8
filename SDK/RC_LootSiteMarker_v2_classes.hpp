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

// WidgetBlueprintGeneratedClass LootSiteMarker_v2.LootSiteMarker_v2_C
// 0xFFFFFFFFC1723A80 (0x1F286700 - 0x5DB62C80)
class ULootSiteMarker_v2_C : public UKSLootSiteMarkerWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LootSiteMarker_v2.LootSiteMarker_v2_C");
		return ptr;
	}


	void Get_Visibility_State_For_Distance();
	void IsHovering();
	void ShouldUpdateHover();
	void Get_Default_Icon_Visibility();
	void Get_Icon_Scale();
	void GetLootTexture();
	void GetPinTexture();
	void Get_Pin_Height();
	void Get_Render_Opacity();
	void Is_Still_In_Initial_Render_Position();
	void GetHitboxMultiplierByDistance();
	void Update();
	void Construct();
	void UpdateMetersAway();
	void OnHoverStateChanged();
	void HandleLootSiteRarityChanged();
	void SetScreenRegion();
	void SetArrowAngle();
	void ExecuteUbergraph_LootSiteMarker_v2();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
