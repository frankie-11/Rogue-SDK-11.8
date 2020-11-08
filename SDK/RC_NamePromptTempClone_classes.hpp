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

// WidgetBlueprintGeneratedClass NamePromptTempClone.NamePromptTempClone_C
// 0xFFFFFFFFD1409D80 (0x2BFFE700 - 0x5ABF4980)
class UNamePromptTempClone_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NamePromptTempClone.NamePromptTempClone_C");
		return ptr;
	}


	void BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature();
	void BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature();
	void HandleErrorMessage();
	void InitializeWidget();
	void ExecuteUbergraph_NamePromptTempClone();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
