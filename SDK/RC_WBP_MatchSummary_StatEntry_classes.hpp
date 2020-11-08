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

// WidgetBlueprintGeneratedClass WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C
// 0xFFFFFFFFC86CC800 (0x232C1180 - 0x5ABF4980)
class UWBP_MatchSummary_StatEntry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C");
		return ptr;
	}


	void SetStatText();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_MatchSummary_StatEntry();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
