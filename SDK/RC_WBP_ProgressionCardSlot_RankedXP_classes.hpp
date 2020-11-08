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

// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C
// 0xFFFFFFFFC401AA80 (0x1EC0AD00 - 0x5ABF0280)
class UWBP_ProgressionCardSlot_RankedXP_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C");
		return ptr;
	}


	void SetPromotionColor();
	void OnLevelDown();
	void OnLevelUp();
	void ProcessPlayerProgression();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
