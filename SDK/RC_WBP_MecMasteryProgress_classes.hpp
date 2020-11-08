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

// WidgetBlueprintGeneratedClass WBP_MecMasteryProgress.WBP_MecMasteryProgress_C
// 0xFFFFFFFFC9F63500 (0x24B57E80 - 0x5ABF4980)
class UWBP_MecMasteryProgress_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MecMasteryProgress.WBP_MecMasteryProgress_C");
		return ptr;
	}


	void GetNextMasteryRewardTier();
	void SetMasteryLevelForJob();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
