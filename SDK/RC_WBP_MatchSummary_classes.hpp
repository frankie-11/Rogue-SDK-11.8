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

// WidgetBlueprintGeneratedClass WBP_MatchSummary.WBP_MatchSummary_C
// 0xFFFFFFFFC6A1E480 (0x21612E00 - 0x5ABF4980)
class UWBP_MatchSummary_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MatchSummary.WBP_MatchSummary_C");
		return ptr;
	}


	void PopulatePlayerStats();
	void PopulateMatchSummary();
	void PopulateBestStats();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_MatchSummary();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
