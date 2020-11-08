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

// WidgetBlueprintGeneratedClass WBP_TopNavBar.WBP_TopNavBar_C
// 0xFFFFFFFFC9B8E100 (0x24782A80 - 0x5ABF4980)
class UWBP_TopNavBar_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TopNavBar.WBP_TopNavBar_C");
		return ptr;
	}


	void OnHasNewStoreItems();
	void HandleViewRouteChanged();
	void HandleInputStateChanged();
	void HandleNavRight();
	void HandleNavLeft();
	void InitializeNavButtons();
	void SetupGamepadIcon();
	void SetupGamepadCallout();
	void InitializeTickAnimations();
	void ShowTopBarFinished();
	void ShowTopBarAnim();
	void InitHideAnimation();
	void HideTopBarFinished();
	void HideTopBarAnim();
	void StartHideAnim();
	void StartShowAnim();
	void DisableTopBar();
	void InitializeWidget();
	void InitializeWidgetButtonListeners();
	void Construct();
	void InitializeWidgetNavigation();
	void StartShowSequence();
	void StartHideSequence();
	void ExecuteUbergraph_WBP_TopNavBar();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
