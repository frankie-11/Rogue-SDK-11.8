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

// WidgetBlueprintGeneratedClass RedeemCodeScreen.RedeemCodeScreen_C
// 0x23372080
class URedeemCodeScreen_C : public UKSRedeemCodeScreenBase
{
public:
	unsigned char                                      UnknownData00[0x23372080];                                // 0x0000(0x23372080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RedeemCodeScreen.RedeemCodeScreen_C");
		return ptr;
	}


	void UpdateSubmitButtonState();
	void SetErrorMessage();
	void OnSpamPreventTimeout();
	void GetPaletteColor();
	void ShowPending();
	void EndPending();
	void NavigateBack();
	void StartShowAnim();
	void InitializeTickAnimations();
	void ShowCodeRedeemFinished();
	void ShowCodeRedeemAnim();
	void InitHideAnimation();
	void HideCodeRedeemFinished();
	void HideCodeRedeemAnim();
	void StartHideAnim();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void Construct();
	void InitializeWidgetButtonListeners();
	void SubmitCode();
	void StartShowSequence();
	void StartHideSequence();
	void OnShown();
	void OnHide();
	void OnCloseButtonClicked();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnRedeemCodeSubmit();
	void OnRedeemCodeResult();
	void HandleInputStateChanged();
	void OnCodeTextChanged();
	void OnCodeTextCommit();
	void ExecuteUbergraph_RedeemCodeScreen();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
