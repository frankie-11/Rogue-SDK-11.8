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

// WidgetBlueprintGeneratedClass WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C
// 0xFFFFFFFFD161E680 (0x2C213000 - 0x5ABF4980)
class UWBP_CreateCustomGame_MapButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C");
		return ptr;
	}


	void NavigateConfirm();
	void SetMap();
	void BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void InitializeWidget();
	void GamepadHover();
	void GamepadUnhover();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnGamepadConfirm();
	void ExecuteUbergraph_WBP_CreateCustomGame_MapButton();
	void OnMapSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
