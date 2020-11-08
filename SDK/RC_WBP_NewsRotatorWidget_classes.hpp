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

// WidgetBlueprintGeneratedClass WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C
// 0xFFFFFFFFC5327900 (0x22E8EA80 - 0x5DB67180)
class UWBP_NewsRotatorWidget_C : public UKSNewsRotatorWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C");
		return ptr;
	}


	void NavigateConfirm();
	void UpdatePrompts();
	void GetNavigationWidgets();
	void ShowPanel();
	void UpdateRotatorButtons();
	void ShowPrevPanel();
	void ShowNextPanel();
	void PopulateData();
	void InitializeWidget();
	void OnJsonChanged();
	void OnAnimationFinished();
	void OnItemClicked();
	void OnActionClicked();
	void OnActionButtonHovered();
	void OnInputModeChange();
	void Tick();
	void InitializeWidgetNavigation();
	void BindInputActions();
	void UnbindInputActions();
	void HandleGamepadHovered();
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_WBP_NewsRotatorWidget();
	void NewsVisibilityUpdated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
