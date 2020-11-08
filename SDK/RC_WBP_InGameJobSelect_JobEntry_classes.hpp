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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C
// 0xFFFFFFFFC6BC7A00 (0x217BC380 - 0x5ABF4980)
class UWBP_InGameJobSelect_JobEntry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C");
		return ptr;
	}


	void TryToPlayAnim();
	void CanSelect();
	void CreateDesatMaterial();
	void Update_Job_Entry();
	void NavigateConfirm();
	void PopulateJobEntrySlot();
	void GamepadConfirm();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetHoverState();
	void SetUnhoverState();
	void OnInitialized();
	void ExecuteUbergraph_WBP_InGameJobSelect_JobEntry();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
