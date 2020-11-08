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

// DynamicClass Minimap.Minimap_C
// 0xFFFFFFFFCDC88A80 (0x2B7ED200 - 0x5DB64780)
class UMinimap_C : public UKSMinimapWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Minimap.Minimap_C");
		return ptr;
	}


	void UpdateFlashBang();
	void TickVisibility();
	void Tick();
	void SetScrambleTexture();
	void SetRoyaleMode();
	void OnScrambleStateChanged();
	void OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E();
	void Handle_Royale_Zone_Wait();
	void GetTransformInfo();
	void GetMapTexture();
	void FindMinimapRenderer();
	void ExecuteUbergraph_Minimap_2();
	void EvaluateRelativeHeight();
	void EvaluateIconPosition();
	void CreateNewIconWidget();
	void Construct();
	void CanShowMinimap();
	void OnRoyaleZoneWait__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
