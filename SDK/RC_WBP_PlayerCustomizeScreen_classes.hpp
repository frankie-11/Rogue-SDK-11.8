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

// WidgetBlueprintGeneratedClass WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C
// 0xFFFFFFFFD1770D00 (0x2C365680 - 0x5ABF4980)
class UWBP_PlayerCustomizeScreen_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C");
		return ptr;
	}


	void BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_PlayerCustomizeScreen();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
