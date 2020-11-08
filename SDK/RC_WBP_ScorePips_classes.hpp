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

// WidgetBlueprintGeneratedClass WBP_ScorePips.WBP_ScorePips_C
// 0xFFFFFFFFC9DA3780 (0x24998100 - 0x5ABF4980)
class UWBP_ScorePips_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ScorePips.WBP_ScorePips_C");
		return ptr;
	}


	void Set_Total_Pips();
	void Set_Pips_Number();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_ScorePips();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
