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

// WidgetBlueprintGeneratedClass WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C
// 0xFFFFFFFFD1BEAA80 (0x2C7DF400 - 0x5ABF4980)
class UWBP_TextChat_ChatWindow_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C");
		return ptr;
	}


	void GetMaxChatMessages();
	void SetCollapsed();
	void AddChatMessage();
	void Tick();
	void BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InitializeWidget();
	void HandleInputStateChanged();
	void ExecuteUbergraph_WBP_TextChat_ChatWindow();
	void OnCloseButtonClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
