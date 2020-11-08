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

// WidgetBlueprintGeneratedClass LoginEula.LoginEula_C
// 0xFFFFFFFFD1B98480 (0x2C78CE00 - 0x5ABF4980)
class ULoginEula_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginEula.LoginEula_C");
		return ptr;
	}


	void ShowArrows();
	void ChangeFontSizeText();
	void HandleCalloutSwitcher();
	void Construct();
	void Tick();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void ScrollUpPressed();
	void ScrollDownPressed();
	void ScrollUpReleased();
	void ScrollDownReleased();
	void Handle_Input_State_Changed();
	void SetActiveScrollCallout();
	void BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature();
	void Destruct();
	void OnHide();
	void OnShown();
	void ExecuteUbergraph_LoginEula();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
