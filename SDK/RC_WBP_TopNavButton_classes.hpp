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

// WidgetBlueprintGeneratedClass WBP_TopNavButton.WBP_TopNavButton_C
// 0xFFFFFFFFD17E7980 (0x2C3DC300 - 0x5ABF4980)
class UWBP_TopNavButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TopNavButton.WBP_TopNavButton_C");
		return ptr;
	}


	void SetNewIndicator();
	void IsDisabled();
	void IsActive();
	void PreConstruct();
	void SetMessage();
	void Construct();
	void DisableButton();
	void SetActive();
	void GamepadConfirm();
	void InitializeWidget();
	void HandleButtonClick();
	void ExecuteUbergraph_WBP_TopNavButton();
	void OnNonRouteClicked__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
