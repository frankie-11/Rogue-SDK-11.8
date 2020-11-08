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

// WidgetBlueprintGeneratedClass WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C
// 0xFFFFFFFFCEC24D80 (0x2C7D6400 - 0x5DBB1680)
class UWBP_ToastNotification_Manager_C : public UKSToastNotificationWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C");
		return ptr;
	}


	void PushAwardsEarnedInMatch();
	void DisplayChallengeToast();
	void DisplayToast();
	void OnToastNotificationReceived();
	void HandleToastNotificationRemove();
	void OnToastIntroAnimFinished();
	void Construct();
	void HandleChallengeToastNotificationRemove();
	void ExecuteUbergraph_WBP_ToastNotification_Manager();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
