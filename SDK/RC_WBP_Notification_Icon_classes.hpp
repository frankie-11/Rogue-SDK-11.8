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

// WidgetBlueprintGeneratedClass WBP_Notification_Icon.WBP_Notification_Icon_C
// 0xFFFFFFFFC640FA80 (0x21003380 - 0x5ABF3900)
class UWBP_Notification_Icon_C : public UPUMG_Widget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Notification_Icon.WBP_Notification_Icon_C");
		return ptr;
	}


	void Construct();
	void OnShown();
	void OnHide();
	void HandleShown();
	void HandleHide();
	void ExecuteUbergraph_WBP_Notification_Icon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
