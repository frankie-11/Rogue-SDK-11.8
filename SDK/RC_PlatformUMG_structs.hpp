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

// Enum PlatformUMG.EPUMG_TextFilterStatus
enum class EPUMG_TextFilterStatus : uint8_t
{
	EPUMG_TextFilterStatus__Unchecked = 0,
	EPUMG_TextFilterStatus__CheckingNow = 1,
	EPUMG_TextFilterStatus__Filtered = 2,
	EPUMG_TextFilterStatus__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_ChatPhase
enum class EPUMG_ChatPhase : uint8_t
{
	EPUMG_ChatPhase__PortalAllowed = 0,
	EPUMG_ChatPhase__PlayerNamesExist = 1,
	EPUMG_ChatPhase__LocalFilters  = 2,
	EPUMG_ChatPhase__PortalAllowedOtherUser = 3,
	EPUMG_ChatPhase__PortalTextFilter = 4,
	EPUMG_ChatPhase__ChannelAlreadyHasPending = 5,
	EPUMG_ChatPhase__Ready         = 6,
	EPUMG_ChatPhase__EPUMG_MAX     = 7
};


// Enum PlatformUMG.EPUMG_ChatChannel
enum class EPUMG_ChatChannel : uint8_t
{
	EPUMG_ChatChannel__UNKNOWN     = 0,
	EPUMG_ChatChannel__PERSONAL    = 1,
	EPUMG_ChatChannel__CLAN        = 2,
	EPUMG_ChatChannel__GLOBAL      = 3,
	EPUMG_ChatChannel__MATCH       = 4,
	EPUMG_ChatChannel__LOCAL_TEAM  = 5,
	EPUMG_ChatChannel__PARTY       = 6,
	EPUMG_ChatChannel__CITY        = 7,
	EPUMG_ChatChannel__PRIVATE     = 8,
	EPUMG_ChatChannel__EOM_LOBBY   = 9,
	EPUMG_ChatChannel__SYSTEM      = 10,
	EPUMG_ChatChannel__TRADE       = 11,
	EPUMG_ChatChannel__LFG         = 12,
	EPUMG_ChatChannel__LFG01       = 13,
	EPUMG_ChatChannel__HELP        = 14,
	EPUMG_ChatChannel__VOIP_NEWS   = 15,
	EPUMG_ChatChannel__GM          = 16,
	EPUMG_ChatChannel__VIP         = 17,
	EPUMG_ChatChannel__LFG02       = 18,
	EPUMG_ChatChannel__VOIP_ECHO   = 19,
	EPUMG_ChatChannel__VOIP_CONF   = 20,
	EPUMG_ChatChannel__COMBAT      = 21,
	EPUMG_ChatChannel__EMOTE       = 22,
	EPUMG_ChatChannel__NUM_CHAT_CHANNELS = 23,
	EPUMG_ChatChannel__EPUMG_MAX   = 24
};


// Enum PlatformUMG.EViewManagerLayer
enum class EViewManagerLayer : uint8_t
{
	EViewManagerLayer__Base        = 0,
	EViewManagerLayer__Modal       = 1,
	EViewManagerLayer__EViewManagerLayer_MAX = 2
};


// Enum PlatformUMG.EPUMG_LoginState
enum class EPUMG_LoginState : uint8_t
{
	EPUMG_LoginState__ELS_LoggedOut = 0,
	EPUMG_LoginState__ELS_Eula     = 1,
	EPUMG_LoginState__ELS_CreateName = 2,
	EPUMG_LoginState__ELS_LoggingIn = 3,
	EPUMG_LoginState__ELS_LoggedIn = 4,
	EPUMG_LoginState__ELS_TwoFactor = 5,
	EPUMG_LoginState__ELS_LinkOffer = 6,
	EPUMG_LoginState__ELS_Unknown  = 7,
	EPUMG_LoginState__ELS_MAX      = 8
};


// Enum PlatformUMG.EPUMG_MatchStatus
enum class EPUMG_MatchStatus : uint8_t
{
	EPUMG_MatchStatus__EPUMG_MatchStatus_NotQueued = 0,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Declined = 1,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Queued = 2,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Invited = 3,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Accepted = 4,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Matching = 5,
	EPUMG_MatchStatus__EPUMG_MatchStatus_Waiting = 6,
	EPUMG_MatchStatus__EPUMG_MatchStatus_InGame = 7,
	EPUMG_MatchStatus__EPUMG_MatchStatus_SpectatorLobby = 8,
	EPUMG_MatchStatus__EPUMG_MatchStatus_SpectatorGame = 9,
	EPUMG_MatchStatus__EPUMG_MatchStatus_MAX = 10
};


// Enum PlatformUMG.EPUMG_CustomMatchPermission
enum class EPUMG_CustomMatchPermission : uint8_t
{
	EPUMG_CustomMatchPermission__None = 0,
	EPUMG_CustomMatchPermission__Inviter = 1,
	EPUMG_CustomMatchPermission__Leader = 2,
	EPUMG_CustomMatchPermission__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_SettingUIType
enum class EPUMG_SettingUIType : uint8_t
{
	EPUMG_SettingUIType__Header    = 0,
	EPUMG_SettingUIType__Slider    = 1,
	EPUMG_SettingUIType__OptionStepper = 2,
	EPUMG_SettingUIType__Checkbox  = 3,
	EPUMG_SettingUIType__Button    = 4,
	EPUMG_SettingUIType__Dropdown  = 5,
	EPUMG_SettingUIType__KeyBinding = 6,
	EPUMG_SettingUIType__EPUMG_MAX = 7
};


// Enum PlatformUMG.EPUMG_LastInputType
enum class EPUMG_LastInputType : uint8_t
{
	EPUMG_LastInputType__EPUMG_LastInputType_Up = 0,
	EPUMG_LastInputType__EPUMG_LastInputType_Down = 1,
	EPUMG_LastInputType__EPUMG_LastInputType_Left = 2,
	EPUMG_LastInputType__EPUMG_LastInputType_Right = 3,
	EPUMG_LastInputType__EPUMG_LastInputType_MAX = 4
};


// Enum PlatformUMG.EPUMG_PartyInviteRightsMode
enum class EPUMG_PartyInviteRightsMode : uint8_t
{
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_OnlyLeader = 0,
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_LeaderStartingCanGrant = 1,
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_AllMembers = 2,
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_MAX = 3
};


// Enum PlatformUMG.EPUMG_PopupButtonType
enum class EPUMG_PopupButtonType : uint8_t
{
	EPUMG_PopupButtonType__Confirm = 0,
	EPUMG_PopupButtonType__Cancel  = 1,
	EPUMG_PopupButtonType__Default = 2,
	EPUMG_PopupButtonType__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_CustomMatchInviteError
enum class EPUMG_CustomMatchInviteError : uint8_t
{
	EPUMG_CustomMatchInviteError__None = 0,
	EPUMG_CustomMatchInviteError__NotInvitable = 1,
	EPUMG_CustomMatchInviteError__Banned = 2,
	EPUMG_CustomMatchInviteError__NotAccepted = 3,
	EPUMG_CustomMatchInviteError__EPUMG_MAX = 4
};


// Enum PlatformUMG.EPUMG_CustomMatchError
enum class EPUMG_CustomMatchError : uint8_t
{
	EPUMG_CustomMatchError__None   = 0,
	EPUMG_CustomMatchError__TeamEmpty = 1,
	EPUMG_CustomMatchError__TeamUnderCapacity = 2,
	EPUMG_CustomMatchError__TeamOverCapacity = 3,
	EPUMG_CustomMatchError__EPUMG_MAX = 4
};


// Enum PlatformUMG.EViewRouteRedirectionPhase
enum class EViewRouteRedirectionPhase : uint8_t
{
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_None = 0,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_ApplicationLaunch = 1,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_AccountLogin = 2,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_AlwaysCheck = 3,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_MAX = 4
};


// Enum PlatformUMG.EViewManagerTransitionState
enum class EViewManagerTransitionState : uint8_t
{
	EViewManagerTransitionState__Idle = 0,
	EViewManagerTransitionState__Loading = 1,
	EViewManagerTransitionState__AnimatingHide = 2,
	EViewManagerTransitionState__AnimatingShow = 3,
	EViewManagerTransitionState__Locked = 4,
	EViewManagerTransitionState__EViewManagerTransitionState_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformUMG.PUMG_ChatData
// 0x50BA5F80
struct FPUMG_ChatData
{
	unsigned char                                      UnknownData00[0x50BA5F80];                                // 0x0000(0x50BA5F80) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_AvatarData
// 0x50BA5A00
struct FPUMG_AvatarData
{
	unsigned char                                      UnknownData00[0x50BA5A00];                                // 0x0000(0x50BA5A00) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_FriendData
// 0x50BA5500
struct FPUMG_FriendData
{
	unsigned char                                      UnknownData00[0x50BA5500];                                // 0x0000(0x50BA5500) MISSED OFFSET
};

// ScriptStruct PlatformUMG.LoginQueueInfo
// 0x50BA6480
struct FLoginQueueInfo
{
	unsigned char                                      UnknownData00[0x50BA6480];                                // 0x0000(0x50BA6480) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_PartyMemberData
// 0x50BA8080
struct FPUMG_PartyMemberData
{
	unsigned char                                      UnknownData00[0x50BA8080];                                // 0x0000(0x50BA8080) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_CustomMatchMember
// 0x50BA7A80
struct FPUMG_CustomMatchMember
{
	unsigned char                                      UnknownData00[0x50BA7A80];                                // 0x0000(0x50BA7A80) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_SettingsConfig
// 0x50BA9400
struct FPUMG_SettingsConfig
{
	unsigned char                                      UnknownData00[0x50BA9400];                                // 0x0000(0x50BA9400) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_KeyBindConfig
// 0x50BA8E80
struct FPUMG_KeyBindConfig
{
	unsigned char                                      UnknownData00[0x50BA8E80];                                // 0x0000(0x50BA8E80) MISSED OFFSET
};

// ScriptStruct PlatformUMG.InventoryId
// 0x5A924A00
struct FInventoryId
{
	unsigned char                                      UnknownData00[0x5A924A00];                                // 0x0000(0x5A924A00) MISSED OFFSET
};

// ScriptStruct PlatformUMG.InventoryTypeId
// 0x5A924800
struct FInventoryTypeId
{
	unsigned char                                      UnknownData00[0x5A924800];                                // 0x0000(0x5A924800) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_ClientQueueInfo
// 0x5AB78A00
struct FPUMG_ClientQueueInfo
{
	unsigned char                                      UnknownData00[0x5AB78A00];                                // 0x0000(0x5AB78A00) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_ActiveChatChannelData
// 0x50C3C0E0
struct FPUMG_ActiveChatChannelData
{
	unsigned char                                      UnknownData00[0x50C3C0E0];                                // 0x0000(0x50C3C0E0) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_ChatCommand
// 0x5AEF0280
struct FPUMG_ChatCommand
{
	unsigned char                                      UnknownData00[0x5AEF0280];                                // 0x0000(0x5AEF0280) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_InputFocusDetails
// 0x5AF511E0
struct FPUMG_InputFocusDetails
{
	unsigned char                                      UnknownData00[0x5AF511E0];                                // 0x0000(0x5AF511E0) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_InputFocusGroup
// 0x0000
struct FPUMG_InputFocusGroup
{

};

// ScriptStruct PlatformUMG.PUMG_LoadoutItem
// 0x5AEF1F80
struct FPUMG_LoadoutItem
{
	unsigned char                                      UnknownData00[0x5AEF1F80];                                // 0x0000(0x5AEF1F80) MISSED OFFSET
};

// ScriptStruct PlatformUMG.ErrorMessage
// 0x5AEF1E80
struct FErrorMessage : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AEF1E80];                                // 0x0000(0x5AEF1E80) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_PopupConfig
// 0x5AEF1680
struct FPUMG_PopupConfig
{
	unsigned char                                      UnknownData00[0x5AEF1680];                                // 0x0000(0x5AEF1680) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_PopupButtonConfig
// 0x5AEF1B00
struct FPUMG_PopupButtonConfig
{
	unsigned char                                      UnknownData00[0x5AEF1B00];                                // 0x0000(0x5AEF1B00) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_SoundThemeEventMapping
// 0x5AEF1580
struct FPUMG_SoundThemeEventMapping
{
	unsigned char                                      UnknownData00[0x5AEF1580];                                // 0x0000(0x5AEF1580) MISSED OFFSET
};

// ScriptStruct PlatformUMG.ViewRoute
// 0x5AF50D80
struct FViewRoute : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AF50D80];                                // 0x0000(0x5AF50D80) MISSED OFFSET
};

// ScriptStruct PlatformUMG.StickyWidgetData
// 0x5AEF3100
struct FStickyWidgetData
{
	unsigned char                                      UnknownData00[0x5AEF3100];                                // 0x0000(0x5AEF3100) MISSED OFFSET
};

// ScriptStruct PlatformUMG.ViewRouteRedirectData
// 0x5AEF2F00
struct FViewRouteRedirectData
{
	unsigned char                                      UnknownData00[0x5AEF2F00];                                // 0x0000(0x5AEF2F00) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
