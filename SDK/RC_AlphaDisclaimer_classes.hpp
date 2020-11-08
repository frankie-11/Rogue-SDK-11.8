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

// WidgetBlueprintGeneratedClass AlphaDisclaimer.AlphaDisclaimer_C
// 0x2CBDD480
class UAlphaDisclaimer_C : public UKSAlphaDisclaimer
{
public:
	unsigned char                                      UnknownData00[0x2CBDD480];                                // 0x0000(0x2CBDD480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AlphaDisclaimer.AlphaDisclaimer_C");
		return ptr;
	}


	void HideScrollCallout();
	void ShowArrows();
	void Tick();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void ScrollUpPressed();
	void ScrollDownPressed();
	void ScrollUpReleased();
	void ScrollDownReleased();
	void Handle_Input_State_Changed();
	void CalloutTimerFunction();
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnHide();
	void OnShown();
	void Destruct();
	void ExecuteUbergraph_AlphaDisclaimer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
