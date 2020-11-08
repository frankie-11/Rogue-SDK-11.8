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

// WidgetBlueprintGeneratedClass NewStartMenu.NewStartMenu_C
// 0xFFFFFFFFD1407400 (0x2BFFBD80 - 0x5ABF4980)
class UNewStartMenu_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewStartMenu.NewStartMenu_C");
		return ptr;
	}


	void set_version_text();
	void NavigateBack();
	void ShowMenuAnim();
	void ShowMenuFinished();
	void InitHideAnimation();
	void HideMenuFinished();
	void HideMenuAnim();
	void StartHideAnim();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void BackToLastScreen();
	void StartShowSequence();
	void StartHideSequence();
	void InitializeTickAnimations();
	void StartShowAnim();
	void Construct();
	void BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void OnBackButton();
	void ExecuteUbergraph_NewStartMenu();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
