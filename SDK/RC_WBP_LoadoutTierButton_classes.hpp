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

// WidgetBlueprintGeneratedClass WBP_LoadoutTierButton.WBP_LoadoutTierButton_C
// 0xFFFFFFFFC9F65980 (0x24B55C00 - 0x5ABF0280)
class UWBP_LoadoutTierButton_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutTierButton.WBP_LoadoutTierButton_C");
		return ptr;
	}


	void SetIsActive();
	void SetTierPrice();
	void Set_Button_Text();
	void PreConstruct();
	void Construct();
	void BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_LoadoutTierButton();
	void OnClick__DelegateSignature();
	void OnHover__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
