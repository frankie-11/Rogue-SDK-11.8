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

// WidgetBlueprintGeneratedClass StandardButtonNoBorder.StandardButtonNoBorder_C
// 0xFFFFFFFFCAA89F80 (0x2567E900 - 0x5ABF4980)
class UStandardButtonNoBorder_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StandardButtonNoBorder.StandardButtonNoBorder_C");
		return ptr;
	}


	void NavigateConfirm();
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadConfirm();
	void Do_Hover();
	void Do_Unhover();
	void ExecuteUbergraph_StandardButtonNoBorder();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
