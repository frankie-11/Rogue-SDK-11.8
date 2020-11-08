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

// WidgetBlueprintGeneratedClass WBP_Toast2.WBP_Toast2_C
// 0xFFFFFFFFD1BE1800 (0x2C7D6180 - 0x5ABF4980)
class UWBP_Toast2_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Toast2.WBP_Toast2_C");
		return ptr;
	}


	void DisplayAwardUnlock();
	void DisplayItemUnlock();
	void DisplayMercMasteryLevelUp();
	void DisplayChallengeAchievement();
	void OnOutroFinished();
	void OnWaitingFinished();
	void OnIntroFinished();
	void SetRarityTint();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_WBP_Toast2();
	void FinishedOutroAnimation__DelegateSignature();
	void OnRemoveToastNotification__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
