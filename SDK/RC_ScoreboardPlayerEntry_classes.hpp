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

// WidgetBlueprintGeneratedClass ScoreboardPlayerEntry.ScoreboardPlayerEntry_C
// 0xFFFFFFFFC8734300 (0x23328C80 - 0x5ABF4980)
class UScoreboardPlayerEntry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardPlayerEntry.ScoreboardPlayerEntry_C");
		return ptr;
	}


	void GetPlayerState();
	void SetColors();
	void SetStatText();
	void SetPlayerName();
	void SetIconsAndIndicators();
	void SetPlayerData();
	void UpdateVoiceInfo();
	void SetMercIcon();
	void Update();
	void BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void DoUnhoverState();
	void DoHoverState();
	void InitializeWidget();
	void OnShown();
	void OnNeedUpdatePlayerUI();
	void UninitializeWidget();
	void Tick();
	void ScheduleUpdate();
	void ExecuteUbergraph_ScoreboardPlayerEntry();
	void OnPlayerClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
