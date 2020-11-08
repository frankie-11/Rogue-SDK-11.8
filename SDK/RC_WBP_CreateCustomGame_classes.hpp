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

// WidgetBlueprintGeneratedClass WBP_CreateCustomGame.WBP_CreateCustomGame_C
// 0xFFFFFFFFC7DD6F80 (0x25959C00 - 0x5DB82C80)
class UWBP_CreateCustomGame_C : public UKSQuickPlay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CreateCustomGame.WBP_CreateCustomGame_C");
		return ptr;
	}


	void Handle_Input_State_Changed();
	void OnKeyUp();
	void GetQueueImageById();
	void SetupQueueInfoPanel();
	void OnLobbyCreated();
	void OnLobbyCanceled();
	void SetupConfirmation();
	void ShowConfirmation();
	void BindConfirmationNavigation();
	void GoToLastScreen();
	void NavigateBack();
	void OnKeyDown();
	void OnPreviousTab();
	void OnNextTab();
	void SetNavigation();
	void ResetMapSelection();
	void OnMapSelected();
	void OnTabSelected();
	void Setup_Custom_Tabs();
	void Construct();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void CheckIsInCustomMatch();
	void OnButtonsCreated();
	void OnBackButtonClicked();
	void OnHide();
	void OnShown();
	void PreConstruct();
	void HandleMapScrollChange();
	void Tick();
	void ExecuteUbergraph_WBP_CreateCustomGame();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
