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

// WidgetBlueprintGeneratedClass StandardContainer.StandardContainer_C
// 0xFFFFFFFFC8731280 (0x23321500 - 0x5ABF0280)
class UStandardContainer_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StandardContainer.StandardContainer_C");
		return ptr;
	}


	void EvaluateHeaderVisibility();
	void EvaluateCloseButtonVisibility();
	void PreConstruct();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_StandardContainer();
	void OnContainerClose__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
