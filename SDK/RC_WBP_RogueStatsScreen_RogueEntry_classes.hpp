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

// WidgetBlueprintGeneratedClass WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C
// 0xFFFFFFFFCE898480 (0x29488700 - 0x5ABF0280)
class UWBP_RogueStatsScreen_RogueEntry_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C");
		return ptr;
	}


	void TickAnchorAnim();
	void ResetState();
	void PlayShowAnimInternal();
	void PlayShowAnim();
	void UpdateValueText();
	void UpdateIcon();
	void SetActivityInstance();
	void Construct();
	void Tick();
	void ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
