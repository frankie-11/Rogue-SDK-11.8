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

// WidgetBlueprintGeneratedClass WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C
// 0xFFFFFFFFD1628E80 (0x2C21D800 - 0x5ABF4980)
class UWBP_CustomLobbyPlayer_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C");
		return ptr;
	}


	void HandlePlayerContextUnhover();
	void HandlePlayerContextHover();
	void DoHover();
	void DoUnhover();
	void DoPlayerClicked();
	void GetRendererIsLocalPlayer();
	void GetCanLocalPlayerKick();
	void UserIsOverUs();
	void GetCanLocalPlayerControl();
	void NavigateConfirm();
	void OnKeyUp();
	void SetEmpty();
	void SetPlayerInfo();
	void SetControlsSide();
	void GetControlsHoverAnim();
	void PreConstruct();
	void BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void OnInitialized();
	void BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void HandlePlayerClicked();
	void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void OnContextMenuOpen();
	void OnContextMenuClose();
	void SetVoiceState();
	void OnInputStateChange();
	void ExecuteUbergraph_WBP_CustomLobbyPlayer();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnPlayerKick__DelegateSignature();
	void OnPlayerSwap__DelegateSignature();
	void OnEmptyClicked__DelegateSignature();
	void OnPlayerClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
