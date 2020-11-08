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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C
// 0xFFFFFFFFCE575680 (0x2916A000 - 0x5ABF4980)
class UWBP_InGameJobSelect_EnemyTeamComp_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C");
		return ptr;
	}


	void ClearJobEntries();
	void OnTeamsUpdated();
	void OnEnemyTeamMemberAdded();
	void OnEnemyTeamAdded();
	void ResetJobEntries();
	void SetInitialView();
	void OnJobEntryUpdated();
	void OnPlayerStateChanged();
	void PreConstruct();
	void Construct();
	void InitializeWidget();
	void OnPlayerStateUpdate();
	void ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
