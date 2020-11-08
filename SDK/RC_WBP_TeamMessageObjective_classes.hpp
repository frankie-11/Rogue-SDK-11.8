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

// WidgetBlueprintGeneratedClass WBP_TeamMessageObjective.WBP_TeamMessageObjective_C
// 0xFFFFFFFFC1743900 (0x1F289700 - 0x5DB45E00)
class UWBP_TeamMessageObjective_C : public UKSAnnouncementQueuedMessageWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TeamMessageObjective.WBP_TeamMessageObjective_C");
		return ptr;
	}


	void WrapUpHideAnim();
	void Construct();
	void HandleShowAnimFinished();
	void HandleHideAnimFinished();
	void HandlePulseAnimFinished();
	void WrapItUp();
	void ExecuteUbergraph_WBP_TeamMessageObjective();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
