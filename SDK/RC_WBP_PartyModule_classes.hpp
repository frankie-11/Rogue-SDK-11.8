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

// WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C
// 0x25679E00
class UWBP_PartyModule_C : public UKSPartyManagerWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x25679E00];                                // 0x0000(0x25679E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C");
		return ptr;
	}


	void GetPrimaryFocus();
	void FindPlayerCardByVoiceId();
	void Get_Navigation_Widgets();
	void Get_Other_Party_Members();
	void ApplyPartyData();
	void InitializeWidget();
	void VoiceParticipantAdded();
	void VoiceParticipantRemoved();
	void VoiceParticipantUpdated();
	void VoiceStateChange();
	void Handle_Player_Card_Clicked();
	void Handle_Player_Card_Back();
	void HandlePartyLeaveVisibilityChange();
	void ExecuteUbergraph_WBP_PartyModule();
	void OnPartyLeaveVisibilityChange__DelegateSignature();
	void OnPlayerCardBackButton__DelegateSignature();
	void OnPlayerCardSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
