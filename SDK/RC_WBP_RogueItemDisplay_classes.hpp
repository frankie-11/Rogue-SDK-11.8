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

// WidgetBlueprintGeneratedClass WBP_RogueItemDisplay.WBP_RogueItemDisplay_C
// 0xFFFFFFFFCE89BC00 (0x2948BE80 - 0x5ABF0280)
class UWBP_RogueItemDisplay_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RogueItemDisplay.WBP_RogueItemDisplay_C");
		return ptr;
	}


	void SetItem();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_WBP_RogueItemDisplay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
