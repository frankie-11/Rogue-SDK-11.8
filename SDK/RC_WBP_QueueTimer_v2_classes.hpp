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

// WidgetBlueprintGeneratedClass WBP_QueueTimer_v2.WBP_QueueTimer_v2_C
// 0x2C3DBD80
class UWBP_QueueTimer_v2_C : public UKSQueueTimerWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x2C3DBD80];                                // 0x0000(0x2C3DBD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QueueTimer_v2.WBP_QueueTimer_v2_C");
		return ptr;
	}


	void UpdateCancelButton();
	void SetNeutralLabel();
	void GetColorFromPalette();
	void UpdatePenaltyTime();
	void UpdateStatusLabel();
	void HandleInputStateChanged();
	void SetGamepadCallout();
	void UpdateQueueTime();
	void InitializeWidget();
	void Construct();
	void CancelQueue();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void PreConstruct();
	void BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void OnUpdateQueueTime();
	void OnUpdateQueueTimerState();
	void OnControlQueuePermissionUpdate();
	void ExecuteUbergraph_WBP_QueueTimer_v2();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
