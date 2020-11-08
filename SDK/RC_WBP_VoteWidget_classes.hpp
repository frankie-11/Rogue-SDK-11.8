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

// WidgetBlueprintGeneratedClass WBP_VoteWidget.WBP_VoteWidget_C
// 0xFFFFFFFFC998C480 (0x24580E00 - 0x5ABF4980)
class UWBP_VoteWidget_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VoteWidget.WBP_VoteWidget_C");
		return ptr;
	}


	void UpdateMenuBlock();
	void UpdateVotePipStates();
	void UpdateVotePipCount();
	void CastVote();
	void ResetTimerBar();
	void UpdateRightChoice();
	void UpdateLeftChoice();
	void UpdateTimerBar();
	void Finished_B57E4A0043F84951AB8468824D8B8B03();
	void Tick();
	void OnNewPollCalled();
	void OnLocalPlayerHasVoted();
	void OnPollCompleted();
	void OnPollStateChanged();
	void SetupPollInfo();
	void InitializeWidget();
	void OnVoteCountUpdated();
	void OnInputStateChanged();
	void ExecuteUbergraph_WBP_VoteWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
