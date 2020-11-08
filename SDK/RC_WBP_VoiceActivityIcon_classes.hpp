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

// WidgetBlueprintGeneratedClass WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C
// 0xFFFFFFFFCAE32E00 (0x25A27780 - 0x5ABF4980)
class UWBP_VoiceActivityIcon_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C");
		return ptr;
	}


	void SetState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
