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

// Enum KillstreakUINew.EKSPlayerQueryError
enum class EKSPlayerQueryError : uint8_t
{
	EKSPlayerQueryError__None      = 0,
	EKSPlayerQueryError__NoResults = 1,
	EKSPlayerQueryError__TimedOut  = 2,
	EKSPlayerQueryError__QueryError = 3,
	EKSPlayerQueryError__EKSPlayerQueryError_MAX = 4
};


// Enum KillstreakUINew.EPerkTreeNodeState
enum class EPerkTreeNodeState : uint8_t
{
	EPerkTreeNodeState__NODE_OFF   = 0,
	EPerkTreeNodeState__NODE_ERROR = 1,
	EPerkTreeNodeState__NODE_UNREACHABLE = 2,
	EPerkTreeNodeState__NODE_UNAFFORDABLE = 3,
	EPerkTreeNodeState__NODE_UNLOCKABLE = 4,
	EPerkTreeNodeState__NODE_OWNED = 5,
	EPerkTreeNodeState__NODE_OWNED_EQUIPPED = 6,
	EPerkTreeNodeState__NODE_MAX   = 7
};


// Enum KillstreakUINew.ESpecialtyItemType
enum class ESpecialtyItemType : uint8_t
{
	ESpecialtyItemType__ESpecItemType_SpecialtyPerk = 0,
	ESpecialtyItemType__ESpecItemType_GlobalPerk = 1,
	ESpecialtyItemType__ESpecItemType_Killstreak = 2,
	ESpecialtyItemType__ESpecItemType_Gadget = 3,
	ESpecialtyItemType__ESpecItemType_PistolAttachment = 4,
	ESpecialtyItemType__ESpecItemType_Pistol = 5,
	ESpecialtyItemType__ESpecItemType_Specialty = 6,
	ESpecialtyItemType__ESpecItemType_AutoEquippedPerk = 7,
	ESpecialtyItemType__ESpecItemType_SecondaryAbility = 8,
	ESpecialtyItemType__ESpecItemType_LoadoutClass = 9,
	ESpecialtyItemType__ESpecItemType_LoadoutBundle = 10,
	ESpecialtyItemType__ESpecItemType_MAX = 11
};


// Enum KillstreakUINew.EQueueType
enum class EQueueType : uint8_t
{
	EQueueType__QT_Training        = 0,
	EQueueType__QT_PVP             = 1,
	EQueueType__QT_PVE             = 2,
	EQueueType__QT_Custom          = 3,
	EQueueType__QT_Ranked          = 4,
	EQueueType__QT_LimitedTime     = 5,
	EQueueType__QT_None            = 6,
	EQueueType__QT_MAX             = 7
};


// Enum KillstreakUINew.EKSSocialOverlaySection
enum class EKSSocialOverlaySection : uint8_t
{
	EKSSocialOverlaySection__Invalid = 0,
	EKSSocialOverlaySection__PartyMembers = 1,
	EKSSocialOverlaySection__MatchTeamMembers = 2,
	EKSSocialOverlaySection__PartyInvitations = 3,
	EKSSocialOverlaySection__FriendInvites = 4,
	EKSSocialOverlaySection__OnlineMctsFriends = 5,
	EKSSocialOverlaySection__OnlinePortalFriends = 6,
	EKSSocialOverlaySection__OfflineMctsFriends = 7,
	EKSSocialOverlaySection__Blocked = 8,
	EKSSocialOverlaySection__SearchResults = 9,
	EKSSocialOverlaySection__Pending = 10,
	EKSSocialOverlaySection__RecentlyPlayed = 11,
	EKSSocialOverlaySection__SuggestedFriends = 12,
	EKSSocialOverlaySection__MAX   = 13
};


// Enum KillstreakUINew.EKSInviteSelectResult
enum class EKSInviteSelectResult : uint8_t
{
	EKSInviteSelectResult__NoChange = 0,
	EKSInviteSelectResult__Selected = 1,
	EKSInviteSelectResult__Deselected = 2,
	EKSInviteSelectResult__EKSInviteSelectResult_MAX = 3
};


