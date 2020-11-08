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

// WidgetBlueprintGeneratedClass WBP_Challenge_Panel.WBP_Challenge_Panel_C
// 0xFFFFFFFFCEFB6B00 (0x29BAB480 - 0x5ABF4980)
class UWBP_Challenge_Panel_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Challenge_Panel.WBP_Challenge_Panel_C");
		return ptr;
	}


	void DisplayRerollPrompt();
	void GetNavigationWidgets();
	void PopulateChallenges();
	void PreConstruct();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_Challenge_Panel();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
