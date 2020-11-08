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

// WidgetBlueprintGeneratedClass NewMenuMain.NewMenuMain_C
// 0xFFFFFFFFC9B92D00 (0x24787680 - 0x5ABF4980)
class UNewMenuMain_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewMenuMain.NewMenuMain_C");
		return ptr;
	}


	void SetupGamepadCallout();
	void HandleInputStateChanged();
	void StartHideAnim();
	void HideMenuButtonFinished();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void Construct();
	void InitHideAnimation();
	void OpenStartMenu();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void StartShowAnim();
	void InitializeTickAnimations();
	void ShowMenuButtonFinished();
	void HideMenuButtonAnim();
	void ShowMenuButtonAnim();
	void ExecuteUbergraph_NewMenuMain();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
