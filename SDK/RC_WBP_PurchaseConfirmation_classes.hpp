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

// WidgetBlueprintGeneratedClass WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C
// 0x2A663080
class UWBP_PurchaseConfirmation_C : public UKSPurchaseConfirmationWidget
{
public:
	unsigned char                                      UnknownData00[0x2A663080];                                // 0x0000(0x2A663080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C");
		return ptr;
	}


	void DisplaySlowPurchaseWarning();
	void SetPreviewImage();
	void GetFullScreenSplashImage();
	void OnAcquisitionFailed();
	void SetPreferredDefaultSkin();
	void Set_Emote();
	void TryHandleRightStickKeyDown();
	void OnBundleItemHoveredGamepad();
	void OnToggleViewMode();
	void OnInputModeChanged();
	void SetSubDetails();
	void OnBundleItemClicked();
	void PopulateBundleContentsPanel();
	void OnNextBundlePage();
	void OnPreviousBundlePage();
	void GoBackToItemDisplay();
	void OnViewBundleContents();
	void OnKeyDown();
	void OnKeyUp();
	void OnNextItem();
	void OnPreviousItem();
	void DisplayModelOrImageForItem();
	void ClearModels();
	void SetSkinOrRogueModel();
	void PopulateItemData();
	void OnAcquisition();
	void PurchaseItemWithPortalOffer();
	void PurchaseItemWithPrice();
	void DisplaySingleItem();
	void NavigateBack();
	void PreConstruct();
	void Tick();
	void InitializeWidget();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void OnShown();
	void OnHide();
	void SetScrollValueUp();
	void SetScrollValueDown();
	void ClearScrollValue();
	void FocusGroupNavigateRightFailure();
	void FocusGroupNavigateLeftFailure();
	void UpdateScrollPromptVisibility();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_PurchaseConfirmation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
