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

// WidgetBlueprintGeneratedClass WBP_RougeStatsScreen.WBP_RougeStatsScreen_C
// 0xFFFFFFFFD1D98B80 (0x2C98D500 - 0x5ABF4980)
class UWBP_RougeStatsScreen_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RougeStatsScreen.WBP_RougeStatsScreen_C");
		return ptr;
	}


	void RegisterScrollingInput();
	void NavigateBack();
	void GoBack();
	void TickScrolling();
	void ScrollReleased();
	void ScrollDownPressed();
	void ScrollUpPressed();
	void SetupTabNavigation();
	void GetPooledStatEntry();
	void ReturnAllStatEntriesToPool();
	void On_PnlStatEntries_SortCompareChildren_1();
	void SelectStat();
	void AddStatTabs();
	void Construct();
	void Tick();
	void InitializeWidget();
	void BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void OnShown();
	void OnBackPrompt();
	void ExecuteUbergraph_WBP_RougeStatsScreen();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
