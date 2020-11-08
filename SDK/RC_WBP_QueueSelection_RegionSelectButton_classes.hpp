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

// WidgetBlueprintGeneratedClass WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C
// 0xFFFFFFFFD1977E00 (0x2C56C780 - 0x5ABF4980)
class UWBP_QueueSelection_RegionSelectButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C");
		return ptr;
	}


	void HandleInputStateChange();
	void SetupPromptImageHandling();
	void InitializeWidget();
	void Update_Region();
	void OnHide();
	void LoginState();
	void EnableAsButton();
	void DisableAsButton();
	void UpdateCrossplay();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton();
	void RegionSelectRequested__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
