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

// WidgetBlueprintGeneratedClass LoginExisting.LoginExisting_C
// 0x2C782300
class ULoginExisting_C : public UKSLoginExistingBase
{
public:
	unsigned char                                      UnknownData00[0x2C782300];                                // 0x0000(0x2C782300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginExisting.LoginExisting_C");
		return ptr;
	}


	void SetCacheErrorMsg();
	void UpdatePlayerName();
	void NavigateBack();
	void NavigateConfirm();
	void SetPlatformSpecificInterface();
	void HandleLoginError();
	void BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature();
	void InitializeWidgetNavigation();
	void OnShown();
	void BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature();
	void BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature();
	void BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature();
	void BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature();
	void Handle_Input_State_Changed();
	void ConfirmClicked();
	void OnHide();
	void BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature();
	void InitializeWidget();
	void BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct();
	void OnProfileChangeRequested();
	void Gamepad_Select_Username();
	void Gamepad_Select_Password();
	void ExecuteUbergraph_LoginExisting();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