// Enum KillstreakUINew.EKSInviteCloseAction
enum class EKSInviteCloseAction : uint8_t
{
	EKSInviteCloseAction__None     = 0,
	EKSInviteCloseAction__Submit   = 1,
	EKSInviteCloseAction__EKSInviteCloseAction_MAX = 2
};


// Enum KillstreakUINew.EKSVoiceActivityAudioState
enum class EKSVoiceActivityAudioState : uint8_t
{
	EKSVoiceActivityAudioState__Disconnected = 0,
	EKSVoiceActivityAudioState__Connecting = 1,
	EKSVoiceActivityAudioState__Connected = 2,
	EKSVoiceActivityAudioState__Disconnecting = 3,
	EKSVoiceActivityAudioState__EKSVoiceActivityAudioState_MAX = 4
};


// Enum KillstreakUINew.ECombatEventType
enum class ECombatEventType : uint8_t
{
	ECombatEventType__CombatEvent_Down = 0,
	ECombatEventType__CombatEvent_Elim = 1,
	ECombatEventType__CombatEvent_MAX = 2
};


// Enum KillstreakUINew.EConfigPropertyGuidedCalloutScenes
enum class EConfigPropertyGuidedCalloutScenes : uint8_t
{
	EConfigPropertyGuidedCalloutScenes__NONE = 0,
	EConfigPropertyGuidedCalloutScenes__ROGUE_SCENE = 1,
	EConfigPropertyGuidedCalloutScenes__ROGUE_CUSTOMIZATION = 2,
	EConfigPropertyGuidedCalloutScenes__QUEUE_SELECT = 3,
	EConfigPropertyGuidedCalloutScenes__MAX_DO_NOT_GO_OVER = 4,
	EConfigPropertyGuidedCalloutScenes__EConfigPropertyGuidedCalloutScenes_MAX = 5
};


// Enum KillstreakUINew.EAllyMarkerState
enum class EAllyMarkerState : uint8_t
{
	EAllyMarkerState__Normal       = 0,
	EAllyMarkerState__Downed       = 1,
	EAllyMarkerState__Reviving     = 2,
	EAllyMarkerState__Dead         = 3,
	EAllyMarkerState__Hidden       = 4,
	EAllyMarkerState__EAllyMarkerState_MAX = 5
};


// Enum KillstreakUINew.EContextPromptAnchoring
enum class EContextPromptAnchoring : uint8_t
{
	EContextPromptAnchoring__AnchorLeft = 0,
	EContextPromptAnchoring__AnchorRight = 1,
	EContextPromptAnchoring__AnchorCenter = 2,
	EContextPromptAnchoring__EContextPromptAnchoring_MAX = 3
};


// Enum KillstreakUINew.EKSCategoryOpenMode
enum class EKSCategoryOpenMode : uint8_t
{
	EKSCategoryOpenMode__ClosedByDefault = 0,
	EKSCategoryOpenMode__OpenByDefault = 1,
	EKSCategoryOpenMode__EKSCategoryOpenMode_MAX = 2
};


// Enum KillstreakUINew.EConsoleCommandParamType
enum class EConsoleCommandParamType : uint8_t
{
	EConsoleCommandParamType__None = 0,
	EConsoleCommandParamType__Bool = 1,
	EConsoleCommandParamType__String = 2,
	EConsoleCommandParamType__EConsoleCommandParamType_MAX = 3
};


// Enum KillstreakUINew.ESocialMessageType
enum class ESocialMessageType : uint8_t
{
	ESocialMessageType__EInvite    = 0,
	ESocialMessageType__EInviteResponse = 1,
	ESocialMessageType__EInviteExpired = 2,
	ESocialMessageType__EInviteError = 3,
	ESocialMessageType__EGenericMsg = 4,
	ESocialMessageType__ESocialMessageType_MAX = 5
};


// Enum KillstreakUINew.ELowAmmoState
enum class ELowAmmoState : uint8_t
{
	ELowAmmoState__Normal          = 0,
	ELowAmmoState__NeedsReload     = 1,
	ELowAmmoState__LowAmmo         = 2,
	ELowAmmoState__NoAmmo          = 3,
	ELowAmmoState__ELowAmmoState_MAX = 4
};


