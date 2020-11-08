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

// WidgetBlueprintGeneratedClass WBP_VoiceActivity.WBP_VoiceActivity_C
// 0xFFFFFFFFC3E3CA80 (0x219F6B80 - 0x5DBBA100)
class UWBP_VoiceActivity_C : public UKSVoiceActivityWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VoiceActivity.WBP_VoiceActivity_C");
		return ptr;
	}


	void GetNameForMctsId();
	void Voice_Participant_Updated();
	void AddVoiceParticipant();
	void RemoveVoiceParticipant();
	void InitializeWidget();
	void OnVoiceParticipantRemoved();
	void OnVoiceParticipantAdded();
	void OnVoiceParticipantUpdated();
	void ExecuteUbergraph_WBP_VoiceActivity();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
