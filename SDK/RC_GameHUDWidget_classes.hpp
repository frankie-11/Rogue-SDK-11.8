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

// WidgetBlueprintGeneratedClass GameHUDWidget.GameHUDWidget_C
// 0xFFFFFFFFC85D8800 (0x231CD180 - 0x5ABF4980)
class UGameHUDWidget_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameHUDWidget.GameHUDWidget_C");
		return ptr;
	}


	void ShouldVoteBlockMenu();
	void FlushVoteInput();
	void ReleasePlayerInputs();
	void GetFocusableWidgets();
	void InitializeHUDContent();
	void SetSafeFrame();
	void Add_Game_Rule_Widget();
	void InitializeKillCam();
	void InitializeHudWidgets();
	void InitializeMapWidgets();
	void Construct();
	void Map();
	void InputListeners();
	void Menu();
	void Tick();
	void SetListenersActive();
	void HandleKillCamEnabled();
	void ShowHUD();
	void HideHUD();
	void ToggleTopBarHUD();
	void InitializeJobSelectionManager();
	void HandleOpenTextChat();
	void OpenTextChatToPlayer();
	void Handle_Viewport_Size_Changed();
	void InitializeWidget();
	void ToggleTabScreen();
	void DebugOnePress();
	void DebugOneRelease();
	void DebugTwoPress();
	void DebugTwoRelease();
	void OnChangedInput();
	void ExecuteUbergraph_GameHUDWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
