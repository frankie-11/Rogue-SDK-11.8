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

// WidgetBlueprintGeneratedClass WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C
// 0xFFFFFFFFCAE32C80 (0x25A27600 - 0x5ABF4980)
class UWBP_PlayerInfoDisplay_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C");
		return ptr;
	}


	void UpdateVoiceDisplay();
	void SetPlayerNameFont();
	void SetPlayerNameColor();
	void TogglePartyLeaderIcon();
	void SetVoiceActive();
	void SetVoiceTalking();
	void SetVoiceMuted();
	void GetStatusColor();
	void UpdateStatus();
	void UpdatePlayerInfoIcons();
	void UpdateAvatarDisplay();
	void SetPlayerInfo();
	void SetVoiceState();
	void ToggleStatusDisplay();
	void PreConstruct();
	void HandleFilteredNameUpdate();
	void OnInitialized();
	void ExecuteUbergraph_WBP_PlayerInfoDisplay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
