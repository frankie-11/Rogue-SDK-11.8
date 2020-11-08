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

// WidgetBlueprintGeneratedClass FullMap.FullMap_C
// 0xFFFFFFFFC5A0DF00 (0x23559680 - 0x5DB4B780)
class UFullMap_C : public UKSFullMapWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FullMap.FullMap_C");
		return ptr;
	}


	void CreateNewIconWidget();
	void IsOnMap();
	void ToIconRenderAngle();
	void ToIconRenderCoords();
	void NavigateBack();
	void ApplyZoom();
	void ConstrainMapScreenPosition();
	void OnMouseMove();
	void OnMouseButtonUp();
	void OnMouseButtonDown();
	void OnMouseWheel();
	void Construct();
	void FindMinimapRenderer();
	void GetMapTexture();
	void OnShown();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void MapButtonClose();
	void Tick();
	void Handle_Zone_Wait();
	void OnScrambleStateChanged();
	void RemoveSelf();
	void ExecuteUbergraph_FullMap();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
