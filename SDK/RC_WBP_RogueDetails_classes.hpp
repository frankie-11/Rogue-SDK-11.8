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

// WidgetBlueprintGeneratedClass WBP_RogueDetails.WBP_RogueDetails_C
// 0x23379100
class UWBP_RogueDetails_C : public UKSRogueDetailsWidget
{
public:
	unsigned char                                      UnknownData00[0x23379100];                                // 0x0000(0x23379100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RogueDetails.WBP_RogueDetails_C");
		return ptr;
	}


	void SetJobCharacter();
	void OnPurchaseRogue();
	void SetContextBar();
	void InitializeOverViewButtons();
	void NavigateBack();
	void BindOverViewButtons();
	void PopulatedJobOverview();
	void Construct();
	void InitializeWidget();
	void OnShown();
	void InitializeWidgetNavigation();
	void OnCombatLoadout();
	void OnCustomizeLoadout();
	void OnRogueMastery();
	void OnBackPrompt();
	void SetDisableButtons();
	void OnHide();
	void ExecuteUbergraph_WBP_RogueDetails();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
