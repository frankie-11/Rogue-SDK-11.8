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

// WidgetBlueprintGeneratedClass LoginCreateAccount.LoginCreateAccount_C
// 0xFFFFFFFFD1B99400 (0x2C78DD80 - 0x5ABF4980)
class ULoginCreateAccount_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginCreateAccount.LoginCreateAccount_C");
		return ptr;
	}


	void InitializeWidget();
	void Handle_Text_Committed();
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void Handle_Text_Changed();
	void InitializeWidgetNavigation();
	void Handle_Login_Error();
	void Submit_New_Account();
	void Handle_Checkbox_Changed();
	void OnShown();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Gamepad_Select_Email();
	void Gamepad_Select_Repeat_Password();
	void Gamepad_Select_Password();
	void Gamepad_Select_Username();
	void ExecuteUbergraph_LoginCreateAccount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
