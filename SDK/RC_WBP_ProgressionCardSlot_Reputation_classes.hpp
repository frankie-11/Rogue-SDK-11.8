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

// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_Reputation.WBP_ProgressionCardSlot_Reputation_C
// 0xFFFFFFFFC4014380 (0x1EC08D00 - 0x5ABF4980)
class UWBP_ProgressionCardSlot_Reputation_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_Reputation.WBP_ProgressionCardSlot_Reputation_C");
		return ptr;
	}


	void ProcessPlayerProgression();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
