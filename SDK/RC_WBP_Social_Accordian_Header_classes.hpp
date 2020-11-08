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

// WidgetBlueprintGeneratedClass WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C
// 0xFFFFFFFFCAE2CC00 (0x25A21580 - 0x5ABF4980)
class UWBP_Social_Accordian_Header_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C");
		return ptr;
	}


	void OnHeaderUpdated();
	void OnPlayersUpdated();
	void UpdateMessage();
	void GetIsExpanded();
	void GetData();
	void SetExpanded();
	void GetOuterHud();
	void SetListItemObject();
	void InitializeWidget();
	void UninitializeWidget();
	void HandleClicked();
	void OnUnhovered();
	void OnHovered();
	void OnListItemObjectSet();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged();
	void BP_OnItemSelectionChanged();
	void Construct();
	void UnbindCategoryEvents();
	void BindCategoryEvents();
	void OnInputStateChange();
	void ForceUnhover();
	void ExecuteUbergraph_WBP_Social_Accordian_Header();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
