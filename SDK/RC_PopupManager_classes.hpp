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

// WidgetBlueprintGeneratedClass PopupManager.PopupManager_C
// 0xFFFFFFFFD020DB60 (0x2B2AC580 - 0x5B09EA20)
class UPopupManager_C : public UPUMG_PopupManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PopupManager.PopupManager_C");
		return ptr;
	}


	void OnKeyUp();
	void OnKeyDown();
	void SetupSubHeaderText();
	void SetupButtons();
	void SetupTextEntry();
	void SetupWarningText();
	void SetupDescription();
	void SetupHeader();
	void NavigateBack();
	void Construct();
	void ShowPopup();
	void HidePopup();
	void ButtonPressed();
	void InitializeWidgetNavigation();
	void InitializeWidget();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void HandleCancelButtonClicked();
	void OnShown();
	void OnHide();
	void OnBackButton();
	void ExecuteUbergraph_PopupManager();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
