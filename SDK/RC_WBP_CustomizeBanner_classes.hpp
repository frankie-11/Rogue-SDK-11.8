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

// WidgetBlueprintGeneratedClass WBP_CustomizeBanner.WBP_CustomizeBanner_C
// 0x2C798C80
class UWBP_CustomizeBanner_C : public UKSPlayerCosmeticWidget
{
public:
	unsigned char                                      UnknownData00[0x2C798C80];                                // 0x0000(0x2C798C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomizeBanner.WBP_CustomizeBanner_C");
		return ptr;
	}


	void OnSortRarityDescNameAsc();
	void NavigateBack();
	void OnKeyDown();
	void AddEmptySlots();
	void SetActiveStates();
	void RegisterNavigation();
	void IsBannerItemEquipped();
	void ResetBannerSelection();
	void SetContextBar();
	void SetBannerSelection();
	void InitializeWidget();
	void OnShown();
	void OnHide();
	void InitializeWidgetNavigation();
	void OnBackPrompt();
	void OnBannerHover();
	void OnBannerUnhover();
	void OnBannerSelected();
	void OnBannerGamepadHover();
	void ExecuteUbergraph_WBP_CustomizeBanner();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