// Enum KillstreakUINew.EIconMarkerScreenRegion
enum class EIconMarkerScreenRegion : uint8_t
{
	EIconMarkerScreenRegion__Normal = 0,
	EIconMarkerScreenRegion__Center = 1,
	EIconMarkerScreenRegion__Edge  = 2,
	EIconMarkerScreenRegion__EIconMarkerScreenRegion_MAX = 3
};


// Enum KillstreakUINew.EIconHoverState
enum class EIconHoverState : uint8_t
{
	EIconHoverState__Unhovered     = 0,
	EIconHoverState__Hovering      = 1,
	EIconHoverState__Hovered       = 2,
	EIconHoverState__Unhovering    = 3,
	EIconHoverState__EIconHoverState_MAX = 4
};


// Enum KillstreakUINew.EMinimapWidgetClampStyle
enum class EMinimapWidgetClampStyle : uint8_t
{
	EMinimapWidgetClampStyle__Circular = 0,
	EMinimapWidgetClampStyle__Square = 1,
	EMinimapWidgetClampStyle__SquareByAngle = 2,
	EMinimapWidgetClampStyle__SquareByProjection = 3,
	EMinimapWidgetClampStyle__EMinimapWidgetClampStyle_MAX = 4
};


// Enum KillstreakUINew.ENewsActions
enum class ENewsActions : uint8_t
{
	ENewsActions__ENewsActions_Unknown = 0,
	ENewsActions__ENewsActions_ExternalURL = 1,
	ENewsActions__ENewsActions_NavToRoute = 2,
	ENewsActions__ENewsActions_MAX = 3
};


// Enum KillstreakUINew.EPerkTreeEdgeState
enum class EPerkTreeEdgeState : uint8_t
{
	EPerkTreeEdgeState__EDGE_OFF   = 0,
	EPerkTreeEdgeState__EDGE_ERROR = 1,
	EPerkTreeEdgeState__EDGE_UNREACHABLE = 2,
	EPerkTreeEdgeState__EDGE_TO_UNLOCKABLE = 3,
	EPerkTreeEdgeState__EDGE_OWNED = 4,
	EPerkTreeEdgeState__EDGE_MAX   = 5
};


// Enum KillstreakUINew.EPerkTreeEdgeType
enum class EPerkTreeEdgeType : uint8_t
{
	EPerkTreeEdgeType__EDGE_TOP    = 0,
	EPerkTreeEdgeType__EDGE_LEFT   = 1,
	EPerkTreeEdgeType__EDGE_DIAGONAL = 2,
	EPerkTreeEdgeType__EDGE_BACK_DIAGONAL = 3,
	EPerkTreeEdgeType__EDGE_MAX    = 4
};


// Enum KillstreakUINew.EKSPlatformType
enum class EKSPlatformType : uint8_t
{
	EKSPlatformType__PC            = 0,
	EKSPlatformType__XboxOne       = 1,
	EKSPlatformType__Playstation4  = 2,
	EKSPlatformType__Switch        = 3,
	EKSPlatformType__ConsoleGeneric = 4,
	EKSPlatformType__Epic          = 5,
	EKSPlatformType__Steam         = 6,
	EKSPlatformType__IOS           = 7,
	EKSPlatformType__Android       = 8,
	EKSPlatformType__MobileGeneric = 9,
	EKSPlatformType__EKSPlatformType_MAX = 10
};


// Enum KillstreakUINew.EKSPlayerInputType
enum class EKSPlayerInputType : uint8_t
{
	EKSPlayerInputType__PIT_Unknown = 0,
	EKSPlayerInputType__PIT_KeyboardMouse = 1,
	EKSPlayerInputType__PIT_Gamepad = 2,
	EKSPlayerInputType__PIT_Touch  = 3,
	EKSPlayerInputType__PIT_MAX    = 4
};


