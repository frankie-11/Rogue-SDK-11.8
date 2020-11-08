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

// WidgetBlueprintGeneratedClass WBP_HomeQuickPlay.WBP_HomeQuickPlay_C
// 0x22E89100
class UWBP_HomeQuickPlay_C : public UKSQuickPlayWidget
{
public:
	unsigned char                                      UnknownData00[0x22E89100];                                // 0x0000(0x22E89100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HomeQuickPlay.WBP_HomeQuickPlay_C");
		return ptr;
	}


	void GetDeserterStatusMessage();
	void Apply_Pending_Display();
	void ForceVisualState();
	void UpdateQueueTimer();
	void UpdateStatusModeDisplay();
	void UpdateDeserterCountdown();
	void HandleQuickPlayStateUpdate();
	void TogglePlayBtnEnabled();
	void ToggleSupplementaryBtnEnabled();
	void ApplyKeyShortcutsEnabled();
	void GetNavigationWidgets();
	void HandleInputModeChanged();
	void SetCurrentGameModeTextDisplay();
	void SetupGamepadCallout();
	void ForceClickPlayButton();
	void BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ForceClickSupplementaryButton();
	void BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
	void BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature();
	void BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature();
	void ForceUnhoverSupplementaryBtn();
	void ForceHoverSupplementaryBtn();
	void OnUpdateQuickPlayState();
	void OnUpdatePenaltyTimeLeft();
	void OnSelectedQueueUpdate();
	void OnQueueStateUpdate();
	void OnTransitionAnimationFinished();
	void HandleTriggerStatusModeEvent();
	void OnUpdateQueueTimeElapsed();
	void Pending_Queue_Update_Timeout();
	void OnInitialized();
	void HandleCustomQueueUpdate();
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_WBP_HomeQuickPlay();
	void TriggerStatusModeDisplayUpdate__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
