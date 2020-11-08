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

// WidgetBlueprintGeneratedClass GameTimerBarCenter.GameTimerBarCenter_C
// 0xFFFFFFFFD032D200 (0x2AF21B80 - 0x5ABF4980)
class UGameTimerBarCenter_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameTimerBarCenter.GameTimerBarCenter_C");
		return ptr;
	}


	void SetContestedState();
	void PlayScoreAnim();
	void SetCurrentPhase();
	void ResetCenterTextStyle();
	void ResetCenter();
	void SetRoundTimers();
	void Update_Bomb_Timer_Seconds();
	void Reset_Bomb_Timer();
	void Set_Hack_Seconds();
	void Set_Countdown_Seconds();
	void Set_View_By_Objective_State();
	void PreConstruct();
	void Tick();
	void PlayFlipTime();
	void SetProgress();
	void SetTeamProgress();
	void Tick_Countdown_Time();
	void Circle_Progress_Close();
	void Circle_Progress_Open();
	void ExecuteUbergraph_GameTimerBarCenter();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
