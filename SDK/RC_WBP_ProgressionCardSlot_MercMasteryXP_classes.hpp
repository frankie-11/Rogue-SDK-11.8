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

// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C
// 0xFFFFFFFFC401E000 (0x1EC0E280 - 0x5ABF0280)
class UWBP_ProgressionCardSlot_MercMasteryXP_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C");
		return ptr;
	}


	void ProcessPlayerProgression();
	void Construct();
	void CustomEvent_1();
	void ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP();
	void OnMercLevelUp__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
