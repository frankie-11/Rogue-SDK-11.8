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

// WidgetBlueprintGeneratedClass WBP_RogueCustomization.WBP_RogueCustomization_C
// 0xFFFFFFFFC6F71280 (0x21B65C00 - 0x5ABF4980)
class UWBP_RogueCustomization_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RogueCustomization.WBP_RogueCustomization_C");
		return ptr;
	}


	void SetMeleeCustomizeNav();
	void RegisterGamepadNavigation();
	void NavigateBack();
	void SetContextBar();
	void BindSlots();
	void SetSlots();
	void InitializeButtons();
	void UpdateEquippedItems();
	void SetActiveJob();
	void InitializeWidget();
	void OnCosmeticHovered();
	void OnCosmeticUnhovered();
	void OnCosmeticSelected();
	void OnShown();
	void ExternalOnShown();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void PreConstruct();
	void ExecuteUbergraph_WBP_RogueCustomization();
	void GotoCustomizationScreen__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
