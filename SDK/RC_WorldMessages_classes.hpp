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

// WidgetBlueprintGeneratedClass WorldMessages.WorldMessages_C
// 0xFFFFFFFFC6E02300 (0x219F2580 - 0x5ABF0280)
class UWorldMessages_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WorldMessages.WorldMessages_C");
		return ptr;
	}


	void GetPooledMessage();
	void ReturnPooledMessage();
	void SFXKillFeed();
	void Construct();
	void DeathMessage();
	void DownMessage();
	void ResetMessages();
	void OnRoundOver();
	void OnKillCamEnabled();
	void OnKillCamViewedPawn();
	void HandleQueuedMessage();
	void RadialMenuItemMessage();
	void ExecuteUbergraph_WorldMessages();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
