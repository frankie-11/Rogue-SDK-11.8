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

// WidgetBlueprintGeneratedClass WBP_RadialSelect.WBP_RadialSelect_C
// 0xFFFFFFFFCD771C60 (0x2B26CD00 - 0x5DAFB0A0)
class UWBP_RadialSelect_C : public UKSRadialSelectionWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RadialSelect.WBP_RadialSelect_C");
		return ptr;
	}


	void SetRadialItemName();
	void SetupInputCallout();
	void IsSelectorVisible();
	void ShowRadialMenuCycle();
	void GetRadialItemName();
	void ActivateRadialItem();
	void GetTextForCosmeticSlot();
	void SetRadialMenuNames();
	void Get_Equipped_Emotes();
	void GetDeadZone();
	void RefreshOptions();
	void GetOptionsCount();
	void GetWheelSize();
	void InitializeWidget();
	void RadialOptionUnhover();
	void RadialOptionSelected();
	void RadialOptionHovered();
	void TraceSelectionCursor();
	void Handle_Equipment_Change();
	void ChangeToNewRadialMenu();
	void OnCycledMenus();
	void SetupForRadialWheelMode();
	void ShowSelector();
	void HideSelector();
	void PreConstruct();
	void ExecuteUbergraph_WBP_RadialSelect();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