// Enum KillstreakUINew.EKSPlayerOnlineStatus
enum class EKSPlayerOnlineStatus : uint8_t
{
	EKSPlayerOnlineStatus__FGS_InParty = 0,
	EKSPlayerOnlineStatus__FGS_PendingParty = 1,
	EKSPlayerOnlineStatus__FGS_InGame = 2,
	EKSPlayerOnlineStatus__FGS_InMatch = 3,
	EKSPlayerOnlineStatus__FGS_InQueue = 4,
	EKSPlayerOnlineStatus__FGS_Online = 5,
	EKSPlayerOnlineStatus__FGS_DND = 6,
	EKSPlayerOnlineStatus__FGS_Offline = 7,
	EKSPlayerOnlineStatus__FGS_FriendRequest = 8,
	EKSPlayerOnlineStatus__FGS_PendingInvite = 9,
	EKSPlayerOnlineStatus__FGS_MAX = 10
};


// Enum KillstreakUINew.EPlayerSelectionState
enum class EPlayerSelectionState : uint8_t
{
	EPlayerSelectionState__EPlayerState_Selecting = 0,
	EPlayerSelectionState__EPlayerState_Selected = 1,
	EPlayerSelectionState__EPlayerState_LockedIn = 2,
	EPlayerSelectionState__EPlayerState_MAX = 3
};


// Enum KillstreakUINew.EPointObjectiveMarkerTeamState
enum class EPointObjectiveMarkerTeamState : uint8_t
{
	EPointObjectiveMarkerTeamState__Neutral = 0,
	EPointObjectiveMarkerTeamState__AllyOwned = 1,
	EPointObjectiveMarkerTeamState__EnemyOwned = 2,
	EPointObjectiveMarkerTeamState__Contested = 3,
	EPointObjectiveMarkerTeamState__EPointObjectiveMarkerTeamState_MAX = 4
};


// Enum KillstreakUINew.EPointObjectiveMarkerObjectiveState
enum class EPointObjectiveMarkerObjectiveState : uint8_t
{
	EPointObjectiveMarkerObjectiveState__Locked = 0,
	EPointObjectiveMarkerObjectiveState__Unlocked = 1,
	EPointObjectiveMarkerObjectiveState__Capturing = 2,
	EPointObjectiveMarkerObjectiveState__Captured = 3,
	EPointObjectiveMarkerObjectiveState__Recapturing = 4,
	EPointObjectiveMarkerObjectiveState__EPointObjectiveMarkerObjectiveState_MAX = 5
};


// Enum KillstreakUINew.EKSQueueJoinError
enum class EKSQueueJoinError : uint8_t
{
	EKSQueueJoinError__None        = 0,
	EKSQueueJoinError__SystemError = 1,
	EKSQueueJoinError__QueueUnavailable = 2,
	EKSQueueJoinError__DeserterPenaltyActive = 3,
	EKSQueueJoinError__PlayerLevelRequirement = 4,
	EKSQueueJoinError__PartyMemberLevelRequirement = 5,
	EKSQueueJoinError__PartyMinMemberRequirement = 6,
	EKSQueueJoinError__PartyMaxMemberRequirement = 7,
	EKSQueueJoinError__InQueue     = 8,
	EKSQueueJoinError__EKSQueueJoinError_MAX = 9
};


// Enum KillstreakUINew.EQueueTimerState
enum class EQueueTimerState : uint8_t
{
	EQueueTimerState__Unknown      = 0,
	EQueueTimerState__DeserterPenaltyActive = 1,
	EQueueTimerState__WaitingForLeader = 2,
	EQueueTimerState__Queued       = 3,
	EQueueTimerState__EnteringMatch = 4,
	EQueueTimerState__EQueueTimerState_MAX = 5
};


