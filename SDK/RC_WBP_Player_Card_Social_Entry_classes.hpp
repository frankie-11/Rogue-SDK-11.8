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

// WidgetBlueprintGeneratedClass WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C
// 0xFFFFFFFFCAE30580 (0x25A24F00 - 0x5ABF4980)
class UWBP_Player_Card_Social_Entry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C");
		return ptr;
	}


	void SetCurrentInfoContainer();
	void UpdatePlayerCard();
	void SetHoverState();
	void GetDisplayItem();
	void UpdateDataItem();
	void BP_OnItemSelectionChanged();
	void BP_OnItemExpansionChanged();
	void BP_OnEntryReleased();
	void OnListItemObjectSet();
	void InitializeWidget();
	void UninitializeWidget();
	void OnHeaderClicked();
	void OnPlayerClicked();
	void OnMouseEnter();
	void OnMouseLeave();
	void OnShown();
	void HandlePlayerContainerUpdate();
	void ExecuteUbergraph_WBP_Player_Card_Social_Entry();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
