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

// WidgetBlueprintGeneratedClass WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C
// 0xFFFFFFFFC1745900 (0x1F28B700 - 0x5DB45E00)
class UWBP_CountdownVersusMessage_C : public UKSAnnouncementQueuedMessageWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C");
		return ptr;
	}


	void Construct();
	void OnAnimFinished();
	void PreConstruct();
	void ExecuteUbergraph_WBP_CountdownVersusMessage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