// Enum KillstreakUINew.EQuickPlayQueueState
enum class EQuickPlayQueueState : uint8_t
{
	EQuickPlayQueueState__Unknown  = 0,
	EQuickPlayQueueState__NoQueuesAvailable = 1,
	EQuickPlayQueueState__NoSelectedQueue = 2,
	EQuickPlayQueueState__SelectedQueueUnavailable = 3,
	EQuickPlayQueueState__DeserterPenaltyActive = 4,
	EQuickPlayQueueState__SelectedQueuePartyMinLimit = 5,
	EQuickPlayQueueState__SelectedQueuePartyMaxLimit = 6,
	EQuickPlayQueueState__ReadyToJoin = 7,
	EQuickPlayQueueState__WaitingForLeader = 8,
	EQuickPlayQueueState__Queued   = 9,
	EQuickPlayQueueState__EnteringMatch = 10,
	EQuickPlayQueueState__ReadyToRejoin = 11,
	EQuickPlayQueueState__PlayerLevelRequirement = 12,
	EQuickPlayQueueState__PartyLevelRequirement = 13,
	EQuickPlayQueueState__EQuickPlayQueueState_MAX = 14
};


// Enum KillstreakUINew.EAmmoState
enum class EAmmoState : uint8_t
{
	EAmmoState__EAmmoState_Full    = 0,
	EAmmoState__EAmmoState_NeedsReload = 1,
	EAmmoState__EAmmoState_LowAmmo = 2,
	EAmmoState__EAmmoState_CriticallyLowAmmo = 3,
	EAmmoState__EAmmoState_NoAmmo  = 4,
	EAmmoState__EAmmoState_MAX     = 5
};


// Enum KillstreakUINew.EKSSettingType
enum class EKSSettingType : uint8_t
{
	EKSSettingType__Bool           = 0,
	EKSSettingType__Int            = 1,
	EKSSettingType__Float          = 2,
	EKSSettingType__Key            = 3,
	EKSSettingType__Invalid        = 4,
	EKSSettingType__EKSSettingType_MAX = 5
};


// Enum KillstreakUINew.EPUMG_ShopItemUpgradeSegmentType
enum class EPUMG_ShopItemUpgradeSegmentType : uint8_t
{
	EPUMG_ShopItemUpgradeSegmentType__Single = 0,
	EPUMG_ShopItemUpgradeSegmentType__First = 1,
	EPUMG_ShopItemUpgradeSegmentType__Middle = 2,
	EPUMG_ShopItemUpgradeSegmentType__Last = 3,
	EPUMG_ShopItemUpgradeSegmentType__EPUMG_MAX = 4
};


// Enum KillstreakUINew.EKSSocialFriendSection
enum class EKSSocialFriendSection : uint8_t
{
	EKSSocialFriendSection__Invalid = 0,
	EKSSocialFriendSection__PartyMembers = 1,
	EKSSocialFriendSection__MatchTeamMembers = 2,
	EKSSocialFriendSection__PartyInvitations = 3,
	EKSSocialFriendSection__OnlineMctsFriends = 4,
	EKSSocialFriendSection__OnlinePortalFriends = 5,
	EKSSocialFriendSection__OfflineMctsFriends = 6,
	EKSSocialFriendSection__Blocked = 7,
	EKSSocialFriendSection__Pending = 8,
	EKSSocialFriendSection__MAX    = 9
};


// Enum KillstreakUINew.EKSSocialPanelDisplayOption
enum class EKSSocialPanelDisplayOption : uint8_t
{
	EKSSocialPanelDisplayOption__HideIfEmpty = 0,
	EKSSocialPanelDisplayOption__ShowIfEmpty = 1,
	EKSSocialPanelDisplayOption__EKSSocialPanelDisplayOption_MAX = 2
};


// Enum KillstreakUINew.EStoreSectionTypes
enum class EStoreSectionTypes : uint8_t
{
	NewSection                     = 0,
	DLCSection                     = 1,
	FeaturedSection                = 2,
	RogueBucksSection              = 3,
	DailySection                   = 4,
	BoostsSection                  = 5,
	LimitedTimeOfferSection        = 6,
	SpecialPromotionsSection       = 7,
	EStoreSectionTypes_MAX         = 8
};


// Enum KillstreakUINew.EStoreItemWidgetType
enum class EStoreItemWidgetType : uint8_t
{
	ELargePanel                    = 0,
	ETallPanel                     = 1,
	ESmallPanel                    = 2,
	STORE_WIDGET_TYPE_MAX          = 3,
	EStoreItemWidgetType_MAX       = 4
};


