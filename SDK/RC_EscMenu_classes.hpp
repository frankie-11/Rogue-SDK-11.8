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

// WidgetBlueprintGeneratedClass EscMenu.EscMenu_C
// 0xFFFFFFFFC8392600 (0x22F86F80 - 0x5ABF4980)
class UEscMenu_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EscMenu.EscMenu_C");
		return ptr;
	}


	void ToggleGameHUDLayers();
	void NavigateBack();
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void InitializeWidgetNavigation();
	void BndEvt__ReturnButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void InitializeWidgetButtonListeners();
	void Handle_Menu();
	void BndEvt__ToggleHUDLayers_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void OpenTextChatGamepad();
	void OpenTextChatForCommand();
	void OpenTextChat();
	void OnShown();
	void RefreshLeaveOptions();
	void BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void SetupSurrernderButton();
	void Change_Surrender_Button();
	void InitializeWidget();
	void ExecuteUbergraph_EscMenu();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
