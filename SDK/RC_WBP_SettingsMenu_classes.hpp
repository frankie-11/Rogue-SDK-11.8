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

// WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C
// 0xFFFFFFFFCCB2C8C0 (0x2A628B80 - 0x5DAFC2C0)
class UWBP_SettingsMenu_C : public UKSSettingsMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C");
		return ptr;
	}


	void On_Tab_Clicked();
	void ResetPageState();
	void GetContainerWidgetForPUMGWidgetOnPage();
	void On_Widget_Mouse_Entered();
	void Setup_Hover_Handling();
	void GetSettingsContainersForPage();
	void GetSettingsWidgetForPUMGWidgetOnPage();
	void Get_Current_Page();
	void Assign_Tab_Icons();
	void Assign_Tab_Icon();
	void On_Input_State_Changed();
	void Setup_Input_State_Handling();
	void Setup_Login_Handling();
	void Handle_Login_State();
	void Tab_Right();
	void Tab_Left();
	void Go_To_Active_Tab();
	void Recover_From_Navigate_Failure();
	void Widget_Navigate_Down_Failure();
	void Widget_Navigate_Up_Failure();
	void On_Widget_Gamepad_Hovered();
	void Scroll_Widget_Into_View();
	void Scroll_To_Start();
	void Scroll_To_End();
	void GoBack();
	void Revert_Settings();
	void ConfirmExit();
	void Restore_Settings();
	void ExitSettingsPage();
	void HasAnyUnsavedSetting();
	void Save_Settings();
	void NavigateBackPressed();
	void NavigateBack();
	void GetSettingsWidgetsForPage();
	void SetupNavigationForPage();
	void On_Tab_Selected();
	void Add_Tab_For_Settings_Page();
	void Add_Settings_Page_Widget();
	void SettingsMenuApplyClickSFX();
	void SettingsMenuBackClickSFX();
	void SettingsMenuRevertButtonClickSFX();
	void AddSettingsPageWidget();
	void OnShown();
	void OnHide();
	void OnMenuConfigSet();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void RebuildNavigation();
	void OnBackButton();
	void OnApplyButton();
	void OnRevertButton();
	void OnConfirmExit();
	void PreConstruct();
	void ExecuteUbergraph_WBP_SettingsMenu();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
