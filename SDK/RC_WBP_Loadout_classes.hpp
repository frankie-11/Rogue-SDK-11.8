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

// WidgetBlueprintGeneratedClass WBP_Loadout.WBP_Loadout_C
// 0xFFFFFFFFC6F7AB00 (0x21B6F480 - 0x5ABF4980)
class UWBP_Loadout_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadout.WBP_Loadout_C");
		return ptr;
	}


	void OnPerkClicked();
	void OnPerkSectionClicked();
	void OnLoadoutClicked();
	void SelectPerk();
	void NavigateBack();
	void OnKeyDown();
	void HandleInputModeChanged();
	void PopulateStatsPanel();
	void SetCurrentIndex();
	void CreateWidgetArrays();
	void SwapToItemDisplay();
	void Swap_to_Perk_Display();
	void PopulatePerkButtons();
	void PopulateItemDetails();
	void PopulateRogueDetails();
	void PopulateLoadout();
	void PreConstruct();
	void Construct();
	void OnShown();
	void InitializeWidget();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_WBP_Loadout();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