// Enum KillstreakUINew.ETargetMarkerViewState
enum class ETargetMarkerViewState : uint8_t
{
	ETargetMarkerViewState__Hidden = 0,
	ETargetMarkerViewState__Showing = 1,
	ETargetMarkerViewState__Shown  = 2,
	ETargetMarkerViewState__HidingNeutral = 3,
	ETargetMarkerViewState__HidingActivated = 4,
	ETargetMarkerViewState__HidingFailed = 5,
	ETargetMarkerViewState__ETargetMarkerViewState_MAX = 6
};


// Enum KillstreakUINew.EToastCategory
enum class EToastCategory : uint8_t
{
	EToastCategory__ETOAST_INFO    = 0,
	EToastCategory__ETOAST_ERROR   = 1,
	EToastCategory__ETOAST_FRIEND  = 2,
	EToastCategory__ETOAST_PARTY   = 3,
	EToastCategory__ETOAST_CHALLENGE = 4,
	EToastCategory__ETOAST_MERC_MASTERY = 5,
	EToastCategory__ETOAST_ITEM_UNLOCK = 6,
	EToastCategory__ETOAST_AWARD   = 7,
	EToastCategory__ETOAST_MAX     = 8
};


// Enum KillstreakUINew.EReportPlayerReason
enum class EReportPlayerReason : uint8_t
{
	EReportPlayerReason__Unknown_None = 0,
	EReportPlayerReason__Harassment = 1,
	EReportPlayerReason__Cheating  = 2,
	EReportPlayerReason__Teaming   = 3,
	EReportPlayerReason__IntentionalFeeding = 4,
	EReportPlayerReason__StreamSniping = 5,
	EReportPlayerReason__LeavingTheGame_AFK = 6,
	EReportPlayerReason__OtherReason = 7,
	EReportPlayerReason__EReportPlayerReason_MAX = 8
};


