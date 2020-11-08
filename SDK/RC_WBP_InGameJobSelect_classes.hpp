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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect.WBP_InGameJobSelect_C
// 0xFFFFFFFFCC912580 (0x27506F00 - 0x5ABF4980)
class UWBP_InGameJobSelect_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelect.WBP_InGameJobSelect_C");
		return ptr;
	}


	void SetGamepadPrompts();
	void SetAttackDefendMessage();
	void HandlePhaseChange();
	void RestoreVisualState();
	void OnInputStateChanged();
	void SetHoverMessage();
	void CanSelect();
	void OnPlayerSelectionStateChanged();
	void OnTimerTick();
	void OnJobEntrySelected();
	void Update_Job_Entry();
	void ClearSelectedRogue();
	void SetJobEntries();
	void InitializeWidget();
	void PreConstruct();
	void OnJobHovered();
	void OnJobUnhovered();
	void OnShown();
	void BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_InGameJobSelect();
	void OnCancelJobSelection__DelegateSignature();
	void OnViewJobLoadout__DelegateSignature();
	void OnLockInJob__DelegateSignature();
	void OnJobSelected__DelegateSignature();
	void OnResetJobEntries__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
