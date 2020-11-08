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

// WidgetBlueprintGeneratedClass ScoreboardOverview.ScoreboardOverview_C
// 0xFFFFFFFFC4014A80 (0x1EC09400 - 0x5ABF4980)
class UScoreboardOverview_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardOverview.ScoreboardOverview_C");
		return ptr;
	}


	void GetAllPlayerDisplays();
	void CreateTeamDisplay();
	void PopulateScoreboard();
	void InitializeWidget();
	void SetMatchResult();
	void SetTeamColor();
	void PreConstruct();
	void HandleTeamPlayersChanged();
	void ExecuteUbergraph_ScoreboardOverview();
	void OnTeamsChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
