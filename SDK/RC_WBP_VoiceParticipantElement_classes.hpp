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

// WidgetBlueprintGeneratedClass WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C
// 0xFFFFFFFFC5B60E00 (0x20751080 - 0x5ABF0280)
class UWBP_VoiceParticipantElement_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C");
		return ptr;
	}


	void ShowActivity();
	void SetName();
	void OnInitialized();
	void HandleAnimationComplete();
	void HandleAnimationStart();
	void ExecuteUbergraph_WBP_VoiceParticipantElement();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
