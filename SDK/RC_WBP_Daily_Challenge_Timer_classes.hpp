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

// WidgetBlueprintGeneratedClass WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C
// 0xFFFFFFFFD0BF1D80 (0x2B7E6700 - 0x5ABF4980)
class UWBP_Daily_Challenge_Timer_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C");
		return ptr;
	}


	void CheckForNewChallenge();
	void UpdateContractTimer();
	void SetRemainingTime();
	void Tick();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_Daily_Challenge_Timer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
