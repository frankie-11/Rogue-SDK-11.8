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

// WidgetBlueprintGeneratedClass WBP_TeamMessage.WBP_TeamMessage_C
// 0xFFFFFFFFCE575100 (0x29169A80 - 0x5ABF4980)
class UWBP_TeamMessage_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TeamMessage.WBP_TeamMessage_C");
		return ptr;
	}


	void AbortCurrentAnnouncement();
	void ShowAnnouncement();
	void HandleOnAnnouncement();
	void CheckShouldShow();
	void Construct();
	void OnAnnouncementFinished();
	void OnKillCamEnabled();
	void HandleRoundSetup();
	void HandleQueuedAnnoucements();
	void ExecuteUbergraph_WBP_TeamMessage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
