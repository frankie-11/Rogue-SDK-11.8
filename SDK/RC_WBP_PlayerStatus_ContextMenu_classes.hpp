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

// WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C
// 0xFFFFFFFFCAE3AC00 (0x25A2F580 - 0x5ABF4980)
class UWBP_PlayerStatus_ContextMenu_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C");
		return ptr;
	}


	void GetStatusColor();
	void UpdatePlayerStatus();
	void HideContextMenu();
	void ShowContextMenu();
	void HandleOptionSelected();
	void SetupOptionButton();
	void PreConstruct();
	void InitializeWidget();
	void Construct();
	void SetPlayerInfo();
	void DetermineToggleState();
	void ExecuteUbergraph_WBP_PlayerStatus_ContextMenu();
	void OnMenuStart__DelegateSignature();
	void OnReadyNavigation__DelegateSignature();
	void OnMenuHidden__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
