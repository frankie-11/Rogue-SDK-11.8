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

// WidgetBlueprintGeneratedClass CashEarnedElement.CashEarnedElement_C
// 0xFFFFFFFFC85D3100 (0x231C3380 - 0x5ABF0280)
class UCashEarnedElement_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CashEarnedElement.CashEarnedElement_C");
		return ptr;
	}


	void ShowRewardEarned();
	void Construct();
	void HandleShowValueAnimFinished();
	void HandleHideValueAnimFinished();
	void ExecuteUbergraph_CashEarnedElement();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
