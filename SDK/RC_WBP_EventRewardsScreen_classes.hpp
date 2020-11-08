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

// WidgetBlueprintGeneratedClass WBP_EventRewardsScreen.WBP_EventRewardsScreen_C
// 0xFFFFFFFFD1CF7200 (0x2C8EBB80 - 0x5ABF4980)
class UWBP_EventRewardsScreen_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EventRewardsScreen.WBP_EventRewardsScreen_C");
		return ptr;
	}


	void NavigateBack();
	void PerformInitialSetup();
	void OnShown();
	void InitializeWidget();
	void OnBackPrompt();
	void ExecuteUbergraph_WBP_EventRewardsScreen();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
