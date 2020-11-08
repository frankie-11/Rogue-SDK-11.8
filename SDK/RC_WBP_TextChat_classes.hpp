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

// WidgetBlueprintGeneratedClass WBP_TextChat.WBP_TextChat_C
// 0xFFFFFFFFCD6F7F00 (0x2B2A8400 - 0x5DBB0500)
class UWBP_TextChat_C : public UKSTextChatWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TextChat.WBP_TextChat_C");
		return ptr;
	}


	void IsTextChatEnabled();
	void HandleTextChatEnabledApplied();
	void AddCancelKey();
	void ConsumeCancelInputReleased();
	void IsAnyCancelKeyDown();
	void AddAllCancelKeys();
	void ProcessDelayedFocusClear();
	void OnFocusReceived();
	void HandleSubmitTextInput();
	void CanChatInChannel();
	void GetDefaultChannel();
	void HandleChannelChanged();
	void HandleChatMessage();
	void DisableInputListeners();
	void EnableInputListeners();
	void ConsumeCancelInputPressed();
	void SetUIFocus();
	void DisplayTextChat();
	void FinishTextChat();
	void StartTextChat();
	void Construct();
	void Tick();
	void OpenTextChat();
	void OnTextCommitted();
	void InitializeWidgetNavigation();
	void HandleChatMessageReceived();
	void OnChannelChanged();
	void HandleChatChannelJoined();
	void HandleChatChannelLeft();
	void InitializeWidget();
	void OnCancelButtonPressed();
	void OpenTextChatToPlayer();
	void HandleCloseTextChat();
	void HandleTextChatEnabledChanged();
	void ShowTextChat();
	void OnRadialMenuItemUse();
	void ExecuteUbergraph_WBP_TextChat();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
