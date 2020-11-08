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

// WidgetBlueprintGeneratedClass LoginLinkPrompt.LoginLinkPrompt_C
// 0xFFFFFFFFCC133880 (0x26D28200 - 0x5ABF4980)
class ULoginLinkPrompt_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginLinkPrompt.LoginLinkPrompt_C");
		return ptr;
	}


	void InitializeWidget();
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature();
	void InitializeWidgetNavigation();
	void BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature();
	void BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature();
	void ExecuteUbergraph_LoginLinkPrompt();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
