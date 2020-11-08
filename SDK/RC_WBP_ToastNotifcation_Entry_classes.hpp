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

// WidgetBlueprintGeneratedClass WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C
// 0xFFFFFFFFD1BDF600 (0x2C7D3F80 - 0x5ABF4980)
class UWBP_ToastNotifcation_Entry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C");
		return ptr;
	}


	void SetViewStyle();
	void Construct();
	void PlayWaitAnimation();
	void PlayOutroAnimation();
	void HandleOutroAnimFinished();
	void ExecuteUbergraph_WBP_ToastNotifcation_Entry();
	void FinishedIntroAnimation__DelegateSignature();
	void OnRemoveToastNotification__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
