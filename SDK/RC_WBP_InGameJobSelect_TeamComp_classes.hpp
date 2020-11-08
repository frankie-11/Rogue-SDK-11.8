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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C
// 0xFFFFFFFFCE56EA00 (0x29163380 - 0x5ABF4980)
class UWBP_InGameJobSelect_TeamComp_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C");
		return ptr;
	}


	void ResetJobEntries();
	void TeamMembersUpdated();
	void SetupTeamDisplay();
	void SetInitialView();
	void OnJobEntryUpdated();
	void OnPlayerStateChanged();
	void OnTeamChanged();
	void PreConstruct();
	void Construct();
	void InitializeWidget();
	void OnPlayerStateUpdate();
	void ExecuteUbergraph_WBP_InGameJobSelect_TeamComp();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
