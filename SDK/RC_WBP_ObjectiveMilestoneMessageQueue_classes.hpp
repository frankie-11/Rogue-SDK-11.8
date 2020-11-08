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

// WidgetBlueprintGeneratedClass WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C
// 0xFFFFFFFFCB624E80 (0x2916AA00 - 0x5DB45B80)
class UWBP_ObjectiveMilestoneMessageQueue_C : public UKSAnnouncementQueueWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C");
		return ptr;
	}


	void WrapUpCurrentMessages();
	void Construct();
	void OnAnnouncementReady();
	void SetToNotBusy();
	void OnKillCamEnabled();
	void HandleRoundSetup();
	void OnRoundOverDel_Event_1();
	void ResetDisplay();
	void ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
