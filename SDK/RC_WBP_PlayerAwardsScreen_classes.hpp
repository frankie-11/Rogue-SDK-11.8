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

// WidgetBlueprintGeneratedClass WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C
// 0xFFFFFFFFD1D99F00 (0x2C98E880 - 0x5ABF4980)
class UWBP_PlayerAwardsScreen_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C");
		return ptr;
	}


	void NavigateBack();
	void GoBack();
	void RegisterScrollingInput();
	void TickScrolling();
	void ScrollReleased();
	void ScrollDownPressed();
	void ScrollUpPressed();
	void CompareChildren();
	void Construct();
	void Tick();
	void OnShown();
	void InitializeWidgetButtonListeners();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void OnBackPrompt();
	void ExecuteUbergraph_WBP_PlayerAwardsScreen();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
