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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C
// 0xFFFFFFFFCE56C500 (0x29160E80 - 0x5ABF4980)
class UWBP_InGameJobSelect_TeamComp_Teammate_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C");
		return ptr;
	}


	void Should_Dispatch_Display_Job_Info();
	void UpdatePlayerName();
	void PopulateSelectedJob();
	void SetEnemyDirectly();
	void HandleUIRelevantStateChange();
	void ResetJobEntry();
	void Bind_to_Model_Viewer();
	void SetInitialDisplay();
	void SetJobEntry();
	void SetPlayerOwner();
	void InitializeWidget();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate();
	void DisplayPlayerNameDispatcher__DelegateSignature();
	void DisplayJobInfoDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
