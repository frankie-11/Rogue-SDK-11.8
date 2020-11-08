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

// WidgetBlueprintGeneratedClass WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C
// 0xFFFFFFFFD1FEDA00 (0x2CBDDC80 - 0x5ABF0280)
class UWBP_Context_Menu_Prompt_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C");
		return ptr;
	}


	void SetInputState();
	void Populate();
	void PreConstruct();
	void Construct();
	void BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Context_Menu_Prompt();
	void OnPromptClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
