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

// WidgetBlueprintGeneratedClass WBP_Challenge_Renderer.WBP_Challenge_Renderer_C
// 0xFFFFFFFFCAA7F400 (0x25673D80 - 0x5ABF4980)
class UWBP_Challenge_Renderer_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Challenge_Renderer.WBP_Challenge_Renderer_C");
		return ptr;
	}


	void NavigateConfirmPressed();
	void SetRewardDisplay();
	void SetChallengeInformation();
	void PreConstruct();
	void BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void InitializeWidget();
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Challenge_Renderer();
	void DisplayRerollPrompt__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
