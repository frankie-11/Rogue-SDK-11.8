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

// WidgetBlueprintGeneratedClass WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C
// 0xFFFFFFFFD1573C00 (0x2C168580 - 0x5ABF4980)
class UWBP_RogueStatsScreen_TabEntry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C");
		return ptr;
	}


	void SetSelected();
	void UpdateTotalCount();
	void BndEvt__Button_92_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void Construct();
	void ExecuteUbergraph_WBP_RogueStatsScreen_TabEntry();
	void OnSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
