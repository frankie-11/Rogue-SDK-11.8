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

// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C
// 0xFFFFFFFFC401B180 (0x1EC0FB00 - 0x5ABF4980)
class UWBP_ProgressionCardSlot_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C");
		return ptr;
	}


	void SetRankedVisualDisplay();
	void SetInitialState();
	void Construct();
	void AnimateIn();
	void PreConstruct();
	void OnMercMasteryLevelUp();
	void OnRankTierSet();
	void StartAnimTimerComplete();
	void ExecuteUbergraph_WBP_ProgressionCardSlot();
	void StartAnimation__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
