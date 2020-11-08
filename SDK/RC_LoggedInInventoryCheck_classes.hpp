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

// WidgetBlueprintGeneratedClass LoggedInInventoryCheck.LoggedInInventoryCheck_C
// 0x2CBD1D00
class ULoggedInInventoryCheck_C : public UKSLoginInventoryCheck
{
public:
	unsigned char                                      UnknownData00[0x2CBD1D00];                                // 0x0000(0x2CBD1D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoggedInInventoryCheck.LoggedInInventoryCheck_C");
		return ptr;
	}


	void OnInputStateChanged();
	void OnKeyUp();
	void Tick();
	void Construct();
	void PreConstruct();
	void OpenGate();
	void CloseGate();
	void OnShown();
	void InitializeWidget();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_LoggedInInventoryCheck();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
