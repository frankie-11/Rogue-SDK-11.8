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

// WidgetBlueprintGeneratedClass WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C
// 0xFFFFFFFFCB52FD80 (0x26124700 - 0x5ABF4980)
class UWBP_RegionSelect_Entry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C");
		return ptr;
	}


	void ShowPreferredSiteIcon();
	void NavigateConfirm();
	void PreConstruct();
	void Construct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void OnGamepadConfirm();
	void ExecuteUbergraph_WBP_RegionSelect_Entry();
	void OnRegionSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
