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

// WidgetBlueprintGeneratedClass WBP_KillCardCenter.WBP_KillCardCenter_C
// 0xFFFFFFFFC3E96680 (0x219F7300 - 0x5DB60C80)
class UWBP_KillCardCenter_C : public UKSKillCardWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KillCardCenter.WBP_KillCardCenter_C");
		return ptr;
	}


	void Finished_F4241C894DF6E178C8E260A9D78AE3B0();
	void Show_Sequence();
	void ShowPlayerAndMessage();
	void ClearMessage();
	void Display_Duration_Finished();
	void ExecuteUbergraph_WBP_KillCardCenter();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
