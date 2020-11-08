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

// WidgetBlueprintGeneratedClass WBP_PostMatchNavButton.WBP_PostMatchNavButton_C
// 0xFFFFFFFFC86D5E00 (0x232CA780 - 0x5ABF4980)
class UWBP_PostMatchNavButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PostMatchNavButton.WBP_PostMatchNavButton_C");
		return ptr;
	}


	void NavigateConfirm();
	void GamepadConfirm();
	void GamepadHover();
	void GamepadUnhover();
	void SetActive();
	void Construct();
	void InitializeWidget();
	void PreConstruct();
	void HandleButtonClicked();
	void ExecuteUbergraph_WBP_PostMatchNavButton();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
