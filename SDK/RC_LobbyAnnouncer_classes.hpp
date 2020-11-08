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

// BlueprintGeneratedClass LobbyAnnouncer.LobbyAnnouncer_C
// 0xFFFFFFFFA50EC700 (0x385980 - 0x5B299280)
class ALobbyAnnouncer_C : public AKSAnnouncer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyAnnouncer.LobbyAnnouncer_C");
		return ptr;
	}


	void OnLoadingScreenEnded();
	void OnLobbyWidgetReady();
	void ReceiveBeginPlay();
	void OnViewStateChangedStarted();
	void ReceiveEndPlay();
	void EventQueueInGame();
	void ExecuteUbergraph_LobbyAnnouncer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
