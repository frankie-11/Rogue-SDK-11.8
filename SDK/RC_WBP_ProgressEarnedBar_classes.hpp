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

// WidgetBlueprintGeneratedClass WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C
// 0xFFFFFFFFD13E5B00 (0x2BFD5D80 - 0x5ABF0280)
class UWBP_ProgressEarnedBar_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C");
		return ptr;
	}


	void GetCurrentLerpPercentage();
	void IsOnFirstTier();
	void OnLevelDownAnimCompleted();
	void IsOnFinalTier();
	void SetBaseFillPercentage();
	void Set_Fill_Colors();
	void OnLevelUpAnimCompleted();
	void GetXpPercentageInLevel();
	void DisplayXpAnimationState();
	void SetNewLerpTimeframe();
	void SetProgressionData();
	void SetFillSettings();
	void PreConstruct();
	void Construct();
	void Tick();
	void StartAnimation();
	void ExecuteUbergraph_WBP_ProgressEarnedBar();
	void OnLevelDownEvent__DelegateSignature();
	void OnLevelUpEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
