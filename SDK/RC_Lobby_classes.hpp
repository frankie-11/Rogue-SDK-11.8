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

// Class Lobby.LobbyBeaconClient
// 0x3F500 (0x5B14CF00 - 0x5B10DA00)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x3F500];                                   // 0x5B10DA00(0x3F500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconClient");
		return ptr;
	}


	void ServerSetPartyOwner();
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer();
	void ServerKickPlayer();
	void ServerDisconnectFromLobby();
	void ServerCheat();
	void ClientWasKicked();
	void ClientSetInviteFlags();
	void ClientPlayerLeft();
	void ClientPlayerJoined();
	void ClientLoginComplete();
	void ClientJoinGame();
	void ClientAckJoiningServer();
};


// Class Lobby.LobbyBeaconHost
// 0xFFFFFFFFFFF901E0 (0x5B09D9E0 - 0x5B10D800)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconHost");
		return ptr;
	}

};


// Class Lobby.LobbyBeaconPlayerState
// 0x5B14CC00
class ALobbyBeaconPlayerState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5B14CC00];                                // 0x0000(0x5B14CC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		return ptr;
	}


	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};


// Class Lobby.LobbyBeaconState
// 0x5B14CA00
class ALobbyBeaconState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5B14CA00];                                // 0x0000(0x5B14CA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconState");
		return ptr;
	}


	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
