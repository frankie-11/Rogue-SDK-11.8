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

// WidgetBlueprintGeneratedClass WBP_Social_Snapshot.WBP_Social_Snapshot_C
// 0xFFFFFFFFC2FCF680 (0x20B5EC80 - 0x5DB8F600)
class UWBP_Social_Snapshot_C : public UKSSocialWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Snapshot.WBP_Social_Snapshot_C");
		return ptr;
	}


	void UpdateGamepadPrompt();
	void Update_Alerts_Counter();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void HandleFriendDataUpdated();
	void HandlePartyDataUpdated();
	void Force_Click();
	void OnInputStateChanged();
	void InitializeWidget();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Social_Snapshot();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
