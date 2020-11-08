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

// WidgetBlueprintGeneratedClass DownedHealthRemaining.DownedHealthRemaining_C
// 0x1255D180
class UDownedHealthRemaining_C : public UKSViewedTargetHealthWidget
{
public:
	unsigned char                                      UnknownData00[0x1255D180];                                // 0x0000(0x1255D180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DownedHealthRemaining.DownedHealthRemaining_C");
		return ptr;
	}


	void Unbind_Player_State();
	void StatusTextBind();
	void OverallColorBind();
	void BarPercentBind();
	void Handle_Give_Up_Timer_Active();
	void Tick();
	void PreClearPawn();
	void PostSetPawn();
	void DownStateChanged();
	void FadedOutFinished();
	void Construct();
	void InitializeWidget();
	void Handle_Input_State_Changed();
	void PostSetPlayerState();
	void PreClearPlayerState();
	void On_Character_Give_Up_Allowed();
	void ExecuteUbergraph_DownedHealthRemaining();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
