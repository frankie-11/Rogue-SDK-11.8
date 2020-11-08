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

// WidgetBlueprintGeneratedClass WBP_StackedStatBar.WBP_StackedStatBar_C
// 0xFFFFFFFFC9F61D00 (0x24B51F80 - 0x5ABF0280)
class UWBP_StackedStatBar_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StackedStatBar.WBP_StackedStatBar_C");
		return ptr;
	}


	void SetStatCurrentToNext();
	void SetStatCurrent();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_StackedStatBar();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
