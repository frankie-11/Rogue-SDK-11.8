#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None    = 0,
	ELobbyBeaconJoinState__SentJoinRequest = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged = 2,
	ELobbyBeaconJoinState__ELobbyBeaconJoinState_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x143A20 (0x5AF51320 - 0x5AE0D900)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x143A20];                                  // 0x5AE0D900(0x143A20) MISSED OFFSET
};

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x5C8600 (0x5AEF0680 - 0x5A928080)
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x5C8600];                                  // 0x5A928080(0x5C8600) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
