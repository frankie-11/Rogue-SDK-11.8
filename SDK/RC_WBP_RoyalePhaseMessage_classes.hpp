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

// WidgetBlueprintGeneratedClass WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C
// 0xFFFFFFFFC1745E80 (0x1F28BC80 - 0x5DB45E00)
class UWBP_RoyalePhaseMessage_C : public UKSAnnouncementQueuedMessageWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C");
		return ptr;
	}


	void Construct();
	void Tick();
	void ExecuteUbergraph_WBP_RoyalePhaseMessage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
