#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
struct ALobbyBeaconClient_ServerSetPartyOwner_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
struct ALobbyBeaconClient_ServerNotifyJoiningServer_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
struct ALobbyBeaconClient_ServerLoginPlayer_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerKickPlayer
struct ALobbyBeaconClient_ServerKickPlayer_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
struct ALobbyBeaconClient_ServerDisconnectFromLobby_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerCheat
struct ALobbyBeaconClient_ServerCheat_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientWasKicked
struct ALobbyBeaconClient_ClientWasKicked_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
struct ALobbyBeaconClient_ClientSetInviteFlags_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
struct ALobbyBeaconClient_ClientPlayerLeft_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
struct ALobbyBeaconClient_ClientPlayerJoined_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientLoginComplete
struct ALobbyBeaconClient_ClientLoginComplete_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientJoinGame
struct ALobbyBeaconClient_ClientJoinGame_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
struct ALobbyBeaconClient_ClientAckJoiningServer_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
struct ALobbyBeaconPlayerState_OnRep_UniqueId_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
struct ALobbyBeaconPlayerState_OnRep_PartyOwner_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
struct ALobbyBeaconPlayerState_OnRep_InLobby_Params
{
};

// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
struct ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params
{
};

// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
struct ALobbyBeaconState_OnRep_LobbyStarted_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
