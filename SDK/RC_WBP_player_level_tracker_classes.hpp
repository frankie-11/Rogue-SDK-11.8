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

// WidgetBlueprintGeneratedClass WBP_player_level_tracker.WBP_player_level_tracker_C
// 0xFFFFFFFFCE88E900 (0x29483280 - 0x5ABF4980)
class UWBP_player_level_tracker_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_player_level_tracker.WBP_player_level_tracker_C");
		return ptr;
	}


	void TriggerLevelUpEvent();
	void GetXpProgressPercentageInLevel();
	void SetNewLerpTimeframe();
	void UpdateLevelDisplay();
	void GetXPRequiredForLevel();
	void GetNextLevel();
	void GetCurrentLevel();
	void DisplayXpAnimationState();
	void OnLevelUpAnimCompleted();
	void SetPalette();
	void ProcessPlayerProgression();
	void InitializeWidget();
	void Tick();
	void PlayProgressionAnim();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_player_level_tracker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