// Enum KillstreakUINew.EKSVendorTypes
enum class EKSVendorTypes : uint8_t
{
	EKSVendorTypes__Unknown        = 0,
	EKSVendorTypes__Equipment      = 1,
	EKSVendorTypes__Specialty      = 2,
	EKSVendorTypes__SpecialtyItem  = 3,
	EKSVendorTypes__StarterSpecLoadout = 4,
	EKSVendorTypes__Apparel        = 5,
	EKSVendorTypes__StarterApparelLoadout = 6,
	EKSVendorTypes__MalwearApparelLoadout = 7,
	EKSVendorTypes__MercTwoApparelLoadout = 8,
	EKSVendorTypes__HitmanApparelLoadout = 9,
	EKSVendorTypes__EKSVendorTypes_MAX = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KillstreakUINew.PlayerProgression
// 0x50C39FC0
struct FPlayerProgression
{
	unsigned char                                      UnknownData00[0x50C39FC0];                                // 0x0000(0x50C39FC0) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.CustomLoadoutItem
// 0x5AA82280
struct FCustomLoadoutItem
{
	unsigned char                                      UnknownData00[0x5AA82280];                                // 0x0000(0x5AA82280) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ClientQueueInfo
// 0x1900 (0x5AB7A300 - 0x5AB78A00)
struct FClientQueueInfo : public FPUMG_ClientQueueInfo
{
	unsigned char                                      UnknownData00[0x1900];                                    // 0x5AB78A00(0x1900) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.MapDetail
// 0x5AB78500
struct FMapDetail
{
	unsigned char                                      UnknownData00[0x5AB78500];                                // 0x0000(0x5AB78500) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.UIMapInfo
// 0x50C3C4A0
struct FUIMapInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x50C3C4A0];                                // 0x0000(0x50C3C4A0) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.TickAnimationParams
// 0x5ABF5280
struct FTickAnimationParams
{
	unsigned char                                      UnknownData00[0x5ABF5280];                                // 0x0000(0x5ABF5280) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.EliminationMessage
// 0x5ABF5C00
struct FEliminationMessage
{
	unsigned char                                      UnknownData00[0x5ABF5C00];                                // 0x0000(0x5ABF5C00) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.GuidedCalloutSceneData
// 0x5AFE0600
struct FGuidedCalloutSceneData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFE0600];                                // 0x0000(0x5AFE0600) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.GuidedCalloutCardData
// 0x5AFDF080
struct FGuidedCalloutCardData
{
	unsigned char                                      UnknownData00[0x5AFDF080];                                // 0x0000(0x5AFDF080) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.RouteContextInfo
// 0x5AFE0560
struct FRouteContextInfo
{
	unsigned char                                      UnknownData00[0x5AFE0560];                                // 0x0000(0x5AFE0560) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ContextAction
// 0x5AFDEB00
struct FContextAction : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFDEB00];                                // 0x0000(0x5AFDEB00) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.DebugMenuCommandInfo
// 0x5AFDEA00
struct FDebugMenuCommandInfo
{
	unsigned char                                      UnknownData00[0x5AFDEA00];                                // 0x0000(0x5AFDEA00) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.MatchDetail
// 0x0000
struct FMatchDetail
{

};

// ScriptStruct KillstreakUINew.ExpDisplayInfo
// 0x5AFDE880
struct FExpDisplayInfo
{
	unsigned char                                      UnknownData00[0x5AFDE880];                                // 0x0000(0x5AFDE880) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ButtonPromptContext
// 0x5AFE0380
struct FButtonPromptContext
{
	unsigned char                                      UnknownData00[0x5AFE0380];                                // 0x0000(0x5AFE0380) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ButtonPromptData
// 0x5AFDFF80
struct FButtonPromptData
{
	unsigned char                                      UnknownData00[0x5AFDFF80];                                // 0x0000(0x5AFDFF80) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.FontPaletteInfo
// 0x5AFDFF00
struct FFontPaletteInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFDFF00];                                // 0x0000(0x5AFDFF00) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ColorPaletteInfo
// 0x5AFDFE80
struct FColorPaletteInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFDFE80];                                // 0x0000(0x5AFDFE80) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.MapIconOptions
// 0x5AFDFD00
struct FMapIconOptions
{
	unsigned char                                      UnknownData00[0x5AFDFD00];                                // 0x0000(0x5AFDFD00) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.RoundResultAnnoucement
// 0x5AFDFC00
struct FRoundResultAnnoucement
{
	unsigned char                                      UnknownData00[0x5AFDFC00];                                // 0x0000(0x5AFDFC00) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSMediaPlayerWidgetPlaylistEntry
// 0x5AFDF800
struct FKSMediaPlayerWidgetPlaylistEntry : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFDF800];                                // 0x0000(0x5AFDF800) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSPerkTreeEdgeInfo
// 0x5AFE0240
struct FKSPerkTreeEdgeInfo
{
	unsigned char                                      UnknownData00[0x5AFE0240];                                // 0x0000(0x5AFE0240) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.PlayerAlias
// 0x0000
struct FPlayerAlias
{

};

// ScriptStruct KillstreakUINew.KSPendingProfiles
// 0x5AFE01A0
struct FKSPendingProfiles
{
	unsigned char                                      UnknownData00[0x5AFE01A0];                                // 0x0000(0x5AFE01A0) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSPlayerQueryHandle
// 0x5AFF0F00
struct FKSPlayerQueryHandle
{
	unsigned char                                      UnknownData00[0x5AFF0F00];                                // 0x0000(0x5AFF0F00) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSPointObjectiveMarkerViewState
// 0x5AFF0D80
struct FKSPointObjectiveMarkerViewState
{
	unsigned char                                      UnknownData00[0x5AFF0D80];                                // 0x0000(0x5AFF0D80) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.QueueSection
// 0x5AFE2900
struct FQueueSection
{
	unsigned char                                      UnknownData00[0x5AFE2900];                                // 0x0000(0x5AFE2900) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.QueueDetail
// 0x5AFF0A80
struct FQueueDetail : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFF0A80];                                // 0x0000(0x5AFF0A80) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSettingPropertyId
// 0x5AFF0980
struct FKSSettingPropertyId
{
	unsigned char                                      UnknownData00[0x5AFF0980];                                // 0x0000(0x5AFF0980) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSettingsMenuConfig
// 0x5AFE2860
struct FKSSettingsMenuConfig
{
	unsigned char                                      UnknownData00[0x5AFE2860];                                // 0x0000(0x5AFE2860) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSettingsPageConfig
// 0x5AFF1800
struct FKSSettingsPageConfig
{
	unsigned char                                      UnknownData00[0x5AFF1800];                                // 0x0000(0x5AFF1800) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSettingsSectionConfig
// 0x5AFF1980
struct FKSSettingsSectionConfig
{
	unsigned char                                      UnknownData00[0x5AFF1980];                                // 0x0000(0x5AFF1980) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSettingsGroupConfig
// 0x5AFF1B00
struct FKSSettingsGroupConfig
{
	unsigned char                                      UnknownData00[0x5AFF1B00];                                // 0x0000(0x5AFF1B00) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSettingsContainerConfig
// 0x5AFF1B80
struct FKSSettingsContainerConfig
{
	unsigned char                                      UnknownData00[0x5AFF1B80];                                // 0x0000(0x5AFF1B80) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSettingsWidgetConfig
// 0x5AFE24A0
struct FKSSettingsWidgetConfig
{
	unsigned char                                      UnknownData00[0x5AFE24A0];                                // 0x0000(0x5AFE24A0) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSwitchDockedModeSetting
// 0x5AFF0580
struct FKSSwitchDockedModeSetting
{
	unsigned char                                      UnknownData00[0x5AFF0580];                                // 0x0000(0x5AFF0580) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSRequiredInputTypes
// 0x5AFF0400
struct FKSRequiredInputTypes
{
	unsigned char                                      UnknownData00[0x5AFF0400];                                // 0x0000(0x5AFF0400) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSAllowedPlatformTypes
// 0x5AFF1F80
struct FKSAllowedPlatformTypes
{
	unsigned char                                      UnknownData00[0x5AFF1F80];                                // 0x0000(0x5AFF1F80) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.SettingDelegateStruct
// 0x5AFF1700
struct FSettingDelegateStruct
{
	unsigned char                                      UnknownData00[0x5AFF1700];                                // 0x0000(0x5AFF1700) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSKeyGroup
// 0x0000
struct FKSKeyGroup
{

};

// ScriptStruct KillstreakUINew.KSKeyBind
// 0x5AFF1380
struct FKSKeyBind
{
	unsigned char                                      UnknownData00[0x5AFF1380];                                // 0x0000(0x5AFF1380) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSKeyBindInfo
// 0x5AFF1100
struct FKSKeyBindInfo
{
	unsigned char                                      UnknownData00[0x5AFF1100];                                // 0x0000(0x5AFF1100) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSocialPanelSectionDef
// 0x0000
struct FKSSocialPanelSectionDef
{

};

// ScriptStruct KillstreakUINew.SpecialtyCustomLoadout
// 0x5AFF2580
struct FSpecialtyCustomLoadout
{
	unsigned char                                      UnknownData00[0x5AFF2580];                                // 0x0000(0x5AFF2580) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.SpecialtyData
// 0x5AFF2700
struct FSpecialtyData
{
	unsigned char                                      UnknownData00[0x5AFF2700];                                // 0x0000(0x5AFF2700) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ToastData
// 0x5AFE2040
struct FToastData
{
	unsigned char                                      UnknownData00[0x5AFE2040];                                // 0x0000(0x5AFE2040) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ReportPlayerParams
// 0x5AFF3F80
struct FReportPlayerParams
{
	unsigned char                                      UnknownData00[0x5AFF3F80];                                // 0x0000(0x5AFF3F80) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.SpecialDamageColors
// 0x5AFF3E00
struct FSpecialDamageColors
{
	unsigned char                                      UnknownData00[0x5AFF3E00];                                // 0x0000(0x5AFF3E00) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.PlayerInventorySlot
// 0x5AFF3C80
struct FPlayerInventorySlot
{
	unsigned char                                      UnknownData00[0x5AFF3C80];                                // 0x0000(0x5AFF3C80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
