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

// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C
// 0xFFFFFFFFC401B800 (0x1EC0BA80 - 0x5ABF0280)
class UWBP_ProgressionCardSlot_PlayerXP_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C");
		return ptr;
	}


	void ProcessPlayerProgression();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
