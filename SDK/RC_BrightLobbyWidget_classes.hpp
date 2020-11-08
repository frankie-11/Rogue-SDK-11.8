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

// WidgetBlueprintGeneratedClass BrightLobbyWidget.BrightLobbyWidget_C
// 0x2478E880
class UBrightLobbyWidget_C : public UKSLobbyWidget
{
public:
	unsigned char                                      UnknownData00[0x2478E880];                                // 0x0000(0x2478E880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BrightLobbyWidget.BrightLobbyWidget_C");
		return ptr;
	}


	void OnKeyUp();
	void OnKeyDown();
	void SetErrorMessageDT();
	void UninitializeSubWidgets();
	void InitializeSubWidgets();
	void HidePersistentWidgets();
	void HandleMainLobbyCameraSet();
	void HandlePreMatchAnimStarted();
	void UnbindLobbyAnimationHandling();
	void BindLobbyAnimationHandling();
	void UninitializeKSWidgets();
	void InitializeKSWidgets();
	void CreateStickyWidgetData();
	void Set_Safe_Frame();
	void InitializeWidget();
	void UninitializeWidget();
	void OnShown();
	void HandleSpecialRouteCases();
	void Tick();
	void Handle_Viewport_Size_Changed();
	void HandleOpenTextChat();
	void InitializeWidgetButtonListeners();
	void HandleOpenTextChatForCommand();
	void HandleOpenTextChatForChat();
	void OpenTextChatToPlayer();
	void HandleViewStateChangeStarted();
	void DebugOnePress();
	void DebugOneRelease();
	void DebugTwoPress();
	void DebugTwoRelease();
	void ExecuteUbergraph_BrightLobbyWidget();
	void BackButtonClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
