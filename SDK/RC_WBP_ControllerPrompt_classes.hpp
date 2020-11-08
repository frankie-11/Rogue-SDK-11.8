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

// WidgetBlueprintGeneratedClass WBP_ControllerPrompt.WBP_ControllerPrompt_C
// 0xFFFFFFFFD06B9580 (0x2B2ADF00 - 0x5ABF4980)
class UWBP_ControllerPrompt_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ControllerPrompt.WBP_ControllerPrompt_C");
		return ptr;
	}


	void SetButtonPrompt();
	void SetIsCancel();
	void SetIsConfirm();
	void SetPromptFromButton();
	void UpdateFromSetValues();
	void SetInputAction();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_ControllerPrompt();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
