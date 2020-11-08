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

// WidgetBlueprintGeneratedClass WBP_Progression.WBP_Progression_C
// 0xFFFFFFFFCE88F480 (0x29483E00 - 0x5ABF4980)
class UWBP_Progression_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Progression.WBP_Progression_C");
		return ptr;
	}


	void HandleRankedProgression();
	void OnMercLevelUp();
	void ResetVisualState();
	void HandleRogueMasteryProgression();
	void HandleReputationProgression();
	void HandlePlayerProgression();
	void Construct();
	void StartAnimation();
	void PreConstruct();
	void InitializeWidget();
	void IncrementDelay();
	void ExecuteUbergraph_WBP_Progression();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
