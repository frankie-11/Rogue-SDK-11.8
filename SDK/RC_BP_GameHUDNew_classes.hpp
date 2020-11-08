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

// BlueprintGeneratedClass BP_GameHUDNew.BP_GameHUDNew_C
// 0xFFFFFFFFC69A8CE0 (0x2449E100 - 0x5DAF5420)
class ABP_GameHUDNew_C : public AKSGameHUDNew
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameHUDNew.BP_GameHUDNew_C");
		return ptr;
	}


	void GetFocusableWidgets();
	void GetContextBarWidget();
	void ToggleWatermarkDisplay();
	void GetAsyncWidgetsForString();
	void SetupJobSelectionManager();
	void GetPopupManager();
	void EvaluateFocus();
	void OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD();
	void ReceiveBeginPlay();
	void SetUIFocus();
	void HandleReturnToHomeClick();
	void OnShowHUD();
	void OnHideHUD();
	void Spawn_Tutorial_Widget();
	void OnToggleHUD();
	void OnToggleTopBar();
	void SetHUDVisible();
	void CreateGameRuleWidget();
	void BroadcastWidgetMessage();
	void BindEventToWidgetMessages();
	void HandleOnPhaseChanged();
	void HandleOpenTextChat();
	void DisplayWatermark();
	void OnAsyncWidgetInfoLoaded();
	void OpenTextChatToPlayer();
	void ApplySafeFrameScale();
	void WalkinAnim();
	void NetworkLagStateChanged();
	void ExecuteUbergraph_BP_GameHUDNew();
	void OnRuleWidgetCreated__DelegateSignature();
	void HUDMessage__DelegateSignature();
	void OnSwimmingChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
