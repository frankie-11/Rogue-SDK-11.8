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

// WidgetBlueprintGeneratedClass LoginTwoFactor.LoginTwoFactor_C
// 0xFFFFFFFFD140A680 (0x2BFFF000 - 0x5ABF4980)
class ULoginTwoFactor_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginTwoFactor.LoginTwoFactor_C");
		return ptr;
	}


	void InitializeWidget();
	void Handle_Text_Committed();
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void Handle_Text_Changed();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature();
	void Submit_Code();
	void InitializeWidgetNavigation();
	void Handle_CodeField_Gamepad_Confirm();
	void Handle_Login_Error();
	void ExecuteUbergraph_LoginTwoFactor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
