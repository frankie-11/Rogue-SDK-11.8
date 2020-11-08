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

// WidgetBlueprintGeneratedClass WBP_RogueListing.WBP_RogueListing_C
// 0x23373100
class UWBP_RogueListing_C : public UKSJobSelectionWidget
{
public:
	unsigned char                                      UnknownData00[0x23373100];                                // 0x0000(0x23373100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RogueListing.WBP_RogueListing_C");
		return ptr;
	}


	void SetRogueOwned();
	void ResetFavoriteIcons();
	void OnJobHovered();
	void OnKeyUp();
	void HandleInputModeChanged();
	void NavigateBack();
	void PopulateRoleFilters();
	void GetJobButtons();
	void SetRowAndColumn();
	void ResetButtonState();
	void ResetJobList();
	void PopulateJobList();
	void InitializeTickAnimations();
	void OnShowScreenAnimUpdate();
	void OnShowScreenAnimFinished();
	void StartShowScreenAnim();
	void InitializeWidget();
	void HandleOnJobSelected();
	void OnShown();
	void ExternalOnShown();
	void InitializeWidgetNavigation();
	void OnBackPrompt();
	void RefreshJobItems();
	void HandleOnPurchasedItem();
	void ExecuteUbergraph_WBP_RogueListing();
	void OnJobListReady__DelegateSignature();
	void OnJobSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
