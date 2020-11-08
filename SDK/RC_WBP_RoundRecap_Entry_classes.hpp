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

// WidgetBlueprintGeneratedClass WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C
// 0xFFFFFFFFC6E02700 (0x219F2980 - 0x5ABF0280)
class UWBP_RoundRecap_Entry_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C");
		return ptr;
	}


	void SetVisualState();
	void RoundDataSet();
	void ExecuteUbergraph_WBP_RoundRecap_Entry();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
