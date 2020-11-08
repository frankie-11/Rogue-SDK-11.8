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

// Enum Killstreak.EItemSourceType
enum class EItemSourceType : uint8_t
{
	EItemSourceType__Unknown       = 0,
	EItemSourceType__AbilityUse    = 1,
	EItemSourceType__Cheat         = 2,
	EItemSourceType__InitialInventory = 3,
	EItemSourceType__LobbyAnimation = 4,
	EItemSourceType__PickupInteraction = 5,
	EItemSourceType__Refund        = 6,
	EItemSourceType__RestoreInventory = 7,
	EItemSourceType__StorePurchase = 8,
	EItemSourceType__WeaponSwap    = 9,
	EItemSourceType__EItemSourceType_MAX = 10
};


// Enum Killstreak.EKSCharacterAimMode
enum class EKSCharacterAimMode : uint8_t
{
	EKSCharacterAimMode__Default   = 0,
	EKSCharacterAimMode__TransitionToDefault = 1,
	EKSCharacterAimMode__Shoulder  = 2,
	EKSCharacterAimMode__TransitionToShoulder = 3,
	EKSCharacterAimMode__AimDownSights = 4,
	EKSCharacterAimMode__TransitionToAimDownSights = 5,
	EKSCharacterAimMode__Alternate = 6,
	EKSCharacterAimMode__TransitionToAlternate = 7,
	EKSCharacterAimMode__EKSCharacterAimMode_MAX = 8
};


// Enum Killstreak.EKSEmotion
enum class EKSEmotion : uint8_t
{
	EKSEmotion__Neutral            = 0,
	EKSEmotion__Focused            = 1,
	EKSEmotion__Pain               = 2,
	EKSEmotion__Wounded            = 3,
	EKSEmotion__Dead               = 4,
	EKSEmotion__MAX                = 5
};


// Enum Killstreak.EAmmoType
enum class EAmmoType : uint8_t
{
	EAmmoType__NINE_MM             = 0,
	EAmmoType__SEVEN               = 1,
	EAmmoType__FIVE                = 2,
	EAmmoType__TWELVE_G            = 3,
	EAmmoType__FORTY_FIVE          = 4,
	EAmmoType__THREE_HUND          = 5,
	EAmmoType__TWENTY_TWO          = 6,
	EAmmoType__FIFTY               = 7,
	EAmmoType__NONE                = 8,
	EAmmoType__EAmmoType_MAX       = 9
};


// Enum Killstreak.ECharacterBehaviorState
enum class ECharacterBehaviorState : uint8_t
{
	ECharacterBehaviorState__Combat = 0,
	ECharacterBehaviorState__Idle  = 1,
	ECharacterBehaviorState__Skydive = 2,
	ECharacterBehaviorState__ECharacterBehaviorState_MAX = 3
};


// Enum Killstreak.EKSAbilityUsageFailureType
enum class EKSAbilityUsageFailureType : uint8_t
{
	EKSAbilityUsageFailureType__Unknown = 0,
	EKSAbilityUsageFailureType__Dead = 1,
	EKSAbilityUsageFailureType__Downed = 2,
	EKSAbilityUsageFailureType__EMP = 3,
	EKSAbilityUsageFailureType__NoFireZone = 4,
	EKSAbilityUsageFailureType__AlreadyActivating = 5,
	EKSAbilityUsageFailureType__Driving = 6,
	EKSAbilityUsageFailureType__Stunned = 7,
	EKSAbilityUsageFailureType__BlockingMovement = 8,
	EKSAbilityUsageFailureType__HardLanding = 9,
	EKSAbilityUsageFailureType__OutOfBounds = 10,
	EKSAbilityUsageFailureType__Locked = 11,
	EKSAbilityUsageFailureType__AltLocked = 12,
	EKSAbilityUsageFailureType__NotEnoughCharge = 13,
	EKSAbilityUsageFailureType__NoBountyTarget = 14,
	EKSAbilityUsageFailureType__AlreadyHasWeapon = 15,
	EKSAbilityUsageFailureType__WeaponBusy = 16,
	EKSAbilityUsageFailureType__RoundNotInProgress = 17,
	EKSAbilityUsageFailureType__EKSAbilityUsageFailureType_MAX = 18
};


// Enum Killstreak.EKSItemUsageFailureType
enum class EKSItemUsageFailureType : uint8_t
{
	EKSItemUsageFailureType__Unknown = 0,
	EKSItemUsageFailureType__NotEnoughQuantity = 1,
	EKSItemUsageFailureType__BlockingAction = 2,
	EKSItemUsageFailureType__NoEffect = 3,
	EKSItemUsageFailureType__EMP   = 4,
	EKSItemUsageFailureType__EKSItemUsageFailureType_MAX = 5
};


// Enum Killstreak.EShotgunHitResult
enum class EShotgunHitResult : uint8_t
{
	EShotgunHitResult__Miss        = 0,
	EShotgunHitResult__Hit         = 1,
	EShotgunHitResult__Headshot    = 2,
	EShotgunHitResult__EShotgunHitResult_MAX = 3
};


// Enum Killstreak.EWeaponStateNew
enum class EWeaponStateNew : uint8_t
{
	EWeaponStateNew__Idle          = 0,
	EWeaponStateNew__Buildup       = 1,
	EWeaponStateNew__PreFire       = 2,
	EWeaponStateNew__PostFire      = 3,
	EWeaponStateNew__Cooldown      = 4,
	EWeaponStateNew__PreReload     = 5,
	EWeaponStateNew__PostReload    = 6,
	EWeaponStateNew__ReloadCooldown = 7,
	EWeaponStateNew__Retrieve      = 8,
	EWeaponStateNew__Holster       = 9,
	EWeaponStateNew__Inactive      = 10,
	EWeaponStateNew__NotValid      = 11,
	EWeaponStateNew__EWeaponStateNew_MAX = 12
};


// Enum Killstreak.ELootSiteRarity
enum class ELootSiteRarity : uint8_t
{
	ELootSiteRarity__Personal      = 0,
	ELootSiteRarity__Normal        = 1,
	ELootSiteRarity__Uncommon      = 2,
	ELootSiteRarity__Epic          = 3,
	ELootSiteRarity__Rare          = 4,
	ELootSiteRarity__Legendary     = 5,
	ELootSiteRarity__NonWeapons    = 6,
	ELootSiteRarity__ChildSpawner  = 7,
	ELootSiteRarity__CarePackage   = 8,
	ELootSiteRarity__MedPack       = 9,
	ELootSiteRarity__StartingDrop  = 10,
	ELootSiteRarity__GameMode      = 11,
	ELootSiteRarity__PowerUp       = 12,
	ELootSiteRarity__ELootSiteRarity_MAX = 13
};


// Enum Killstreak.ECombatEventFriendlyFireType
enum class ECombatEventFriendlyFireType : uint8_t
{
	ECombatEventFriendlyFireType__Enemy = 0,
	ECombatEventFriendlyFireType__Friendly = 1,
	ECombatEventFriendlyFireType__ReverseFriendly = 2,
	ECombatEventFriendlyFireType__Self = 3,
	ECombatEventFriendlyFireType__ECombatEventFriendlyFireType_MAX = 4
};


// Enum Killstreak.EProjectileExplosionType
enum class EProjectileExplosionType : uint8_t
{
	EProjectileExplosionType__Impact = 0,
	EProjectileExplosionType__Fizzle = 1,
	EProjectileExplosionType__FuseExpired = 2,
	EProjectileExplosionType__EProjectileExplosionType_MAX = 3
};


// Enum Killstreak.EModViewModeStateChangeReason
enum class EModViewModeStateChangeReason : uint8_t
{
	EModViewModeStateChangeReason__Activated = 0,
	EModViewModeStateChangeReason__SpectatorChange = 1,
	EModViewModeStateChangeReason__Timeout = 2,
	EModViewModeStateChangeReason__Death = 3,
	EModViewModeStateChangeReason__EModViewModeStateChangeReason_MAX = 4
};


// Enum Killstreak.EModViewModeState
enum class EModViewModeState : uint8_t
{
	EModViewModeState__Off         = 0,
	EModViewModeState__OnButUnviewed = 1,
	EModViewModeState__OnAndViewed = 2,
	EModViewModeState__EModViewModeState_MAX = 3
};


// Enum Killstreak.EHitLocationType
enum class EHitLocationType : uint8_t
{
	EHitLocationType__Body         = 0,
	EHitLocationType__Head         = 1,
	EHitLocationType__Limb         = 2,
	EHitLocationType__None         = 3,
	EHitLocationType__EHitLocationType_MAX = 4
};


// Enum Killstreak.EKSVoicelineAudience
enum class EKSVoicelineAudience : uint8_t
{
	EKSVoicelineAudience__Self     = 0,
	EKSVoicelineAudience__Nearby   = 1,
	EKSVoicelineAudience__NearbyFriendlies = 2,
	EKSVoicelineAudience__AllFriendlies = 3,
	EKSVoicelineAudience__Enemies  = 4,
	EKSVoicelineAudience__EKSVoicelineAudience_MAX = 5
};


// Enum Killstreak.EAccoladeEventType
enum class EAccoladeEventType : uint8_t
{
	EAccoladeEventType__AccoladeEvent_Unknown = 0,
	EAccoladeEventType__AccoladeEvent_Elim = 1,
	EAccoladeEventType__AccoladeEvent_Downed = 2,
	EAccoladeEventType__AccoladeEvent_Revived = 3,
	EAccoladeEventType__AccoladeEvent_DownAssist = 4,
	EAccoladeEventType__AccoladeEvent_CombatEvent = 5,
	EAccoladeEventType__AccoladeEvent_MAX = 6
};


// Enum Killstreak.EAccoladeCategory
enum class EAccoladeCategory : uint8_t
{
	EAccoladeCategory__AccoladeCategory_DownsElims = 0,
	EAccoladeCategory__AccoladeCategory_MultiKill = 1,
	EAccoladeCategory__AccoladeCategory_Support = 2,
	EAccoladeCategory__AccoladeCategory_MAX = 3
};


// Enum Killstreak.EDisplayType
enum class EDisplayType : uint8_t
{
	EDisplayType__Mini             = 0,
	EDisplayType__Full             = 1,
	EDisplayType__Overlay          = 2,
	EDisplayType__EDisplayType_MAX = 3
};


// Enum Killstreak.ECombatState
enum class ECombatState : uint8_t
{
	ECombatState__Combat           = 0,
	ECombatState__Engaged          = 1,
	ECombatState__NonCombat        = 2,
	ECombatState__ECombatState_MAX = 3
};


// Enum Killstreak.EKSNeutralBombState
enum class EKSNeutralBombState : uint8_t
{
	EKSNeutralBombState__Spawned   = 0,
	EKSNeutralBombState__Reset     = 1,
	EKSNeutralBombState__Held      = 2,
	EKSNeutralBombState__Dropped   = 3,
	EKSNeutralBombState__Arming    = 4,
	EKSNeutralBombState__Armed     = 5,
	EKSNeutralBombState__Disarming = 6,
	EKSNeutralBombState__Disarmed  = 7,
	EKSNeutralBombState__Deactivated = 8,
	EKSNeutralBombState__EKSNeutralBombState_MAX = 9
};


// Enum Killstreak.EPingFailedType
enum class EPingFailedType : uint8_t
{
	EPingFailedType__None          = 0,
	EPingFailedType__Throttled     = 1,
	EPingFailedType__NoTarget      = 2,
	EPingFailedType__InvalidPingType = 3,
	EPingFailedType__EPingFailedType_MAX = 4
};


// Enum Killstreak.EPingMessage
enum class EPingMessage : uint8_t
{
	EPingMessage__None             = 0,
	EPingMessage__GoHere           = 1,
	EPingMessage__EnemyHere        = 2,
	EPingMessage__DefendHere       = 3,
	EPingMessage__HoldPosition     = 4,
	EPingMessage__FallBack         = 5,
	EPingMessage__PushForward      = 6,
	EPingMessage__GroupUp          = 7,
	EPingMessage__HelpMe           = 8,
	EPingMessage__EnemiesMoving    = 9,
	EPingMessage__Understood       = 10,
	EPingMessage__AllClear         = 11,
	EPingMessage__CancelThat       = 12,
	EPingMessage__ReviveMe         = 13,
	EPingMessage__Task1            = 14,
	EPingMessage__Task2            = 15,
	EPingMessage__Task3            = 16,
	EPingMessage__Task4            = 17,
	EPingMessage__Task5            = 18,
	EPingMessage__WatchOut         = 19,
	EPingMessage__EPingMessage_MAX = 20
};


// Enum Killstreak.EPingType
enum class EPingType : uint8_t
{
	EPingType__None                = 0,
	EPingType__PointAlly           = 1,
	EPingType__PointEnemy          = 2,
	EPingType__Self                = 3,
	EPingType__SelfEmergency       = 4,
	EPingType__Target              = 5,
	EPingType__Cancel              = 6,
	EPingType__Task                = 7,
	EPingType__NoPing              = 8,
	EPingType__EPingType_MAX       = 9
};


// Enum Killstreak.ESplineBehaviourType
enum class ESplineBehaviourType : uint8_t
{
	ESplineBehaviourType__OneShot  = 0,
	ESplineBehaviourType__OneShot_Reverse = 1,
	ESplineBehaviourType__Loop_Reset = 2,
	ESplineBehaviourType__PingPong = 3,
	ESplineBehaviourType__ESplineBehaviourType_MAX = 4
};


// Enum Killstreak.EShopItemType
enum class EShopItemType : uint8_t
{
	EShopItemType__None            = 0,
	EShopItemType__PrimaryOne      = 1,
	EShopItemType__PrimaryTwo      = 2,
	EShopItemType__SecondaryOne    = 3,
	EShopItemType__SecondaryTwo    = 4,
	EShopItemType__GadgetOne       = 5,
	EShopItemType__GadgetTwo       = 6,
	EShopItemType__Melee           = 7,
	EShopItemType__PerkOne         = 8,
	EShopItemType__PerkTwo         = 9,
	EShopItemType__PerkThree       = 10,
	EShopItemType__PerkFour        = 11,
	EShopItemType__PerkFive        = 12,
	EShopItemType__PerkSix         = 13,
	EShopItemType__GambitOne       = 14,
	EShopItemType__GambitTwo       = 15,
	EShopItemType__GambitThree     = 16,
	EShopItemType__GlobalPerk1     = 17,
	EShopItemType__GlobalPerk2     = 18,
	EShopItemType__GlobalPerk3     = 19,
	EShopItemType__GlobalPerk4     = 20,
	EShopItemType__GlobalPerk5     = 21,
	EShopItemType__GlobalPerk6     = 22,
	EShopItemType__GlobalPerk7     = 23,
	EShopItemType__GlobalPerk8     = 24,
	EShopItemType__GlobalPerk9     = 25,
	EShopItemType__GlobalPerk10    = 26,
	EShopItemType__GlobalPerk11    = 27,
	EShopItemType__GlobalPerk12    = 28,
	EShopItemType__GlobalPerk13    = 29,
	EShopItemType__GlobalPerk14    = 30,
	EShopItemType__GlobalPerk15    = 31,
	EShopItemType__MAX             = 32
};


// Enum Killstreak.ETrackedActorType
enum class ETrackedActorType : uint8_t
{
	ETrackedActorType__Unknown     = 0,
	ETrackedActorType__ShieldWeapon = 1,
	ETrackedActorType__MagGloveTarget = 2,
	ETrackedActorType__CoopEscapePoint = 3,
	ETrackedActorType__BountyTarget = 4,
	ETrackedActorType__BombDrop    = 5,
	ETrackedActorType__CashDrop    = 6,
	ETrackedActorType__Projectile  = 7,
	ETrackedActorType__HackTablet  = 8,
	ETrackedActorType__ETrackedActorType_MAX = 9
};


// Enum Killstreak.EJobSelectionState
enum class EJobSelectionState : uint8_t
{
	EJobSelectionState__Available  = 0,
	EJobSelectionState__Selected   = 1,
	EJobSelectionState__LockedIn   = 2,
	EJobSelectionState__Unavailable = 3,
	EJobSelectionState__EJobSelectionState_MAX = 4
};


// Enum Killstreak.EKSJobSelectPreviewLoadState
enum class EKSJobSelectPreviewLoadState : uint8_t
{
	EKSJobSelectPreviewLoadState__NoPreview = 0,
	EKSJobSelectPreviewLoadState__PreviewActive = 1,
	EKSJobSelectPreviewLoadState__PreviewLoadingNoVisible = 2,
	EKSJobSelectPreviewLoadState__PreviewLoadingActiveVisible = 3,
	EKSJobSelectPreviewLoadState__EKSJobSelectPreviewLoadState_MAX = 4
};


// Enum Killstreak.ETeamAlignment
enum class ETeamAlignment : uint8_t
{
	ETeamAlignment__TMAL_Neutral   = 0,
	ETeamAlignment__TMAL_Enemy     = 1,
	ETeamAlignment__TMAL_Friendly  = 2,
	ETeamAlignment__TMAL_MAX       = 3
};


// Enum Killstreak.EAnnouncementType
enum class EAnnouncementType : uint8_t
{
	EAnnouncementType__ANMT_Uknown = 0,
	EAnnouncementType__ANMT_ObjectiveMilestone = 1,
	EAnnouncementType__ANMT_PlayersLeft = 2,
	EAnnouncementType__ANMT_LastPlayerStanding = 3,
	EAnnouncementType__ANMT_RoyalePhase = 4,
	EAnnouncementType__ANMT_MAX    = 5
};


// Enum Killstreak.EGameResult
enum class EGameResult : uint8_t
{
	EGameResult__Victory           = 0,
	EGameResult__Defeat            = 1,
	EGameResult__Draw              = 2,
	EGameResult__EGameResult_MAX   = 3
};


// Enum Killstreak.EKSInteractionResult
enum class EKSInteractionResult : uint8_t
{
	EKSInteractionResult__None     = 0,
	EKSInteractionResult__Success  = 1,
	EKSInteractionResult__Interrupted = 2,
	EKSInteractionResult__Failed   = 3,
	EKSInteractionResult__EKSInteractionResult_MAX = 4
};


// Enum Killstreak.EMercCosmeticSlot
enum class EMercCosmeticSlot : uint8_t
{
	EMercCosmeticSlot__EMOTE_SLOT  = 0,
	EMercCosmeticSlot__SKIN_BUNDLE_SLOT = 1,
	EMercCosmeticSlot__WINGSUIT_SLOT = 2,
	EMercCosmeticSlot__WEAPON_WRAP_SLOT = 3,
	EMercCosmeticSlot__QUIP_SLOT   = 4,
	EMercCosmeticSlot__COMMUNICATION_SLOT = 5,
	EMercCosmeticSlot__SPRAY_SLOT  = 6,
	EMercCosmeticSlot__EMercCosmeticSlot_MAX = 7
};


// Enum Killstreak.EKSReviveDroneAbilityState
enum class EKSReviveDroneAbilityState : uint8_t
{
	EKSReviveDroneAbilityState__Unavailable = 0,
	EKSReviveDroneAbilityState__Available = 1,
	EKSReviveDroneAbilityState__Deployed = 2,
	EKSReviveDroneAbilityState__Reviving = 3,
	EKSReviveDroneAbilityState__Success = 4,
	EKSReviveDroneAbilityState__Refunded = 5,
	EKSReviveDroneAbilityState__Destroyed = 6,
	EKSReviveDroneAbilityState__EKSReviveDroneAbilityState_MAX = 7
};


// Enum Killstreak.EKSPingType
enum class EKSPingType : uint8_t
{
	EKSPingType__PING_DEFAULT      = 0,
	EKSPingType__PING_RADAR        = 1,
	EKSPingType__PING_INTEL        = 2,
	EKSPingType__PING_TRACKER      = 3,
	EKSPingType__PING_BOMB_HOLDER  = 4,
	EKSPingType__PING_MAX          = 5
};


// Enum Killstreak.ESurfaceTargetErrorReason
enum class ESurfaceTargetErrorReason : uint8_t
{
	ESurfaceTargetErrorReason__None = 0,
	ESurfaceTargetErrorReason__TooFar = 1,
	ESurfaceTargetErrorReason__TooHigh = 2,
	ESurfaceTargetErrorReason__NoRoomAtOrigin = 3,
	ESurfaceTargetErrorReason__InvalidSurface = 4,
	ESurfaceTargetErrorReason__TooClose = 5,
	ESurfaceTargetErrorReason__AimBlocked = 6,
	ESurfaceTargetErrorReason__ESurfaceTargetErrorReason_MAX = 7
};


// Enum Killstreak.EAimDataMode
enum class EAimDataMode : uint8_t
{
	EAimDataMode__NoEndTrace       = 0,
	EAimDataMode__EndTraceFromStartTrace = 1,
	EAimDataMode__EndTraceFromViewPoint = 2,
	EAimDataMode__Shotgun          = 3,
	EAimDataMode__EAimDataMode_MAX = 4
};


// Enum Killstreak.EKSActivityClientNotifyFrequency
enum class EKSActivityClientNotifyFrequency : uint8_t
{
	EKSActivityClientNotifyFrequency__None = 0,
	EKSActivityClientNotifyFrequency__OnProgressCompleted = 1,
	EKSActivityClientNotifyFrequency__OnProgressTierReached = 2,
	EKSActivityClientNotifyFrequency__OnProgressIncremented = 3,
	EKSActivityClientNotifyFrequency__EKSActivityClientNotifyFrequency_MAX = 4
};


// Enum Killstreak.EKSActivityProgressDisplayType
enum class EKSActivityProgressDisplayType : uint8_t
{
	EKSActivityProgressDisplayType__Default = 0,
	EKSActivityProgressDisplayType__RawProgress = 1,
	EKSActivityProgressDisplayType__PercentToNextTier = 2,
	EKSActivityProgressDisplayType__PercentToMaxTier = 3,
	EKSActivityProgressDisplayType__MinutesAsDuration = 4,
	EKSActivityProgressDisplayType__CurrentTier = 5,
	EKSActivityProgressDisplayType__None = 6,
	EKSActivityProgressDisplayType__EKSActivityProgressDisplayType_MAX = 7
};


// Enum Killstreak.EKSActivityTimeQueryType
enum class EKSActivityTimeQueryType : uint8_t
{
	EKSActivityTimeQueryType__All  = 0,
	EKSActivityTimeQueryType__OnlyFinished = 1,
	EKSActivityTimeQueryType__OnlyUnfinished = 2,
	EKSActivityTimeQueryType__EKSActivityTimeQueryType_MAX = 3
};


// Enum Killstreak.EKSActivityManagerSetupPhase
enum class EKSActivityManagerSetupPhase : uint8_t
{
	EKSActivityManagerSetupPhase__None = 0,
	EKSActivityManagerSetupPhase__InitialAssetScan = 1,
	EKSActivityManagerSetupPhase__RequestStoreVendors = 2,
	EKSActivityManagerSetupPhase__RequestXpTables = 3,
	EKSActivityManagerSetupPhase__LoadActivities = 4,
	EKSActivityManagerSetupPhase__WaitForSelectionPhaseFinished = 5,
	EKSActivityManagerSetupPhase__AttemptInitialActivityCreation = 6,
	EKSActivityManagerSetupPhase__Done = 7,
	EKSActivityManagerSetupPhase__EKSActivityManagerSetupPhase_MAX = 8
};


// Enum Killstreak.EKSActivityInstanceQueryType
enum class EKSActivityInstanceQueryType : uint8_t
{
	EKSActivityInstanceQueryType__LowestProgress = 0,
	EKSActivityInstanceQueryType__HighestProgress = 1,
	EKSActivityInstanceQueryType__LowestTier = 2,
	EKSActivityInstanceQueryType__HighestTier = 3,
	EKSActivityInstanceQueryType__EKSActivityInstanceQueryType_MAX = 4
};


// Enum Killstreak.EReviveDroneFlightPath
enum class EReviveDroneFlightPath : uint8_t
{
	EReviveDroneFlightPath__Drop   = 0,
	EReviveDroneFlightPath__Left   = 1,
	EReviveDroneFlightPath__Right  = 2,
	EReviveDroneFlightPath__EReviveDroneFlightPath_MAX = 3
};


// Enum Killstreak.EReviveDroneState
enum class EReviveDroneState : uint8_t
{
	EReviveDroneState__Release     = 0,
	EReviveDroneState__Transit     = 1,
	EReviveDroneState__Arrival     = 2,
	EReviveDroneState__Hover       = 3,
	EReviveDroneState__Leave       = 4,
	EReviveDroneState__EReviveDroneState_MAX = 5
};


// Enum Killstreak.EAgentRefundMethod
enum class EAgentRefundMethod : uint8_t
{
	EAgentRefundMethod__GiveWeaponAsset = 0,
	EAgentRefundMethod__BroadcastDelegate = 1,
	EAgentRefundMethod__EAgentRefundMethod_MAX = 2
};


// Enum Killstreak.EKSAimAssistInputFlag
enum class EKSAimAssistInputFlag : uint8_t
{
	EKSAimAssistInputFlag__GamepadOnly = 0,
	EKSAimAssistInputFlag__GamepadAndTouch = 1,
	EKSAimAssistInputFlag__AllInputModes = 2,
	EKSAimAssistInputFlag__EKSAimAssistInputFlag_MAX = 3
};


// Enum Killstreak.EKSAimAssistActivationType
enum class EKSAimAssistActivationType : uint8_t
{
	EKSAimAssistActivationType__AIMASSIST_DEFAULT = 0,
	EKSAimAssistActivationType__AIMASSIST_ALWAYSON = 1,
	EKSAimAssistActivationType__AIMASSIST_ALWAYSOFF = 2,
	EKSAimAssistActivationType__AIMASSIST_MAX = 3
};


// Enum Killstreak.EKSAnalogStickType
enum class EKSAnalogStickType : uint8_t
{
	EKSAnalogStickType__Unknown    = 0,
	EKSAnalogStickType__Left       = 1,
	EKSAnalogStickType__Right      = 2,
	EKSAnalogStickType__EKSAnalogStickType_MAX = 3
};


// Enum Killstreak.EGameplayAudioEvent
enum class EGameplayAudioEvent : uint8_t
{
	EGameplayAudioEvent__Unknown   = 0,
	EGameplayAudioEvent__GameStarted = 1,
	EGameplayAudioEvent__LoggedIn  = 2,
	EGameplayAudioEvent__QueueingStarted = 3,
	EGameplayAudioEvent__QueueingCanceled = 4,
	EGameplayAudioEvent__MatchFound = 5,
	EGameplayAudioEvent__LoadingScreenStarted = 6,
	EGameplayAudioEvent__EndOfMatchLobbyStarted = 7,
	EGameplayAudioEvent__EndOfMatchLobbyEnded = 8,
	EGameplayAudioEvent__EndOfMatchLobbySkipped = 9,
	EGameplayAudioEvent__EnteredMatch = 10,
	EGameplayAudioEvent__RogueSelectionStarted = 11,
	EGameplayAudioEvent__RogueSelectionEnded = 12,
	EGameplayAudioEvent__RogueSelectionFadeOut = 13,
	EGameplayAudioEvent__TeamCinematicStarted = 14,
	EGameplayAudioEvent__EstablishingShotStarted = 15,
	EGameplayAudioEvent__HoldingPenStarted = 16,
	EGameplayAudioEvent__DropshipDoorOpened = 17,
	EGameplayAudioEvent__SkydiveStarted = 18,
	EGameplayAudioEvent__SkydiveEnded = 19,
	EGameplayAudioEvent__ObjectiveArmed = 20,
	EGameplayAudioEvent__ObjectiveTime_30SecondsLeft = 21,
	EGameplayAudioEvent__ObjectiveCaptured = 22,
	EGameplayAudioEvent__LastManStanding = 23,
	EGameplayAudioEvent__SuddenDeath = 24,
	EGameplayAudioEvent__KillcamStarted = 25,
	EGameplayAudioEvent__RoundReset = 26,
	EGameplayAudioEvent__RoundWon  = 27,
	EGameplayAudioEvent__RoundLost = 28,
	EGameplayAudioEvent__MatchWon  = 29,
	EGameplayAudioEvent__MatchLost = 30,
	EGameplayAudioEvent__ReturnToLobby = 31,
	EGameplayAudioEvent__Max       = 32
};


// Enum Killstreak.EKSBattlePassProgressionActivityType
enum class EKSBattlePassProgressionActivityType : uint8_t
{
	EKSBattlePassProgressionActivityType__None = 0,
	EKSBattlePassProgressionActivityType__MiniBattlePass1 = 1,
	EKSBattlePassProgressionActivityType__MAX = 2
};


// Enum Killstreak.EPlayerBehaviorChangeReact
enum class EPlayerBehaviorChangeReact : uint8_t
{
	EPlayerBehaviorChangeReact__SkipReact = 0,
	EPlayerBehaviorChangeReact__SendNewOnly = 1,
	EPlayerBehaviorChangeReact__SendFullSetIfChanged = 2,
	EPlayerBehaviorChangeReact__SendFullSetRegardless = 3,
	EPlayerBehaviorChangeReact__EPlayerBehaviorChangeReact_MAX = 4
};


// Enum Killstreak.EActorFocalPoint
enum class EActorFocalPoint : uint8_t
{
	EActorFocalPoint__ActorFocalPoint_None = 0,
	EActorFocalPoint__ActorFocalPoint_Head = 1,
	EActorFocalPoint__ActorFocalPoint_Body = 2,
	EActorFocalPoint__ActorFocalPoint_LeftShoulder = 3,
	EActorFocalPoint__ActorFocalPoint_RightShoulder = 4,
	EActorFocalPoint__ActorFocalPoint_MAX = 5
};


// Enum Killstreak.EKSArmVisibilityType
enum class EKSArmVisibilityType : uint8_t
{
	EKSArmVisibilityType__HideNothing = 0,
	EKSArmVisibilityType__ArmAndWeapon = 1,
	EKSArmVisibilityType__WeaponOnly = 2,
	EKSArmVisibilityType__EKSArmVisibilityType_MAX = 3
};


// Enum Killstreak.EKSRevealType
enum class EKSRevealType : uint8_t
{
	EKSRevealType__NotRevealed     = 0,
	EKSRevealType__Normal          = 1,
	EKSRevealType__Permanent       = 2,
	EKSRevealType__EKSRevealType_MAX = 3
};


// Enum Killstreak.EKSPlayerHand
enum class EKSPlayerHand : uint8_t
{
	EKSPlayerHand__LeftHand        = 0,
	EKSPlayerHand__RightHand       = 1,
	EKSPlayerHand__EKSPlayerHand_MAX = 2
};


// Enum Killstreak.EKSMaterialHideType
enum class EKSMaterialHideType : uint8_t
{
	EKSMaterialHideType__CastsShadowWhenHidden = 0,
	EKSMaterialHideType__DoesNotCastShadowWhenHidden = 1,
	EKSMaterialHideType__EKSMaterialHideType_MAX = 2
};


// Enum Killstreak.EKSVehicleState
enum class EKSVehicleState : uint8_t
{
	EKSVehicleState__Outside       = 0,
	EKSVehicleState__Entering      = 1,
	EKSVehicleState__Driver        = 2,
	EKSVehicleState__Passenger     = 3,
	EKSVehicleState__Exiting       = 4,
	EKSVehicleState__EKSVehicleState_MAX = 5
};


// Enum Killstreak.EAimDownSightsMode
enum class EAimDownSightsMode : uint8_t
{
	EAimDownSightsMode__Toggle     = 0,
	EAimDownSightsMode__PressAndHold = 1,
	EAimDownSightsMode__EAimDownSightsMode_MAX = 2
};


// Enum Killstreak.EKSQualitySwitch
enum class EKSQualitySwitch : uint8_t
{
	EKSQualitySwitch__LocomotionCached = 0,
	EKSQualitySwitch__SecondLocomotionCached = 1,
	EKSQualitySwitch__PreAimArray  = 2,
	EKSQualitySwitch__PostWingSuit = 3,
	EKSQualitySwitch__Finalized3p  = 4,
	EKSQualitySwitch__PreFacialAnimation = 5,
	EKSQualitySwitch__PostFacialAnimation = 6,
	EKSQualitySwitch__PrePowSlide_SklController = 7,
	EKSQualitySwitch__PreHitReactions = 8,
	EKSQualitySwitch__PostFootIK   = 9,
	EKSQualitySwitch__PostZiplinePullyLocks = 10,
	EKSQualitySwitch__PostZiplineSkeletalControllers = 11,
	EKSQualitySwitch__PreRecoil    = 12,
	EKSQualitySwitch__PostRecoil   = 13,
	EKSQualitySwitch__PreCounterRotate = 14,
	EKSQualitySwitch__SkeletalControllersPostIK = 15,
	EKSQualitySwitch__PreVaulting_SKLController = 16,
	EKSQualitySwitch__PostVaulting_SKLController = 17,
	EKSQualitySwitch__EKSQualitySwitch_MAX = 18
};


// Enum Killstreak.EKSTurnInPlaceAnimationVariant
enum class EKSTurnInPlaceAnimationVariant : uint8_t
{
	EKSTurnInPlaceAnimationVariant__Left90 = 0,
	EKSTurnInPlaceAnimationVariant__Left180 = 1,
	EKSTurnInPlaceAnimationVariant__Right90 = 2,
	EKSTurnInPlaceAnimationVariant__Right180 = 3,
	EKSTurnInPlaceAnimationVariant__EKSTurnInPlaceAnimationVariant_MAX = 4
};


// Enum Killstreak.EKSLocomotionState
enum class EKSLocomotionState : uint8_t
{
	EKSLocomotionState__Idle       = 0,
	EKSLocomotionState__InMotion   = 1,
	EKSLocomotionState__Stopping   = 2,
	EKSLocomotionState__Pivoting   = 3,
	EKSLocomotionState__EKSLocomotionState_MAX = 4
};


// Enum Killstreak.EKSQueuedMovement
enum class EKSQueuedMovement : uint8_t
{
	EKSQueuedMovement__Jump        = 0,
	EKSQueuedMovement__DodgeRoll   = 1,
	EKSQueuedMovement__None        = 2,
	EKSQueuedMovement__EKSQueuedMovement_MAX = 3
};


// Enum Killstreak.EKSDeathState
enum class EKSDeathState : uint8_t
{
	EKSDeathState__NotDead         = 0,
	EKSDeathState__NormalDeath     = 1,
	EKSDeathState__EKSDeathState_MAX = 2
};


// Enum Killstreak.EFlashBangIntensity
enum class EFlashBangIntensity : uint8_t
{
	EFlashBangIntensity__Min       = 0,
	EFlashBangIntensity__Half      = 1,
	EFlashBangIntensity__Max       = 2
};


// Enum Killstreak.EKSBotNameGeneration
enum class EKSBotNameGeneration : uint8_t
{
	EKSBotNameGeneration__None     = 0,
	EKSBotNameGeneration__RandomNames = 1,
	EKSBotNameGeneration__DefaultClassNames = 2,
	EKSBotNameGeneration__EKSBotNameGeneration_MAX = 3
};


// Enum Killstreak.EKSLootRespawnMode
enum class EKSLootRespawnMode : uint8_t
{
	EKSLootRespawnMode__RespawnActiveSites = 0,
	EKSLootRespawnMode__RespawnRandomSites = 1,
	EKSLootRespawnMode__EKSLootRespawnMode_MAX = 2
};


// Enum Killstreak.EKSRewardType
enum class EKSRewardType : uint8_t
{
	EKSRewardType__MatchInProgress = 0,
	EKSRewardType__Winner          = 1,
	EKSRewardType__Loser           = 2,
	EKSRewardType__Draw            = 3,
	EKSRewardType__EKSRewardType_MAX = 4
};


// Enum Killstreak.EKSControlTieBreakerMode
enum class EKSControlTieBreakerMode : uint8_t
{
	EKSControlTieBreakerMode__Overtime = 0,
	EKSControlTieBreakerMode__SuddenDeath = 1,
	EKSControlTieBreakerMode__AllowTie = 2,
	EKSControlTieBreakerMode__EKSControlTieBreakerMode_MAX = 3
};


// Enum Killstreak.EChangeAdditionalActionCondition
enum class EChangeAdditionalActionCondition : uint8_t
{
	EChangeAdditionalActionCondition__NeverDo = 0,
	EChangeAdditionalActionCondition__DoIfChanged = 1,
	EChangeAdditionalActionCondition__AlwaysDo = 2,
	EChangeAdditionalActionCondition__EChangeAdditionalActionCondition_MAX = 3
};


// Enum Killstreak.EAttackDefenseTeamFilter
enum class EAttackDefenseTeamFilter : uint8_t
{
	EAttackDefenseTeamFilter__AllTeams = 0,
	EAttackDefenseTeamFilter__AttackingOnly = 1,
	EAttackDefenseTeamFilter__DefendingOnly = 2,
	EAttackDefenseTeamFilter__AttackingAndDefendingOnly = 3,
	EAttackDefenseTeamFilter__AllButAttacking = 4,
	EAttackDefenseTeamFilter__AllButDefending = 5,
	EAttackDefenseTeamFilter__AllButAttackingOrDefending = 6,
	EAttackDefenseTeamFilter__EAttackDefenseTeamFilter_MAX = 7
};


// Enum Killstreak.EPlayerInfoInventoryRestoreType
enum class EPlayerInfoInventoryRestoreType : uint8_t
{
	EPlayerInfoInventoryRestoreType__ResetToStartingInventory = 0,
	EPlayerInfoInventoryRestoreType__KeepInventory = 1,
	EPlayerInfoInventoryRestoreType__KeepInventoryIfNotDead = 2,
	EPlayerInfoInventoryRestoreType__KeepGunsOnly = 3,
	EPlayerInfoInventoryRestoreType__UseNewMethod = 4,
	EPlayerInfoInventoryRestoreType__EPlayerInfoInventoryRestoreType_MAX = 5
};


// Enum Killstreak.EKillCamStatus
enum class EKillCamStatus : uint8_t
{
	EKillCamStatus__KillCamEnabled = 0,
	EKillCamStatus__KillCamDisabled = 1,
	EKillCamStatus__EKillCamStatus_MAX = 2
};


// Enum Killstreak.EKSGamepadIcons
enum class EKSGamepadIcons : uint8_t
{
	EKSGamepadIcons__XboxOne       = 0,
	EKSGamepadIcons__PlayStation4  = 1,
	EKSGamepadIcons__NintendoSwitch = 2,
	EKSGamepadIcons__EKSGamepadIcons_MAX = 3
};


// Enum Killstreak.ERadialWheelMode
enum class ERadialWheelMode : uint8_t
{
	ERadialWheelMode__Hold         = 0,
	ERadialWheelMode__Toggle       = 1,
	ERadialWheelMode__ERadialWheelMode_MAX = 2
};


// Enum Killstreak.EGyroMode
enum class EGyroMode : uint8_t
{
	EGyroMode__None                = 0,
	EGyroMode__AimOnly             = 1,
	EGyroMode__Always              = 2,
	EGyroMode__EGyroMode_MAX       = 3
};


// Enum Killstreak.EADSMode
enum class EADSMode : uint8_t
{
	EADSMode__Hold                 = 0,
	EADSMode__Toggle               = 1,
	EADSMode__Both                 = 2,
	EADSMode__EADSMode_MAX         = 3
};


// Enum Killstreak.EInMatchStoreError
enum class EInMatchStoreError : uint8_t
{
	EInMatchStoreError__NotEnoughMoney = 0,
	EInMatchStoreError__NullItem   = 1,
	EInMatchStoreError__DeadCharacter = 2,
	EInMatchStoreError__InvalidPlayer = 3,
	EInMatchStoreError__BuyingSameItem = 4,
	EInMatchStoreError__CantEquip  = 5,
	EInMatchStoreError__BadSlot    = 6,
	EInMatchStoreError__EquipFailed = 7,
	EInMatchStoreError__InvalidGameMode = 8,
	EInMatchStoreError__PurchasesLocked = 9,
	EInMatchStoreError__ItemDidNotReplicate = 10,
	EInMatchStoreError__EInMatchStoreError_MAX = 11
};


// Enum Killstreak.EKSInteractableGroup
enum class EKSInteractableGroup : uint8_t
{
	EKSInteractableGroup__Generic  = 0,
	EKSInteractableGroup__Bomb     = 1,
	EKSInteractableGroup__Objective = 2,
	EKSInteractableGroup__DropOffZone = 3,
	EKSInteractableGroup__Vehicle  = 4,
	EKSInteractableGroup__Projectile = 5,
	EKSInteractableGroup__ZipLine  = 6,
	EKSInteractableGroup__Pawn     = 7,
	EKSInteractableGroup__EKSInteractableGroup_MAX = 8
};


// Enum Killstreak.EKSLabelAndHighlightState
enum class EKSLabelAndHighlightState : uint8_t
{
	EKSLabelAndHighlightState__NotTargeted = 0,
	EKSLabelAndHighlightState__Targeted = 1,
	EKSLabelAndHighlightState__EKSLabelAndHighlightState_MAX = 2
};


// Enum Killstreak.EJobLoadoutSlot
enum class EJobLoadoutSlot : uint8_t
{
	EJobLoadoutSlot__JobSlot_Unknown = 0,
	EJobLoadoutSlot__JobSlot_JobItem = 1,
	EJobLoadoutSlot__JobSlot_UniqueItem = 2,
	EJobLoadoutSlot__JobSlot_PrimaryWeapon = 3,
	EJobLoadoutSlot__JobSlot_PrimaryWeaponAttachment = 4,
	EJobLoadoutSlot__JobSlot_SecondaryWeapon = 5,
	EJobLoadoutSlot__JobSlot_SecondaryWeaponAttachment = 6,
	EJobLoadoutSlot__JobSlot_Gadget = 7,
	EJobLoadoutSlot__JobSlot_PerkOne = 8,
	EJobLoadoutSlot__JobSlot_PerkTwo = 9,
	EJobLoadoutSlot__JobSlot_PrimaryWeapon_Alt = 10,
	EJobLoadoutSlot__JobSlot_SecondaryWeapon_Alt = 11,
	EJobLoadoutSlot__JobSlot_Gadget_Alt = 12,
	EJobLoadoutSlot__JobSlot_Melee = 13,
	EJobLoadoutSlot__JobSlot_QuickMelee = 14,
	EJobLoadoutSlot__JobSlot_MAX   = 15
};


// Enum Killstreak.EAllowUnownedJobsState
enum class EAllowUnownedJobsState : uint8_t
{
	EAllowUnownedJobsState__Unknown = 0,
	EAllowUnownedJobsState__AllowUnowned = 1,
	EAllowUnownedJobsState__DoNotAllowUnowned = 2,
	EAllowUnownedJobsState__EAllowUnownedJobsState_MAX = 3
};


// Enum Killstreak.EPlayerAccountSlot
enum class EPlayerAccountSlot : uint8_t
{
	EPlayerAccountSlot__AVATAR_SLOT = 0,
	EPlayerAccountSlot__BANNER_SLOT = 1,
	EPlayerAccountSlot__PREFERRED_MERC_SLOT = 2,
	EPlayerAccountSlot__BORDER_SLOT = 3,
	EPlayerAccountSlot__TITLE_SLOT = 4,
	EPlayerAccountSlot__EPlayerAccountSlot_MAX = 5
};


// Enum Killstreak.EKSLobbyCharacterAnimationPose
enum class EKSLobbyCharacterAnimationPose : uint8_t
{
	EKSLobbyCharacterAnimationPose__Lobby_Idle = 0,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_01 = 1,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_02 = 2,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_03 = 3,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_04 = 4,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_05 = 5,
	EKSLobbyCharacterAnimationPose__Lobby_MAX = 6
};


// Enum Killstreak.ELobbyCharacterIndex
enum class ELobbyCharacterIndex : uint8_t
{
	ELobbyCharacterIndex__LobbyCharacter_Unknown = 0,
	ELobbyCharacterIndex__LobbyCharacter_LocalPlayer = 1,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberOne = 2,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberTwo = 3,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberThree = 4,
	ELobbyCharacterIndex__LobbyCharacter_RogueScreen = 5,
	ELobbyCharacterIndex__LobbyCharacter_PurchaseConfirmation = 6,
	ELobbyCharacterIndex__LobbyCharacter_MAX = 7
};


// Enum Killstreak.ELobbyCharacterAnimState
enum class ELobbyCharacterAnimState : uint8_t
{
	ELobbyCharacterAnimState__LobbyAnim_Unknown = 0,
	ELobbyCharacterAnimState__LobbyAnim_Login = 1,
	ELobbyCharacterAnimState__LobbyAnim_Default = 2,
	ELobbyCharacterAnimState__LobbyAnim_Hidden = 3,
	ELobbyCharacterAnimState__LobbyAnim_Idle = 4,
	ELobbyCharacterAnimState__LobbyAnim_IntroWalk = 5,
	ELobbyCharacterAnimState__LobbyAnim_EmoteOne = 6,
	ELobbyCharacterAnimState__LobbyAnim_EmoteTwo = 7,
	ELobbyCharacterAnimState__LobbyAnim_EmoteThree = 8,
	ELobbyCharacterAnimState__LobbyAnim_EmoteFour = 9,
	ELobbyCharacterAnimState__LobbyAnim_EmoteFive = 10,
	ELobbyCharacterAnimState__LobbyAnim_PreMatchWalk = 11,
	ELobbyCharacterAnimState__LobbyAnim_EOMBackground = 12,
	ELobbyCharacterAnimState__LobbyAnim_PostMatchWalk = 13,
	ELobbyCharacterAnimState__LobbyAnim_MidSequence = 14,
	ELobbyCharacterAnimState__LobbyAnim_MAX = 15
};


// Enum Killstreak.ELobbyPresenceState
enum class ELobbyPresenceState : uint8_t
{
	ELobbyPresenceState__ELobbyPresence_Unknown = 0,
	ELobbyPresenceState__ELobbyPresence_NotPresent = 1,
	ELobbyPresenceState__ELobbyPresence_PendingInvite = 2,
	ELobbyPresenceState__ELobbyPresence_Idle = 3,
	ELobbyPresenceState__ELobbyPresence_MAX = 4
};


// Enum Killstreak.ELobbyLevelSequenceTag
enum class ELobbyLevelSequenceTag : uint8_t
{
	ELobbyLevelSequenceTag__ELobbyLvlSeqTag_Login = 0,
	ELobbyLevelSequenceTag__ELobbyLvlSeqTag_MAX = 1
};


// Enum Killstreak.ELobbyCameraActorTag
enum class ELobbyCameraActorTag : uint8_t
{
	ELobbyCameraActorTag__ELobbyCamTag_Home = 0,
	ELobbyCameraActorTag__ELobbyCamTag_CustomizeLoadout = 1,
	ELobbyCameraActorTag__ELobbyCamTag_LobbyMain = 2,
	ELobbyCameraActorTag__ELobbyCamTag_MAX = 3
};


// Enum Killstreak.ELootSiteAlignment
enum class ELootSiteAlignment : uint8_t
{
	ELootSiteAlignment__Attack     = 0,
	ELootSiteAlignment__Defend     = 1,
	ELootSiteAlignment__Contested  = 2,
	ELootSiteAlignment__ELootSiteAlignment_MAX = 3
};


// Enum Killstreak.EKSMantleScaleType
enum class EKSMantleScaleType : uint8_t
{
	EKSMantleScaleType__ScaleDistOnly = 0,
	EKSMantleScaleType__ScaleDistAndTime = 1,
	EKSMantleScaleType__ShaveIntro = 2,
	EKSMantleScaleType__EKSMantleScaleType_MAX = 3
};


// Enum Killstreak.ETeamRole
enum class ETeamRole : uint8_t
{
	ETeamRole__Roleless            = 0,
	ETeamRole__Attacker            = 1,
	ETeamRole__Defender            = 2,
	ETeamRole__ETeamRole_MAX       = 3
};


// Enum Killstreak.EKSMercMasteryActivityType
enum class EKSMercMasteryActivityType : uint8_t
{
	EKSMercMasteryActivityType__None = 0,
	EKSMercMasteryActivityType__MercXp = 1,
	EKSMercMasteryActivityType__Kills = 2,
	EKSMercMasteryActivityType__Deaths = 3,
	EKSMercMasteryActivityType__Damage = 4,
	EKSMercMasteryActivityType__Downs = 5,
	EKSMercMasteryActivityType__GamesPlayed = 6,
	EKSMercMasteryActivityType__GamesWon = 7,
	EKSMercMasteryActivityType__MinutesPlayed = 8,
	EKSMercMasteryActivityType__Headshots = 9,
	EKSMercMasteryActivityType__Revives = 10,
	EKSMercMasteryActivityType__MAX = 11
};


// Enum Killstreak.EKSRelativeMinimapHeight
enum class EKSRelativeMinimapHeight : uint8_t
{
	EKSRelativeMinimapHeight__Below = 0,
	EKSRelativeMinimapHeight__SameLevel = 1,
	EKSRelativeMinimapHeight__Above = 2,
	EKSRelativeMinimapHeight__EKSRelativeMinimapHeight_MAX = 3
};


// Enum Killstreak.EThrowDirection
enum class EThrowDirection : uint8_t
{
	EThrowDirection__Back          = 0,
	EThrowDirection__Front         = 1,
	EThrowDirection__Left          = 2,
	EThrowDirection__Right         = 3,
	EThrowDirection__EThrowDirection_MAX = 4
};


// Enum Killstreak.EKSReviveDroneEvent
enum class EKSReviveDroneEvent : uint8_t
{
	EKSReviveDroneEvent__ReviveStarted = 0,
	EKSReviveDroneEvent__ReviveFinished = 1,
	EKSReviveDroneEvent__TargetRevived = 2,
	EKSReviveDroneEvent__TargetDied = 3,
	EKSReviveDroneEvent__DroneDestroyed = 4,
	EKSReviveDroneEvent__EKSReviveDroneEvent_MAX = 5
};


// Enum Killstreak.EKSNPEActivityType
enum class EKSNPEActivityType : uint8_t
{
	EKSNPEActivityType__None       = 0,
	EKSNPEActivityType__TutorialCompleted = 1,
	EKSNPEActivityType__TutorialSkipped = 2,
	EKSNPEActivityType__RegionSelected = 3,
	EKSNPEActivityType__RankedPlayed = 4,
	EKSNPEActivityType__RankedPopupDisplayed = 5,
	EKSNPEActivityType__MAX        = 6
};


// Enum Killstreak.EObjectiveIconType
enum class EObjectiveIconType : uint8_t
{
	EObjectiveIconType__Hack       = 0,
	EObjectiveIconType__Pickup     = 1,
	EObjectiveIconType__EObjectiveIconType_MAX = 2
};


// Enum Killstreak.EObjectiveType
enum class EObjectiveType : uint8_t
{
	EObjectiveType__None           = 0,
	EObjectiveType__ExtractionPC   = 1,
	EObjectiveType__BombZone       = 2,
	EObjectiveType__ControlPoint   = 3,
	EObjectiveType__EObjectiveType_MAX = 4
};


// Enum Killstreak.EKSNavAreaType
enum class EKSNavAreaType : uint8_t
{
	EKSNavAreaType__UnusedDefault  = 0,
	EKSNavAreaType__Jump           = 1,
	EKSNavAreaType__Hazard         = 2,
	EKSNavAreaType__StartZipline   = 3,
	EKSNavAreaType__TravelZipline  = 4,
	EKSNavAreaType__Swim           = 5,
	EKSNavAreaType__InteractiveObstacle = 6,
	EKSNavAreaType__EKSNavAreaType_MAX = 7
};


// Enum Killstreak.EKSInputType
enum class EKSInputType : uint8_t
{
	EKSInputType__KBM              = 0,
	EKSInputType__GP               = 1,
	EKSInputType__Touch            = 2,
	EKSInputType__EKSInputType_MAX = 3
};


// Enum Killstreak.EKSKeyBindType
enum class EKSKeyBindType : uint8_t
{
	EKSKeyBindType__ActionMapping  = 0,
	EKSKeyBindType__AxisMapping    = 1,
	EKSKeyBindType__EKSKeyBindType_MAX = 2
};


// Enum Killstreak.EModPriorityResolution
enum class EModPriorityResolution : uint8_t
{
	EModPriorityResolution__TakeValue1 = 0,
	EModPriorityResolution__TakeValue2 = 1,
	EModPriorityResolution__Stack  = 2,
	EModPriorityResolution__EModPriorityResolution_MAX = 3
};


// Enum Killstreak.EPlayerModType
enum class EPlayerModType : uint8_t
{
	EPlayerModType__Perk           = 0,
	EPlayerModType__GlobalPerk     = 1,
	EPlayerModType__Activated      = 2,
	EPlayerModType__Passive        = 3,
	EPlayerModType__TemporaryBuff  = 4,
	EPlayerModType__TemporaryDebuff = 5,
	EPlayerModType__Hidden         = 6,
	EPlayerModType__Unknown        = 7,
	EPlayerModType__EPlayerModType_MAX = 8
};


// Enum Killstreak.EModInterferenceType
enum class EModInterferenceType : uint8_t
{
	EModInterferenceType__Defer    = 0,
	EModInterferenceType__Stack    = 1,
	EModInterferenceType__WeakestWins = 2,
	EModInterferenceType__StrongestWins = 3,
	EModInterferenceType__BonusWins = 4,
	EModInterferenceType__PenaltyWins = 5,
	EModInterferenceType__EModInterferenceType_MAX = 6
};


// Enum Killstreak.EEliminationState
enum class EEliminationState : uint8_t
{
	EEliminationState__NotInPlay   = 0,
	EEliminationState__Playing     = 1,
	EEliminationState__Eliminated  = 2,
	EEliminationState__EEliminationState_MAX = 3
};


// Enum Killstreak.EIsPlayer
enum class EIsPlayer : uint8_t
{
	EIsPlayer__Unknown             = 0,
	EIsPlayer__Player              = 1,
	EIsPlayer__NotPlayer           = 2,
	EIsPlayer__EIsPlayer_MAX       = 3
};


// Enum Killstreak.EKSPlayerStatsActivityType
enum class EKSPlayerStatsActivityType : uint8_t
{
	EKSPlayerStatsActivityType__None = 0,
	EKSPlayerStatsActivityType__PlayerXp = 1,
	EKSPlayerStatsActivityType__Kills = 2,
	EKSPlayerStatsActivityType__Deaths = 3,
	EKSPlayerStatsActivityType__Damage = 4,
	EKSPlayerStatsActivityType__Downs = 5,
	EKSPlayerStatsActivityType__GamesPlayed = 6,
	EKSPlayerStatsActivityType__GamesWon = 7,
	EKSPlayerStatsActivityType__MinutesPlayed = 8,
	EKSPlayerStatsActivityType__Headshots = 9,
	EKSPlayerStatsActivityType__Revives = 10,
	EKSPlayerStatsActivityType__MAX = 11
};


// Enum Killstreak.EPollAudience
enum class EPollAudience : uint8_t
{
	EPollAudience__AllPlayerPoll   = 0,
	EPollAudience__TeamPoll        = 1,
	EPollAudience__EPollAudience_MAX = 2
};


// Enum Killstreak.EProjectileReclaimPermission
enum class EProjectileReclaimPermission : uint8_t
{
	EProjectileReclaimPermission__OwnerOnly = 0,
	EProjectileReclaimPermission__TeammatesOnly = 1,
	EProjectileReclaimPermission__Anyone = 2,
	EProjectileReclaimPermission__EProjectileReclaimPermission_MAX = 3
};


// Enum Killstreak.EProjectilePredictionType
enum class EProjectilePredictionType : uint8_t
{
	EProjectilePredictionType__PassThrough = 0,
	EProjectilePredictionType__Bounce = 1,
	EProjectilePredictionType__Stop = 2,
	EProjectilePredictionType__EProjectilePredictionType_MAX = 3
};


// Enum Killstreak.EProjectileVisibilityType
enum class EProjectileVisibilityType : uint8_t
{
	EProjectileVisibilityType__Owner = 0,
	EProjectileVisibilityType__Ally = 1,
	EProjectileVisibilityType__All = 2,
	EProjectileVisibilityType__EProjectileVisibilityType_MAX = 3
};


// Enum Killstreak.EBadBehaviorType
enum class EBadBehaviorType : uint8_t
{
	EBadBehaviorType__None         = 0,
	EBadBehaviorType__QuitEarly    = 1,
	EBadBehaviorType__Disconnected = 2,
	EBadBehaviorType__AFK          = 3,
	EBadBehaviorType__EBadBehaviorType_MAX = 4
};


// Enum Killstreak.ERadialMenuItemInterruptNotifyBehaviorType
enum class ERadialMenuItemInterruptNotifyBehaviorType : uint8_t
{
	ERadialMenuItemInterruptNotifyBehaviorType__NoNotify = 0,
	ERadialMenuItemInterruptNotifyBehaviorType__OnlyIfMarkedPlaying = 1,
	ERadialMenuItemInterruptNotifyBehaviorType__ERadialMenuItemInterruptNotifyBehaviorType_MAX = 2
};


// Enum Killstreak.EKSRadialMenuItemInterruptReason
enum class EKSRadialMenuItemInterruptReason : uint8_t
{
	EKSRadialMenuItemInterruptReason__Unknown = 0,
	EKSRadialMenuItemInterruptReason__NoCharacter = 1,
	EKSRadialMenuItemInterruptReason__Walking = 2,
	EKSRadialMenuItemInterruptReason__Sprinting = 3,
	EKSRadialMenuItemInterruptReason__Crouching = 4,
	EKSRadialMenuItemInterruptReason__Downed = 5,
	EKSRadialMenuItemInterruptReason__Dead = 6,
	EKSRadialMenuItemInterruptReason__Interacting = 7,
	EKSRadialMenuItemInterruptReason__Zipline = 8,
	EKSRadialMenuItemInterruptReason__SkyDiving = 9,
	EKSRadialMenuItemInterruptReason__DodgeRolling = 10,
	EKSRadialMenuItemInterruptReason__Falling = 11,
	EKSRadialMenuItemInterruptReason__NonRadialMenuItemEquipment = 12,
	EKSRadialMenuItemInterruptReason__RadialMenuItemActivated = 13,
	EKSRadialMenuItemInterruptReason__RadialMenuItemCooldown = 14,
	EKSRadialMenuItemInterruptReason__InvalidTargeting = 15,
	EKSRadialMenuItemInterruptReason__DistFromOrigin = 16,
	EKSRadialMenuItemInterruptReason__EKSRadialMenuItemInterruptReason_MAX = 17
};


// Enum Killstreak.ERecoilStart2
enum class ERecoilStart2 : uint8_t
{
	ERS_Zero2                      = 0,
	ERS_Random2                    = 1,
	ERS_MAX                        = 2
};


// Enum Killstreak.EPlayerStatType
enum class EPlayerStatType : uint8_t
{
	EPlayerStatType__UNKNOWN       = 0,
	EPlayerStatType__Kills         = 1,
	EPlayerStatType__Deaths        = 2,
	EPlayerStatType__Assists       = 3,
	EPlayerStatType__Downs         = 4,
	EPlayerStatType__Revives       = 5,
	EPlayerStatType__Eliminations  = 6,
	EPlayerStatType__RoundsPlayed  = 7,
	EPlayerStatType__Hacks         = 8,
	EPlayerStatType__Dehacks       = 9,
	EPlayerStatType__RawDamageDealt = 10,
	EPlayerStatType__MitigatedDamageDealt = 11,
	EPlayerStatType__RawDamageReceived = 12,
	EPlayerStatType__MitigatedDamageReceived = 13,
	EPlayerStatType__TimeAlive     = 14,
	EPlayerStatType__Rank          = 15,
	EPlayerStatType__TimePlayed    = 16,
	EPlayerStatType__Score         = 17,
	EPlayerStatType__Cash          = 18,
	EPlayerStatType__EPlayerStatType_MAX = 19
};


// Enum Killstreak.ELimitPerRound
enum class ELimitPerRound : uint8_t
{
	ELimitPerRound__None           = 0,
	ELimitPerRound__OneActive      = 1,
	ELimitPerRound__OnePerRound    = 2,
	ELimitPerRound__ELimitPerRound_MAX = 3
};


// Enum Killstreak.ELocalRequirements
enum class ELocalRequirements : uint8_t
{
	ELocalRequirements__None       = 0,
	ELocalRequirements__Controlled = 1,
	ELocalRequirements__Viewed     = 2,
	ELocalRequirements__ControlledOrViewed = 3,
	ELocalRequirements__ELocalRequirements_MAX = 4
};


// Enum Killstreak.EPlayerShopTransactionType
enum class EPlayerShopTransactionType : uint8_t
{
	EPlayerShopTransactionType__Purchase = 0,
	EPlayerShopTransactionType__SetActive = 1,
	EPlayerShopTransactionType__Refund = 2,
	EPlayerShopTransactionType__EPlayerShopTransactionType_MAX = 3
};


// Enum Killstreak.ESpecialtyRoleType
enum class ESpecialtyRoleType : uint8_t
{
	ESpecialtyRoleType__Unknown    = 0,
	ESpecialtyRoleType__Attack     = 1,
	ESpecialtyRoleType__Defense    = 2,
	ESpecialtyRoleType__Support    = 3,
	ESpecialtyRoleType__Movement   = 4,
	ESpecialtyRoleType__ESpecialtyRoleType_MAX = 5
};


// Enum Killstreak.EExtractionTeamType
enum class EExtractionTeamType : uint8_t
{
	EExtractionTeamType__NotSet    = 0,
	EExtractionTeamType__Attacker  = 1,
	EExtractionTeamType__Defender  = 2,
	EExtractionTeamType__EExtractionTeamType_MAX = 3
};


// Enum Killstreak.EWeaponSlot
enum class EWeaponSlot : uint8_t
{
	EWeaponSlot__NONE              = 0,
	EWeaponSlot__PRIMARY_ONE_SLOT  = 1,
	EWeaponSlot__PRIMARY_TWO_SLOT  = 2,
	EWeaponSlot__SECONDARY_SLOT    = 3,
	EWeaponSlot__MELEE_SLOT        = 4,
	EWeaponSlot__EWeaponSlot_MAX   = 5
};


// Enum Killstreak.ECharacterRole
enum class ECharacterRole : uint8_t
{
	ECharacterRole__None           = 0,
	ECharacterRole__Attacker       = 1,
	ECharacterRole__Defender       = 2,
	ECharacterRole__Max            = 3
};


// Enum Killstreak.EKSSocketCrouchHandling
enum class EKSSocketCrouchHandling : uint8_t
{
	EKSSocketCrouchHandling__MaintainCapsuleBottomOffset = 0,
	EKSSocketCrouchHandling__MaintainCapsuleCenterOffset = 1,
	EKSSocketCrouchHandling__ApplyCustomOffset = 2,
	EKSSocketCrouchHandling__EKSSocketCrouchHandling_MAX = 3
};


// Enum Killstreak.EKSSocketOffsetType
enum class EKSSocketOffsetType : uint8_t
{
	EKSSocketOffsetType__KeepRelativeToParent = 0,
	EKSSocketOffsetType__KeepRelativeToMesh = 1,
	EKSSocketOffsetType__KeepRelativeToCylinder = 2,
	EKSSocketOffsetType__EKSSocketOffsetType_MAX = 3
};


// Enum Killstreak.ECameraShoulder
enum class ECameraShoulder : uint8_t
{
	ECameraShoulder__Right         = 0,
	ECameraShoulder__Left          = 1,
	ECameraShoulder__ECameraShoulder_MAX = 2
};


// Enum Killstreak.EInputReleaseType
enum class EInputReleaseType : uint8_t
{
	EInputReleaseType__All         = 0,
	EInputReleaseType__RadialMenu  = 1,
	EInputReleaseType__EscapeMenu  = 2,
	EInputReleaseType__Scoreboard  = 3,
	EInputReleaseType__Map         = 4,
	EInputReleaseType__RadialMenuClose = 5,
	EInputReleaseType__EInputReleaseType_MAX = 6
};


// Enum Killstreak.EKSContextualActionButtonMode
enum class EKSContextualActionButtonMode : uint8_t
{
	EKSContextualActionButtonMode__HoldUse = 0,
	EKSContextualActionButtonMode__HoldReload = 1,
	EKSContextualActionButtonMode__HoldNone = 2,
	EKSContextualActionButtonMode__EKSContextualActionButtonMode_MAX = 3
};


// Enum Killstreak.EKSInputActionType
enum class EKSInputActionType : uint8_t
{
	EKSInputActionType__Press      = 0,
	EKSInputActionType__Hold       = 1,
	EKSInputActionType__Repeat     = 2,
	EKSInputActionType__EKSInputActionType_MAX = 3
};


// Enum Killstreak.EControllerInputType
enum class EControllerInputType : uint8_t
{
	EControllerInputType__None     = 0,
	EControllerInputType__ADSBit   = 1,
	EControllerInputType__KeyboardMouse = 2,
	EControllerInputType__KeyboardMouseADS = 3,
	EControllerInputType__Gamepad  = 4,
	EControllerInputType__GamepadADS = 5,
	EControllerInputType__JoyCon   = 6,
	EControllerInputType__JoyConADS = 7,
	EControllerInputType__Touch    = 8,
	EControllerInputType__TouchADS = 9,
	EControllerInputType__EControllerInputType_MAX = 10
};


// Enum Killstreak.EOcclusionType
enum class EOcclusionType : uint8_t
{
	EOcclusionType__None           = 0,
	EOcclusionType__Simple         = 1,
	EOcclusionType__Advanced       = 2,
	EOcclusionType__EOcclusionType_MAX = 3
};


// Enum Killstreak.EKSPowerSlideEndReason
enum class EKSPowerSlideEndReason : uint8_t
{
	EKSPowerSlideEndReason__Expired = 0,
	EKSPowerSlideEndReason__Collide = 1,
	EKSPowerSlideEndReason__Fall   = 2,
	EKSPowerSlideEndReason__Action = 3,
	EKSPowerSlideEndReason__Interrupted = 4,
	EKSPowerSlideEndReason__FaceAway = 5,
	EKSPowerSlideEndReason__Unknown = 6,
	EKSPowerSlideEndReason__EKSPowerSlideEndReason_MAX = 7
};


// Enum Killstreak.EKSGame_CustomMovement
enum class EKSGame_CustomMovement : uint8_t
{
	KSMOVE_Vaulting                = 0,
	KSMOVE_DiveFreeFall            = 1,
	KSMOVE_DiveParachute           = 2,
	KSMOVE_DodgeRoll               = 3,
	KSMOVE_ZipLine                 = 4,
	KSMOVE_FlightRecovery          = 5,
	KSMOVE_Ability                 = 6,
	KSMOVE_PowerSlide              = 7,
	KSMOVE_Kick                    = 8,
	KSMOVE_MAX                     = 9
};


// Enum Killstreak.EScreenLogType
enum class EScreenLogType : uint8_t
{
	EScreenLogType__CombatLog      = 0,
	EScreenLogType__RadialMenuItemLog = 1,
	EScreenLogType__EScreenLogType_MAX = 2
};


// Enum Killstreak.EKSRespawnMode
enum class EKSRespawnMode : uint8_t
{
	EKSRespawnMode__NoRespawn      = 0,
	EKSRespawnMode__TicketRespawn  = 1,
	EKSRespawnMode__AlwaysRespawn  = 2,
	EKSRespawnMode__EKSRespawnMode_MAX = 3
};


// Enum Killstreak.EKSPerSecondChargeMode
enum class EKSPerSecondChargeMode : uint8_t
{
	EKSPerSecondChargeMode__OverrideNone = 0,
	EKSPerSecondChargeMode__OverrideChargeable = 1,
	EKSPerSecondChargeMode__OverrideUnchargeable = 2,
	EKSPerSecondChargeMode__OverrideAll = 3,
	EKSPerSecondChargeMode__EKSPerSecondChargeMode_MAX = 4
};


// Enum Killstreak.EKSMovementDirection
enum class EKSMovementDirection : uint8_t
{
	EKSMovementDirection__Forward  = 0,
	EKSMovementDirection__Right    = 1,
	EKSMovementDirection__Back     = 2,
	EKSMovementDirection__Left     = 3,
	EKSMovementDirection__EKSMovementDirection_MAX = 4
};


// Enum Killstreak.EKSApparelGender
enum class EKSApparelGender : uint8_t
{
	EKSApparelGender__Unisex       = 0,
	EKSApparelGender__Male         = 1,
	EKSApparelGender__Female       = 2,
	EKSApparelGender__EKSApparelGender_MAX = 3
};


// Enum Killstreak.EKSCharacterGender
enum class EKSCharacterGender : uint8_t
{
	EKSCharacterGender__Unknown    = 0,
	EKSCharacterGender__Male       = 1,
	EKSCharacterGender__Female     = 2,
	EKSCharacterGender__EKSCharacterGender_MAX = 3
};


// Enum Killstreak.EPlayerSilhouetteType
enum class EPlayerSilhouetteType : uint8_t
{
	EPlayerSilhouetteType__None    = 0,
	EPlayerSilhouetteType__Neutral = 1,
	EPlayerSilhouetteType__Selected = 2,
	EPlayerSilhouetteType__Friendly = 3,
	EPlayerSilhouetteType__Enemy   = 4,
	EPlayerSilhouetteType__EPlayerSilhouetteType_MAX = 5
};


// Enum Killstreak.EDamageCategory
enum class EDamageCategory : uint8_t
{
	EDamageCategory__Default       = 0,
	EDamageCategory__NonDamage     = 1,
	EDamageCategory__Firearm       = 2,
	EDamageCategory__Impact        = 3,
	EDamageCategory__Explosion     = 4,
	EDamageCategory__Melee         = 5,
	EDamageCategory__InstantDeath  = 6,
	EDamageCategory__Environmental = 7,
	EDamageCategory__Bleed         = 8,
	EDamageCategory__Fire          = 9,
	EDamageCategory__EDamageCategory_MAX = 10
};


// Enum Killstreak.ELoadoutSlot
enum class ELoadoutSlot : uint8_t
{
	ELoadoutSlot__LoadoutSlot_None = 0,
	ELoadoutSlot__LoadoutSlot_SpecialtyOne = 1,
	ELoadoutSlot__LoadoutSlot_SpecialtyTwo = 2,
	ELoadoutSlot__LoadoutSlot_PerkOne = 3,
	ELoadoutSlot__LoadoutSlot_PerkTwo = 4,
	ELoadoutSlot__LoadoutSlot_PerkFour = 5,
	ELoadoutSlot__LoadoutSlot_KillstreakOne = 6,
	ELoadoutSlot__LoadoutSlot_KillstreakTwo = 7,
	ELoadoutSlot__LoadoutSlot_Pistol = 8,
	ELoadoutSlot__LoadoutSlot_PistolAttachOne = 9,
	ELoadoutSlot__LoadoutSlot_PistolAttachTwo = 10,
	ELoadoutSlot__LoadoutSlot_PistolAttachThree = 11,
	ELoadoutSlot__LoadoutSlot_PrimaryWeapon = 12,
	ELoadoutSlot__LoadoutSlot_PerkThree = 13,
	ELoadoutSlot__LoadoutSlot_GadgetOne = 14,
	ELoadoutSlot__LoadoutSlot_PassiveOne = 15,
	ELoadoutSlot__LoadoutSlot_PassiveTwo = 16,
	ELoadoutSlot__LoadoutSlot_SecondaryAbilityOne = 17,
	ELoadoutSlot__LoadoutSlot_SecondaryAbilityTwo = 18,
	ELoadoutSlot__LoadoutSlot_LoadoutBundleId = 19,
	ELoadoutSlot__LoadoutSlot_MAX  = 20
};


// Enum Killstreak.TG_EQUIP_POINT
enum class ETG_EQUIP_POINT : uint8_t
{
	EQP_NONE                       = 0,
	EQP_AUTO                       = 1,
	EQP_OFFHAND                    = 2,
	EQP_OFFHAND01                  = 3,
	EQP_OFFHAND02                  = 4,
	EQP_OFFHAND03                  = 5,
	EQP_RECALL                     = 6,
	EQP_PASSIVE                    = 7,
	EQP_ACTIVE                     = 8,
	EQP_ACTIVE01                   = 9,
	EQP_ACTIVE02                   = 10,
	EQP_CONSUMABLE                 = 11,
	EQP_CONSUMABLE01               = 12,
	EQP_UNUSED                     = 13,
	EQP_UNUSED01                   = 14,
	EQP_UNUSED02                   = 15,
	EQP_UNUSED03                   = 16,
	EQP_UNUSED04                   = 17,
	EQP_UNUSED05                   = 18,
	EQP_ITEM_STORE                 = 19,
	EQP_ITEM_STORE01               = 20,
	EQP_ITEM_STORE02               = 21,
	EQP_ITEM_STORE03               = 22,
	EQP_ITEM_STORE04               = 23,
	EQP_OVER_DRAW                  = 24,
	EQP_MAX                        = 25
};


// Enum Killstreak.EKSWeaponDestroyReason
enum class EKSWeaponDestroyReason : uint8_t
{
	EKSWeaponDestroyReason__None   = 0,
	EKSWeaponDestroyReason__RemoveNoReplace = 1,
	EKSWeaponDestroyReason__RemoveWithReplace = 2,
	EKSWeaponDestroyReason__DropNoReplace = 3,
	EKSWeaponDestroyReason__DropWithReplace = 4,
	EKSWeaponDestroyReason__EKSWeaponDestroyReason_MAX = 5
};


// Enum Killstreak.EReloadReplicationFlags
enum class EReloadReplicationFlags : uint8_t
{
	EReloadReplicationFlags__MinimumReplication = 0,
	EReloadReplicationFlags__ReplicateAmmo = 1,
	EReloadReplicationFlags__EReloadReplicationFlags_MAX = 2
};


// Enum Killstreak.EFiredReplicationFlags
enum class EFiredReplicationFlags : uint8_t
{
	EFiredReplicationFlags__MinimumReplication = 0,
	EFiredReplicationFlags__ReplicateAmmo = 1,
	EFiredReplicationFlags__ReplicateAim = 2,
	EFiredReplicationFlags__ReplicateAimAndAmmo = 3,
	EFiredReplicationFlags__ReplicateAllFireParameters = 4,
	EFiredReplicationFlags__EFiredReplicationFlags_MAX = 5
};


// Enum Killstreak.EKSBuildState
enum class EKSBuildState : uint8_t
{
	EKSBuildState__BUILD_PENDING_VALID = 0,
	EKSBuildState__BUILD_PENDING_INVALID = 1,
	EKSBuildState__BUILD_SUCCEEDED = 2,
	EKSBuildState__BUILD_FAILED    = 3,
	EKSBuildState__BUILD_MAX       = 4
};


// Enum Killstreak.EThirdPersonAimOriginType
enum class EThirdPersonAimOriginType : uint8_t
{
	EThirdPersonAimOriginType__ActorEyes = 0,
	EThirdPersonAimOriginType__FixedRelativeLocation = 1,
	EThirdPersonAimOriginType__ComponentByTag = 2,
	EThirdPersonAimOriginType__SocketOnCharacterMesh = 3,
	EThirdPersonAimOriginType__EThirdPersonAimOriginType_MAX = 4
};


// Enum Killstreak.EReticleType
enum class EReticleType : uint8_t
{
	EReticleType__Pistol           = 0,
	EReticleType__Rifle            = 1,
	EReticleType__Shotgun          = 2,
	EReticleType__DualAR           = 3,
	EReticleType__None             = 4,
	EReticleType__EReticleType_MAX = 5
};


// Enum Killstreak.EReloadType
enum class EReloadType : uint8_t
{
	EReloadType__Clip              = 0,
	EReloadType__SingleShot        = 1,
	EReloadType__EReloadType_MAX   = 2
};


// Enum Killstreak.EWeaponCastType
enum class EWeaponCastType : uint8_t
{
	EWeaponCastType__UseSettings   = 0,
	EWeaponCastType__AlwaysQuickCast = 1,
	EWeaponCastType__AlwaysNormalCast = 2,
	EWeaponCastType__EWeaponCastType_MAX = 3
};


// Enum Killstreak.EFireModeType
enum class EFireModeType : uint8_t
{
	EFireModeType__Single          = 0,
	EFireModeType__Burst           = 1,
	EFireModeType__SemiAuto        = 2,
	EFireModeType__EFireModeType_MAX = 3
};


// Enum Killstreak.EExtendedMagazineRounding
enum class EExtendedMagazineRounding : uint8_t
{
	EExtendedMagazineRounding__NearestInteger = 0,
	EExtendedMagazineRounding__RoundUp = 1,
	EExtendedMagazineRounding__RoundDown = 2,
	EExtendedMagazineRounding__EExtendedMagazineRounding_MAX = 3
};


// Enum Killstreak.EKSVariableScopeType
enum class EKSVariableScopeType : uint8_t
{
	EKSVariableScopeType__FixedFOV = 0,
	EKSVariableScopeType__ScopeMultiplier = 1,
	EKSVariableScopeType__EKSVariableScopeType_MAX = 2
};


// Enum Killstreak.EBundledAmmoType
enum class EBundledAmmoType : uint8_t
{
	EBundledAmmoType__FullClip     = 0,
	EBundledAmmoType__DefaultAmmoFromAsset = 1,
	EBundledAmmoType__Override     = 2,
	EBundledAmmoType__EBundledAmmoType_MAX = 3
};


// Enum Killstreak.EWeaponComponentAttachmentType
enum class EWeaponComponentAttachmentType : uint8_t
{
	EWeaponComponentAttachmentType__AttachToCharacter = 0,
	EWeaponComponentAttachmentType__AttachToMesh = 1,
	EWeaponComponentAttachmentType__EWeaponComponentAttachmentType_MAX = 2
};


// Enum Killstreak.ESkinObjectParentingType
enum class ESkinObjectParentingType : uint8_t
{
	ESkinObjectParentingType__Never = 0,
	ESkinObjectParentingType__ActiveAndMainHand = 1,
	ESkinObjectParentingType__Active = 2,
	ESkinObjectParentingType__InAction = 3,
	ESkinObjectParentingType__Always = 4,
	ESkinObjectParentingType__ESkinObjectParentingType_MAX = 5
};


// Enum Killstreak.EWeaponComponentTickType
enum class EWeaponComponentTickType : uint8_t
{
	EWeaponComponentTickType__NeverTick = 0,
	EWeaponComponentTickType__TickWhenPrimary = 1,
	EWeaponComponentTickType__TickWhenActive = 2,
	EWeaponComponentTickType__AlwaysTick = 3,
	EWeaponComponentTickType__EWeaponComponentTickType_MAX = 4
};


// Enum Killstreak.EKSWeaponMasteryActivityType
enum class EKSWeaponMasteryActivityType : uint8_t
{
	EKSWeaponMasteryActivityType__None = 0,
	EKSWeaponMasteryActivityType__Shots = 1,
	EKSWeaponMasteryActivityType__Hits = 2,
	EKSWeaponMasteryActivityType__Damage = 3,
	EKSWeaponMasteryActivityType__Downs = 4,
	EKSWeaponMasteryActivityType__Kills = 5,
	EKSWeaponMasteryActivityType__Headshots = 6,
	EKSWeaponMasteryActivityType__Deaths = 7,
	EKSWeaponMasteryActivityType__MAX = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Killstreak.GiveItemParameters
// 0x50C329A0
struct FGiveItemParameters
{
	unsigned char                                      UnknownData00[0x50C329A0];                                // 0x0000(0x50C329A0) MISSED OFFSET
};

// ScriptStruct Killstreak.DropItemParameters
// 0x50C9B180
struct FDropItemParameters
{
	unsigned char                                      UnknownData00[0x50C9B180];                                // 0x0000(0x50C9B180) MISSED OFFSET
};

// ScriptStruct Killstreak.DamageEffect
// 0x50C9E080
struct FDamageEffect
{
	unsigned char                                      UnknownData00[0x50C9E080];                                // 0x0000(0x50C9E080) MISSED OFFSET
};

// ScriptStruct Killstreak.ShotgunHitData
// 0x50C9D880
struct FShotgunHitData
{
	unsigned char                                      UnknownData00[0x50C9D880];                                // 0x0000(0x50C9D880) MISSED OFFSET
};

// ScriptStruct Killstreak.LootSiteState
// 0x50C9EE00
struct FLootSiteState
{
	unsigned char                                      UnknownData00[0x50C9EE00];                                // 0x0000(0x50C9EE00) MISSED OFFSET
};

// ScriptStruct Killstreak.AdvancedCombatEvent
// 0x50C9FB00
struct FAdvancedCombatEvent
{
	unsigned char                                      UnknownData00[0x50C9FB00];                                // 0x0000(0x50C9FB00) MISSED OFFSET
};

// ScriptStruct Killstreak.AdvancedCombatSummary
// 0x50C9F900
struct FAdvancedCombatSummary
{
	unsigned char                                      UnknownData00[0x50C9F900];                                // 0x0000(0x50C9F900) MISSED OFFSET
};

// ScriptStruct Killstreak.ProjectileExplosionInfo
// 0x50C34700
struct FProjectileExplosionInfo
{
	unsigned char                                      UnknownData00[0x50C34700];                                // 0x0000(0x50C34700) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPollResults
// 0x5A920200
struct FKSPollResults
{
	unsigned char                                      UnknownData00[0x5A920200];                                // 0x0000(0x5A920200) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPollData
// 0x5A922100
struct FKSPollData
{
	unsigned char                                      UnknownData00[0x5A922100];                                // 0x0000(0x5A922100) MISSED OFFSET
};

// ScriptStruct Killstreak.CombatEventInfo
// 0x5A921380
struct FCombatEventInfo
{
	unsigned char                                      UnknownData00[0x5A921380];                                // 0x0000(0x5A921380) MISSED OFFSET
};

// ScriptStruct Killstreak.RadialMenuItemEventInfo
// 0x5A921100
struct FRadialMenuItemEventInfo
{
	unsigned char                                      UnknownData00[0x5A921100];                                // 0x0000(0x5A921100) MISSED OFFSET
};

// ScriptStruct Killstreak.AssistInfo
// 0x5A922B80
struct FAssistInfo
{
	unsigned char                                      UnknownData00[0x5A922B80];                                // 0x0000(0x5A922B80) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeEventEntry
// 0x5A924000
struct FAccoladeEventEntry
{
	unsigned char                                      UnknownData00[0x5A924000];                                // 0x0000(0x5A924000) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeDisplayInfo
// 0x50C34020
struct FAccoladeDisplayInfo
{
	unsigned char                                      UnknownData00[0x50C34020];                                // 0x0000(0x50C34020) MISSED OFFSET
};

// ScriptStruct Killstreak.KSVoicelineEvent
// 0x5A922280
struct FKSVoicelineEvent
{
	unsigned char                                      UnknownData00[0x5A922280];                                // 0x0000(0x5A922280) MISSED OFFSET
};

// ScriptStruct Killstreak.DisplayInfo
// 0x50BB49C0
struct FDisplayInfo
{
	unsigned char                                      UnknownData00[0x50BB49C0];                                // 0x0000(0x50BB49C0) MISSED OFFSET
};

// ScriptStruct Killstreak.RoundInitState
// 0x5A923580
struct FRoundInitState
{
	unsigned char                                      UnknownData00[0x5A923580];                                // 0x0000(0x5A923580) MISSED OFFSET
};

// ScriptStruct Killstreak.RoundResult
// 0x5A925280
struct FRoundResult
{
	unsigned char                                      UnknownData00[0x5A925280];                                // 0x0000(0x5A925280) MISSED OFFSET
};

// ScriptStruct Killstreak.KSNeutralBombState
// 0x50C36460
struct FKSNeutralBombState
{
	unsigned char                                      UnknownData00[0x50C36460];                                // 0x0000(0x50C36460) MISSED OFFSET
};

// ScriptStruct Killstreak.PingInfo
// 0x50C35F60
struct FPingInfo
{
	unsigned char                                      UnknownData00[0x50C35F60];                                // 0x0000(0x50C35F60) MISSED OFFSET
};

// ScriptStruct Killstreak.KSActorProximityInfo
// 0x5A925400
struct FKSActorProximityInfo
{
	unsigned char                                      UnknownData00[0x5A925400];                                // 0x0000(0x5A925400) MISSED OFFSET
};

// ScriptStruct Killstreak.ShopItem
// 0xFFFFFFFFF630D620 (0x50C356A0 - 0x5A928080)
struct FShopItem : public FFastArraySerializerItem
{

};

// ScriptStruct Killstreak.ShopSubItem
// 0x5A927600
struct FShopSubItem
{
	unsigned char                                      UnknownData00[0x5A927600];                                // 0x0000(0x5A927600) MISSED OFFSET
};

// ScriptStruct Killstreak.KSScoreChangeEvent
// 0x5A928A80
struct FKSScoreChangeEvent
{
	unsigned char                                      UnknownData00[0x5A928A80];                                // 0x0000(0x5A928A80) MISSED OFFSET
};

// ScriptStruct Killstreak.JobSelectionEntry
// 0x1800 (0x5A929880 - 0x5A928080)
struct FJobSelectionEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x1800];                                    // 0x5A928080(0x1800) MISSED OFFSET
};

// ScriptStruct Killstreak.AnnouncementData
// 0x50C379A0
struct FAnnouncementData
{
	unsigned char                                      UnknownData00[0x50C379A0];                                // 0x0000(0x50C379A0) MISSED OFFSET
};

// ScriptStruct Killstreak.InMatchPurchaseInfo
// 0x5A92C500
struct FInMatchPurchaseInfo
{
	unsigned char                                      UnknownData00[0x5A92C500];                                // 0x0000(0x5A92C500) MISSED OFFSET
};

// ScriptStruct Killstreak.InMatchStoreItem
// 0x5A92C400
struct FInMatchStoreItem
{
	unsigned char                                      UnknownData00[0x5A92C400];                                // 0x0000(0x5A92C400) MISSED OFFSET
};

// ScriptStruct Killstreak.TelemetrySettings
// 0x5A92CC00
struct FTelemetrySettings
{
	unsigned char                                      UnknownData00[0x5A92CC00];                                // 0x0000(0x5A92CC00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSGlobalShotInfo
// 0x5AA46880
struct FKSGlobalShotInfo
{
	unsigned char                                      UnknownData00[0x5AA46880];                                // 0x0000(0x5AA46880) MISSED OFFSET
};

// ScriptStruct Killstreak.KSClientShotInfo
// 0x5AA46600
struct FKSClientShotInfo
{
	unsigned char                                      UnknownData00[0x5AA46600];                                // 0x0000(0x5AA46600) MISSED OFFSET
};

// ScriptStruct Killstreak.CongregatedShotgunHit
// 0x5AA47600
struct FCongregatedShotgunHit
{
	unsigned char                                      UnknownData00[0x5AA47600];                                // 0x0000(0x5AA47600) MISSED OFFSET
};

// ScriptStruct Killstreak.AimData
// 0x5AA4A200
struct FAimData
{
	unsigned char                                      UnknownData00[0x5AA4A200];                                // 0x0000(0x5AA4A200) MISSED OFFSET
};

// ScriptStruct Killstreak.ScoreboardStats
// 0x5AA80B80
struct FScoreboardStats
{
	unsigned char                                      UnknownData00[0x5AA80B80];                                // 0x0000(0x5AA80B80) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerEntryStats
// 0x5AA81000
struct FPlayerEntryStats
{
	unsigned char                                      UnknownData00[0x5AA81000];                                // 0x0000(0x5AA81000) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerMatchStatInfo
// 0x50C3A2E0
struct FPlayerMatchStatInfo
{
	unsigned char                                      UnknownData00[0x50C3A2E0];                                // 0x0000(0x50C3A2E0) MISSED OFFSET
};

// ScriptStruct Killstreak.TeamStats
// 0x5AA80E00
struct FTeamStats
{
	unsigned char                                      UnknownData00[0x5AA80E00];                                // 0x0000(0x5AA80E00) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerRewardsSummary
// 0x50BB5D40
struct FPlayerRewardsSummary
{
	unsigned char                                      UnknownData00[0x50BB5D40];                                // 0x0000(0x50BB5D40) MISSED OFFSET
};

// ScriptStruct Killstreak.ActivityTier
// 0x5AA80480
struct FActivityTier
{
	unsigned char                                      UnknownData00[0x5AA80480];                                // 0x0000(0x5AA80480) MISSED OFFSET
};

// ScriptStruct Killstreak.AttachmentData
// 0x5AFA7900
struct FAttachmentData
{
	unsigned char                                      UnknownData00[0x5AFA7900];                                // 0x0000(0x5AFA7900) MISSED OFFSET
};

// ScriptStruct Killstreak.SizedArraySerializer
// 0xFFFFFFFFA5073A80 (0x0000 - 0x5AF8C580)
struct FSizedArraySerializer : public FReplicatedLog
{

};

// ScriptStruct Killstreak.AccoladeEventList
// 0x5AF5B460
struct FAccoladeEventList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData00[0x5AF5B460];                                // 0x0000(0x5AF5B460) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeEventItem
// 0x5AFA7800
struct FAccoladeEventItem : public FReplicatedLogItem
{
	unsigned char                                      UnknownData00[0x5AFA7800];                                // 0x0000(0x5AFA7800) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeTrackerTableRow
// 0x5AF5B3C0
struct FAccoladeTrackerTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AF5B3C0];                                // 0x0000(0x5AF5B3C0) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladePlayerTrackers
// 0x5AFA7580
struct FAccoladePlayerTrackers
{
	unsigned char                                      UnknownData00[0x5AFA7580];                                // 0x0000(0x5AFA7580) MISSED OFFSET
};

// ScriptStruct Killstreak.ActivityReference
// 0x5AFA7400
struct FActivityReference
{
	unsigned char                                      UnknownData00[0x5AFA7400];                                // 0x0000(0x5AFA7400) MISSED OFFSET
};

// ScriptStruct Killstreak.ActivityTierStructure
// 0x5AFA9180
struct FActivityTierStructure
{
	unsigned char                                      UnknownData00[0x5AFA9180];                                // 0x0000(0x5AFA9180) MISSED OFFSET
};

// ScriptStruct Killstreak.ActivityAchievementInfo
// 0x5AFA9300
struct FActivityAchievementInfo
{
	unsigned char                                      UnknownData00[0x5AFA9300];                                // 0x0000(0x5AFA9300) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerActivityInstances
// 0x5AF7CD00
struct FPlayerActivityInstances
{
	unsigned char                                      UnknownData00[0x5AF7CD00];                                // 0x0000(0x5AF7CD00) MISSED OFFSET
};

// ScriptStruct Killstreak.BotNameTableRow
// 0x0000
struct FBotNameTableRow : public FTableRowBase
{

};

// ScriptStruct Killstreak.KSInitialLoadoutRow
// 0x5AF5B320
struct FKSInitialLoadoutRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AF5B320];                                // 0x0000(0x5AF5B320) MISSED OFFSET
};

// ScriptStruct Killstreak.AimAssistActorHealthInfo
// 0x5AFA8F00
struct FAimAssistActorHealthInfo
{
	unsigned char                                      UnknownData00[0x5AFA8F00];                                // 0x0000(0x5AFA8F00) MISSED OFFSET
};

// ScriptStruct Killstreak.RankedAimAssistTarget
// 0x5AFA8B00
struct FRankedAimAssistTarget
{
	unsigned char                                      UnknownData00[0x5AFA8B00];                                // 0x0000(0x5AFA8B00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPerceptionFilter
// 0x5AFABC00
struct FKSPerceptionFilter
{
	unsigned char                                      UnknownData00[0x5AFABC00];                                // 0x0000(0x5AFABC00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSMapPointStateFilter
// 0x5AFAA180
struct FKSMapPointStateFilter
{
	unsigned char                                      UnknownData00[0x5AFAA180];                                // 0x0000(0x5AFAA180) MISSED OFFSET
};

// ScriptStruct Killstreak.KSDestroyableHazardStateFilter
// 0x5AFA9D80
struct FKSDestroyableHazardStateFilter
{
	unsigned char                                      UnknownData00[0x5AFA9D80];                                // 0x0000(0x5AFA9D80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLootSiteFilter
// 0x5AFA9C00
struct FKSLootSiteFilter
{
	unsigned char                                      UnknownData00[0x5AFA9C00];                                // 0x0000(0x5AFA9C00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSItemDropStateFilter
// 0x5AFA9880
struct FKSItemDropStateFilter
{
	unsigned char                                      UnknownData00[0x5AFA9880];                                // 0x0000(0x5AFA9880) MISSED OFFSET
};

// ScriptStruct Killstreak.KSDestructibleStateFilter
// 0x5AFA9700
struct FKSDestructibleStateFilter
{
	unsigned char                                      UnknownData00[0x5AFA9700];                                // 0x0000(0x5AFA9700) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInteractableStateFilter
// 0x5AFAB200
struct FKSInteractableStateFilter
{
	unsigned char                                      UnknownData00[0x5AFAB200];                                // 0x0000(0x5AFAB200) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAffiliationFilter
// 0x5AFAB380
struct FKSAffiliationFilter
{
	unsigned char                                      UnknownData00[0x5AFAB380];                                // 0x0000(0x5AFAB380) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCharacterStateFilter
// 0x5AFABD00
struct FKSCharacterStateFilter
{
	unsigned char                                      UnknownData00[0x5AFABD00];                                // 0x0000(0x5AFABD00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSStimulusEvent
// 0x5AFABB00
struct FKSStimulusEvent
{
	unsigned char                                      UnknownData00[0x5AFABB00];                                // 0x0000(0x5AFABB00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAIMapPointStimulusEvent
// 0x5AFABA80
struct FKSAIMapPointStimulusEvent
{
	unsigned char                                      UnknownData00[0x5AFABA80];                                // 0x0000(0x5AFABA80) MISSED OFFSET
};

// ScriptStruct Killstreak.AIObjectiveEvent
// 0x5AFAB800
struct FAIObjectiveEvent
{
	unsigned char                                      UnknownData00[0x5AFAB800];                                // 0x0000(0x5AFAB800) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAIPlayerStimulusEvent
// 0x5AFAB700
struct FKSAIPlayerStimulusEvent
{
	unsigned char                                      UnknownData00[0x5AFAB700];                                // 0x0000(0x5AFAB700) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAITeamStimulusEvent
// 0x5AFAB600
struct FKSAITeamStimulusEvent
{
	unsigned char                                      UnknownData00[0x5AFAB600];                                // 0x0000(0x5AFAB600) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAmmoManager
// 0x19F900 (0x5AFAD200 - 0x5AE0D900)
struct FKSAmmoManager : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x19F900];                                  // 0x5AE0D900(0x19F900) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAmmoTransactions
// 0x5AFAD480
struct FKSAmmoTransactions
{
	unsigned char                                      UnknownData00[0x5AFAD480];                                // 0x0000(0x5AFAD480) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAmmoManagerEntry
// 0x632A80 (0x5AF5AB00 - 0x5A928080)
struct FKSAmmoManagerEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x632A80];                                  // 0x5A928080(0x632A80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAnimInstanceProxy
// 0x0000
struct FKSAnimInstanceProxy : public FSkinnedAnimInstanceProxy
{

};

// ScriptStruct Killstreak.KSAnimStats
// 0x5AFAD100
struct FKSAnimStats
{
	unsigned char                                      UnknownData00[0x5AFAD100];                                // 0x0000(0x5AFAD100) MISSED OFFSET
};

// ScriptStruct Killstreak.TimeAnnouncementList
// 0x5AF5AA60
struct FTimeAnnouncementList
{
	unsigned char                                      UnknownData00[0x5AF5AA60];                                // 0x0000(0x5AF5AA60) MISSED OFFSET
};

// ScriptStruct Killstreak.TimeAnnouncement
// 0x5AFAC900
struct FTimeAnnouncement
{
	unsigned char                                      UnknownData00[0x5AFAC900];                                // 0x0000(0x5AFAC900) MISSED OFFSET
};

// ScriptStruct Killstreak.Announcement
// 0x5AFAC980
struct FAnnouncement
{
	unsigned char                                      UnknownData00[0x5AFAC980];                                // 0x0000(0x5AFAC980) MISSED OFFSET
};

// ScriptStruct Killstreak.AnnouncementList
// 0x5AF5A920
struct FAnnouncementList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData00[0x5AF5A920];                                // 0x0000(0x5AF5A920) MISSED OFFSET
};

// ScriptStruct Killstreak.AnnouncementItem
// 0x5AFAC800
struct FAnnouncementItem : public FReplicatedLogItem
{
	unsigned char                                      UnknownData00[0x5AFAC800];                                // 0x0000(0x5AFAC800) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAudioEventTableRow
// 0x5AFAC780
struct FKSAudioEventTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFAC780];                                // 0x0000(0x5AFAC780) MISSED OFFSET
};

// ScriptStruct Killstreak.ArrayAsMapValue
// 0x5AF5A880
struct FArrayAsMapValue
{
	unsigned char                                      UnknownData00[0x5AF5A880];                                // 0x0000(0x5AF5A880) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerCombatInfo
// 0x5AFAE580
struct FPlayerCombatInfo
{
	unsigned char                                      UnknownData00[0x5AFAE580];                                // 0x0000(0x5AFAE580) MISSED OFFSET
};

// ScriptStruct Killstreak.KSBotAbilityTableRow
// 0x5AFAE480
struct FKSBotAbilityTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFAE480];                                // 0x0000(0x5AFAE480) MISSED OFFSET
};

// ScriptStruct Killstreak.KSBotJobConfig
// 0x5AFAE300
struct FKSBotJobConfig
{
	unsigned char                                      UnknownData00[0x5AFAE300];                                // 0x0000(0x5AFAE300) MISSED OFFSET
};

// ScriptStruct Killstreak.BotSpawnTableRow
// 0x5AF5CE00
struct FBotSpawnTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AF5CE00];                                // 0x0000(0x5AF5CE00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSBTDifficultyConfig
// 0x5AFAF480
struct FKSBTDifficultyConfig
{
	unsigned char                                      UnknownData00[0x5AFAF480];                                // 0x0000(0x5AFAF480) MISSED OFFSET
};

// ScriptStruct Killstreak.KSBTDifficultyTableRow
// 0x5AFAF100
struct FKSBTDifficultyTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFAF100];                                // 0x0000(0x5AFAF100) MISSED OFFSET
};

// ScriptStruct Killstreak.KSBTItemPriorityTableRow
// 0x5AFAEE80
struct FKSBTItemPriorityTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFAEE80];                                // 0x0000(0x5AFAEE80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSBTObjectivePriorityTableRow
// 0x5AFAE880
struct FKSBTObjectivePriorityTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFAE880];                                // 0x0000(0x5AFAE880) MISSED OFFSET
};

// ScriptStruct Killstreak.KSBTTargetSelectionTableRow
// 0x5AFAE800
struct FKSBTTargetSelectionTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFAE800];                                // 0x0000(0x5AFAE800) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInputAction
// 0x0000
struct FKSInputAction
{

};

// ScriptStruct Killstreak.KSInputActionMapping
// 0x0000
struct FKSInputActionMapping
{

};

// ScriptStruct Killstreak.KSShotgunHitChangeList
// 0xFFFFFFFFFFFD06A0 (0x5AF5CC20 - 0x5AF8C580)
struct FKSShotgunHitChangeList : public FReplicatedLog
{

};

// ScriptStruct Killstreak.KSShotgunHitChangeItem
// 0x5AFAFF80
struct FKSShotgunHitChangeItem : public FReplicatedLogItem
{
	unsigned char                                      UnknownData00[0x5AFAFF80];                                // 0x0000(0x5AFAFF80) MISSED OFFSET
};

// ScriptStruct Killstreak.CompressedShotgunHitData
// 0x5AFAFE80
struct FCompressedShotgunHitData
{
	unsigned char                                      UnknownData00[0x5AFAFE80];                                // 0x0000(0x5AFAFE80) MISSED OFFSET
};

// ScriptStruct Killstreak.AssistTag
// 0x5AFAFD80
struct FAssistTag
{
	unsigned char                                      UnknownData00[0x5AFAFD80];                                // 0x0000(0x5AFAFD80) MISSED OFFSET
};

// ScriptStruct Killstreak.VOTableRow
// 0x5AFAFC80
struct FVOTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFAFC80];                                // 0x0000(0x5AFAFC80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSOutOfBoundsInfo
// 0x5AFAFB80
struct FKSOutOfBoundsInfo
{
	unsigned char                                      UnknownData00[0x5AFAFB80];                                // 0x0000(0x5AFAFB80) MISSED OFFSET
};

// ScriptStruct Killstreak.SmoothedComponentInfo
// 0x5AFAFA00
struct FSmoothedComponentInfo
{
	unsigned char                                      UnknownData00[0x5AFAFA00];                                // 0x0000(0x5AFAFA00) MISSED OFFSET
};

// ScriptStruct Killstreak.CarriedInfo
// 0x5AFAF900
struct FCarriedInfo
{
	unsigned char                                      UnknownData00[0x5AFAF900];                                // 0x0000(0x5AFAF900) MISSED OFFSET
};

// ScriptStruct Killstreak.HaulingInfo
// 0x5AFAF800
struct FHaulingInfo
{
	unsigned char                                      UnknownData00[0x5AFAF800];                                // 0x0000(0x5AFAF800) MISSED OFFSET
};

// ScriptStruct Killstreak.ReviveInfo
// 0x5AFB0B80
struct FReviveInfo
{
	unsigned char                                      UnknownData00[0x5AFB0B80];                                // 0x0000(0x5AFB0B80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPendingWeaponStateUpdates
// 0x5AFB0800
struct FKSPendingWeaponStateUpdates
{
	unsigned char                                      UnknownData00[0x5AFB0800];                                // 0x0000(0x5AFB0800) MISSED OFFSET
};

// ScriptStruct Killstreak.KSWeaponDataUpdateContainer
// 0x5AFB0900
struct FKSWeaponDataUpdateContainer
{
	unsigned char                                      UnknownData00[0x5AFB0900];                                // 0x0000(0x5AFB0900) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInitialAmmo
// 0x5AF5CA40
struct FKSInitialAmmo
{
	unsigned char                                      UnknownData00[0x5AF5CA40];                                // 0x0000(0x5AF5CA40) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLootLockerItem
// 0x5AFB0500
struct FKSLootLockerItem
{
	unsigned char                                      UnknownData00[0x5AFB0500];                                // 0x0000(0x5AFB0500) MISSED OFFSET
};

// ScriptStruct Killstreak.HitReaction
// 0x5AFB0380
struct FHitReaction
{
	unsigned char                                      UnknownData00[0x5AFB0380];                                // 0x0000(0x5AFB0380) MISSED OFFSET
};

// ScriptStruct Killstreak.FloatHitSpringState
// 0x0000
struct FFloatHitSpringState
{

};

// ScriptStruct Killstreak.KSCharacterSocketInfo
// 0x5AFB2100
struct FKSCharacterSocketInfo
{
	unsigned char                                      UnknownData00[0x5AFB2100];                                // 0x0000(0x5AFB2100) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPowerSlideInfo
// 0x5AFB2000
struct FKSPowerSlideInfo
{
	unsigned char                                      UnknownData00[0x5AFB2000];                                // 0x0000(0x5AFB2000) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLungeInfo
// 0x5AFB1E80
struct FKSLungeInfo
{
	unsigned char                                      UnknownData00[0x5AFB1E80];                                // 0x0000(0x5AFB1E80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSZipLineInfo
// 0x5AFB1D80
struct FKSZipLineInfo
{
	unsigned char                                      UnknownData00[0x5AFB1D80];                                // 0x0000(0x5AFB1D80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSMantleInfo
// 0x5AFB1700
struct FKSMantleInfo
{
	unsigned char                                      UnknownData00[0x5AFB1700];                                // 0x0000(0x5AFB1700) MISSED OFFSET
};

// ScriptStruct Killstreak.KSDeathInfo
// 0x5AF5C7C0
struct FKSDeathInfo
{
	unsigned char                                      UnknownData00[0x5AF5C7C0];                                // 0x0000(0x5AF5C7C0) MISSED OFFSET
};

// ScriptStruct Killstreak.ChildBodyCollisionProfileCache
// 0x5AFB1400
struct FChildBodyCollisionProfileCache
{
	unsigned char                                      UnknownData00[0x5AFB1400];                                // 0x0000(0x5AFB1400) MISSED OFFSET
};

// ScriptStruct Killstreak.KSChildPhysicsAssetKeywords
// 0x5AFB1280
struct FKSChildPhysicsAssetKeywords
{
	unsigned char                                      UnknownData00[0x5AFB1280];                                // 0x0000(0x5AFB1280) MISSED OFFSET
};

// ScriptStruct Killstreak.ItemTableElement
// 0x5AFB1200
struct FItemTableElement : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFB1200];                                // 0x0000(0x5AFB1200) MISSED OFFSET
};

// ScriptStruct Killstreak.CharacterArray
// 0x5AF5C4A0
struct FCharacterArray
{
	unsigned char                                      UnknownData00[0x5AF5C4A0];                                // 0x0000(0x5AF5C4A0) MISSED OFFSET
};

// ScriptStruct Killstreak.advcombat
// 0x5AFB1100
struct Fadvcombat
{
	unsigned char                                      UnknownData00[0x5AFB1100];                                // 0x0000(0x5AFB1100) MISSED OFFSET
};

// ScriptStruct Killstreak.assist
// 0x5AFB3100
struct Fassist
{
	unsigned char                                      UnknownData00[0x5AFB3100];                                // 0x0000(0x5AFB3100) MISSED OFFSET
};

// ScriptStruct Killstreak.revive
// 0x5AFB3000
struct Frevive
{
	unsigned char                                      UnknownData00[0x5AFB3000];                                // 0x0000(0x5AFB3000) MISSED OFFSET
};

// ScriptStruct Killstreak.CombatEvent
// 0x5AFB2E00
struct FCombatEvent
{
	unsigned char                                      UnknownData00[0x5AFB2E00];                                // 0x0000(0x5AFB2E00) MISSED OFFSET
};

// ScriptStruct Killstreak.CurrencyImageRow
// 0x5AFB2B80
struct FCurrencyImageRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFB2B80];                                // 0x0000(0x5AFB2B80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSFlashBangRecord
// 0x5AF5C400
struct FKSFlashBangRecord
{
	unsigned char                                      UnknownData00[0x5AF5C400];                                // 0x0000(0x5AF5C400) MISSED OFFSET
};

// ScriptStruct Killstreak.WeaponTypeToAntiCheatId
// 0x5AFB2980
struct FWeaponTypeToAntiCheatId
{
	unsigned char                                      UnknownData00[0x5AFB2980];                                // 0x0000(0x5AFB2980) MISSED OFFSET
};

// ScriptStruct Killstreak.KSEmoteInterruptTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FKSEmoteInterruptTickFunction : public FTickFunction
{

};

// ScriptStruct Killstreak.KSEmoteConversionEntry
// 0x5AFB2880
struct FKSEmoteConversionEntry
{
	unsigned char                                      UnknownData00[0x5AFB2880];                                // 0x0000(0x5AFB2880) MISSED OFFSET
};

// ScriptStruct Killstreak.EncounterManagedBotInstance
// 0x0000
struct FEncounterManagedBotInstance
{

};

// ScriptStruct Killstreak.KSEquipmentCommonDummyStruct
// 0x0000
struct FKSEquipmentCommonDummyStruct
{

};

// ScriptStruct Killstreak.KSEquipmentContainer
// 0x1A6780 (0x5AFB4080 - 0x5AE0D900)
struct FKSEquipmentContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x1A6780];                                  // 0x5AE0D900(0x1A6780) MISSED OFFSET
};

// ScriptStruct Killstreak.KSEquipmentContainerEntry
// 0x68A180 (0x5AFB2200 - 0x5A928080)
struct FKSEquipmentContainerEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x68A180];                                  // 0x5A928080(0x68A180) MISSED OFFSET
};

// ScriptStruct Killstreak.KSGameHUDSettings
// 0x5AFB3F80
struct FKSGameHUDSettings
{
	unsigned char                                      UnknownData00[0x5AFB3F80];                                // 0x0000(0x5AFB3F80) MISSED OFFSET
};

// ScriptStruct Killstreak.LoadingScreenImageRow
// 0x5AFB3D00
struct FLoadingScreenImageRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFB3D00];                                // 0x0000(0x5AFB3D00) MISSED OFFSET
};

// ScriptStruct Killstreak.LoadingScreenTipTextRow
// 0x5AFB3C00
struct FLoadingScreenTipTextRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFB3C00];                                // 0x0000(0x5AFB3C00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSEventAssistants
// 0x5AF5C0E0
struct FKSEventAssistants
{
	unsigned char                                      UnknownData00[0x5AF5C0E0];                                // 0x0000(0x5AF5C0E0) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPlayerProfile
// 0x1A4E00 (0x5AFB3B00 - 0x5AE0ED00)
struct FKSPlayerProfile : public FPGame_PlayerProfile
{
	unsigned char                                      UnknownData00[0x1A4E00];                                  // 0x5AE0ED00(0x1A4E00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLootRaritySwapInfo
// 0x5AFB3900
struct FKSLootRaritySwapInfo
{
	unsigned char                                      UnknownData00[0x5AFB3900];                                // 0x0000(0x5AFB3900) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLootGroupGuaranteeMap
// 0x5AFB3680
struct FKSLootGroupGuaranteeMap
{
	unsigned char                                      UnknownData00[0x5AFB3680];                                // 0x0000(0x5AFB3680) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLootGroupGuarantee
// 0x5AFB3700
struct FKSLootGroupGuarantee
{
	unsigned char                                      UnknownData00[0x5AFB3700];                                // 0x0000(0x5AFB3700) MISSED OFFSET
};

// ScriptStruct Killstreak.RoyaleZoneData
// 0x5AFB3400
struct FRoyaleZoneData
{
	unsigned char                                      UnknownData00[0x5AFB3400];                                // 0x0000(0x5AFB3400) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLootRarityTimerPair
// 0x5AF5BE60
struct FKSLootRarityTimerPair
{
	unsigned char                                      UnknownData00[0x5AF5BE60];                                // 0x0000(0x5AF5BE60) MISSED OFFSET
};

// ScriptStruct Killstreak.AssistEventList
// 0x5AF5BDC0
struct FAssistEventList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData00[0x5AF5BDC0];                                // 0x0000(0x5AF5BDC0) MISSED OFFSET
};

// ScriptStruct Killstreak.AssistEventItem
// 0x5AFB3200
struct FAssistEventItem : public FReplicatedLogItem
{
	unsigned char                                      UnknownData00[0x5AFB3200];                                // 0x0000(0x5AFB3200) MISSED OFFSET
};

// ScriptStruct Killstreak.RadialMenuItemEventList
// 0x5AF5BD20
struct FRadialMenuItemEventList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData00[0x5AF5BD20];                                // 0x0000(0x5AF5BD20) MISSED OFFSET
};

// ScriptStruct Killstreak.RadialMenuItemEventItem
// 0x5AFB5200
struct FRadialMenuItemEventItem : public FReplicatedLogItem
{
	unsigned char                                      UnknownData00[0x5AFB5200];                                // 0x0000(0x5AFB5200) MISSED OFFSET
};

// ScriptStruct Killstreak.CombatEventList
// 0x5AF5BC80
struct FCombatEventList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData00[0x5AF5BC80];                                // 0x0000(0x5AF5BC80) MISSED OFFSET
};

// ScriptStruct Killstreak.CombatEventItem
// 0x5AFB5100
struct FCombatEventItem : public FReplicatedLogItem
{
	unsigned char                                      UnknownData00[0x5AFB5100];                                // 0x0000(0x5AFB5100) MISSED OFFSET
};

// ScriptStruct Killstreak.ReviveEventList
// 0x5AF5BBE0
struct FReviveEventList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData00[0x5AF5BBE0];                                // 0x0000(0x5AF5BBE0) MISSED OFFSET
};

// ScriptStruct Killstreak.ReviveEventItem
// 0x5AFB5000
struct FReviveEventItem : public FReplicatedLogItem
{
	unsigned char                                      UnknownData00[0x5AFB5000];                                // 0x0000(0x5AFB5000) MISSED OFFSET
};

// ScriptStruct Killstreak.ReviveEvent
// 0x5AFB4E80
struct FReviveEvent
{
	unsigned char                                      UnknownData00[0x5AFB4E80];                                // 0x0000(0x5AFB4E80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSTeamCashPair
// 0x5AFB4D80
struct FKSTeamCashPair
{
	unsigned char                                      UnknownData00[0x5AFB4D80];                                // 0x0000(0x5AFB4D80) MISSED OFFSET
};

// ScriptStruct Killstreak.ReplicatedRoundInfo
// 0x5AFB4C80
struct FReplicatedRoundInfo
{
	unsigned char                                      UnknownData00[0x5AFB4C80];                                // 0x0000(0x5AFB4C80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSGrenadeTargetingStateValidator
// 0x5AFB4A80
struct FKSGrenadeTargetingStateValidator
{
	unsigned char                                      UnknownData00[0x5AFB4A80];                                // 0x0000(0x5AFB4A80) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerHealthMeterState
// 0x5AFB4780
struct FPlayerHealthMeterState
{
	unsigned char                                      UnknownData00[0x5AFB4780];                                // 0x0000(0x5AFB4780) MISSED OFFSET
};

// ScriptStruct Killstreak.KSWidgetInfoParams
// 0x5AF5BA00
struct FKSWidgetInfoParams
{
	unsigned char                                      UnknownData00[0x5AF5BA00];                                // 0x0000(0x5AF5BA00) MISSED OFFSET
};

// ScriptStruct Killstreak.InMatchStoreFilterInfo
// 0x5AFB4300
struct FInMatchStoreFilterInfo
{
	unsigned char                                      UnknownData00[0x5AFB4300];                                // 0x0000(0x5AFB4300) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInteractionBlocker
// 0x5AFB4280
struct FKSInteractionBlocker
{
	unsigned char                                      UnknownData00[0x5AFB4280];                                // 0x0000(0x5AFB4280) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInteractableCameraTransition
// 0x5AFB5F80
struct FKSInteractableCameraTransition
{
	unsigned char                                      UnknownData00[0x5AFB5F80];                                // 0x0000(0x5AFB5F80) MISSED OFFSET
};

// ScriptStruct Killstreak.SkinnableAudioEvent
// 0x5AFB5E80
struct FSkinnableAudioEvent
{
	unsigned char                                      UnknownData00[0x5AFB5E80];                                // 0x0000(0x5AFB5E80) MISSED OFFSET
};

// ScriptStruct Killstreak.ItemDisplayStat
// 0x5AFB5B80
struct FItemDisplayStat
{
	unsigned char                                      UnknownData00[0x5AFB5B80];                                // 0x0000(0x5AFB5B80) MISSED OFFSET
};

// ScriptStruct Killstreak.ItemDisplayStatParams
// 0x5AFB5C80
struct FItemDisplayStatParams : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFB5C80];                                // 0x0000(0x5AFB5C80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSItemMasterTableRow
// 0x5AFB5A00
struct FKSItemMasterTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFB5A00];                                // 0x0000(0x5AFB5A00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSJobSelectionAllowUnownedJobs
// 0x5AF5E160
struct FKSJobSelectionAllowUnownedJobs
{
	unsigned char                                      UnknownData00[0x5AF5E160];                                // 0x0000(0x5AF5E160) MISSED OFFSET
};

// ScriptStruct Killstreak.JobSelectionList
// 0x1507C0 (0x5AF5E0C0 - 0x5AE0D900)
struct FJobSelectionList : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x1507C0];                                  // 0x5AE0D900(0x1507C0) MISSED OFFSET
};

// ScriptStruct Killstreak.PreviewActorPropSkinInfo
// 0x5AFB5500
struct FPreviewActorPropSkinInfo
{
	unsigned char                                      UnknownData00[0x5AFB5500];                                // 0x0000(0x5AFB5500) MISSED OFFSET
};

// ScriptStruct Killstreak.WeaponWrapTestPairs
// 0x5AFB5400
struct FWeaponWrapTestPairs
{
	unsigned char                                      UnknownData00[0x5AFB5400];                                // 0x0000(0x5AFB5400) MISSED OFFSET
};

// ScriptStruct Killstreak.TrackedPlayers
// 0x5AFB7380
struct FTrackedPlayers
{
	unsigned char                                      UnknownData00[0x5AFB7380];                                // 0x0000(0x5AFB7380) MISSED OFFSET
};

// ScriptStruct Killstreak.ActiveWeaponPropBase
// 0x5AFB7300
struct FActiveWeaponPropBase
{
	unsigned char                                      UnknownData00[0x5AFB7300];                                // 0x0000(0x5AFB7300) MISSED OFFSET
};

// ScriptStruct Killstreak.LegacyWeaponProp
// 0xFFFFFFFFFFFFFF80 (0x5AFB7280 - 0x5AFB7300)
struct FLegacyWeaponProp : public FActiveWeaponPropBase
{

};

// ScriptStruct Killstreak.LobbySkeletalPropInfo
// 0x5AFB6F00
struct FLobbySkeletalPropInfo
{
	unsigned char                                      UnknownData00[0x5AFB6F00];                                // 0x0000(0x5AFB6F00) MISSED OFFSET
};

// ScriptStruct Killstreak.ActiveWeaponProp
// 0xFFFFFFFFA5048D00 (0x0000 - 0x5AFB7300)
struct FActiveWeaponProp : public FActiveWeaponPropBase
{

};

// ScriptStruct Killstreak.PropIdentifier
// 0x5AFB6E00
struct FPropIdentifier
{
	unsigned char                                      UnknownData00[0x5AFB6E00];                                // 0x0000(0x5AFB6E00) MISSED OFFSET
};

// ScriptStruct Killstreak.LootSiteTableRow
// 0x5AFB6B00
struct FLootSiteTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFB6B00];                                // 0x0000(0x5AFB6B00) MISSED OFFSET
};

// ScriptStruct Killstreak.LootSiteDropInfo
// 0x5AFB6780
struct FLootSiteDropInfo
{
	unsigned char                                      UnknownData00[0x5AFB6780];                                // 0x0000(0x5AFB6780) MISSED OFFSET
};

// ScriptStruct Killstreak.MantleConfig
// 0x5AFB8100
struct FMantleConfig
{
	unsigned char                                      UnknownData00[0x5AFB8100];                                // 0x0000(0x5AFB8100) MISSED OFFSET
};

// ScriptStruct Killstreak.MatchRecord
// 0x5AFD0D80
struct FMatchRecord
{
	unsigned char                                      UnknownData00[0x5AFD0D80];                                // 0x0000(0x5AFD0D80) MISSED OFFSET
};

// ScriptStruct Killstreak.ObjectiveCaptureEventRecord
// 0x5AFB7900
struct FObjectiveCaptureEventRecord
{
	unsigned char                                      UnknownData00[0x5AFB7900];                                // 0x0000(0x5AFB7900) MISSED OFFSET
};

// ScriptStruct Killstreak.RotationRecord
// 0x5AFB7E80
struct FRotationRecord
{
	unsigned char                                      UnknownData00[0x5AFB7E80];                                // 0x0000(0x5AFB7E80) MISSED OFFSET
};

// ScriptStruct Killstreak.LocationRecord
// 0x5AFB7C80
struct FLocationRecord
{
	unsigned char                                      UnknownData00[0x5AFB7C80];                                // 0x0000(0x5AFB7C80) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerConnectionEventRecord
// 0x5AFB7600
struct FPlayerConnectionEventRecord
{
	unsigned char                                      UnknownData00[0x5AFB7600];                                // 0x0000(0x5AFB7600) MISSED OFFSET
};

// ScriptStruct Killstreak.RoundEventRecord
// 0x5AFBCE00
struct FRoundEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBCE00];                                // 0x0000(0x5AFBCE00) MISSED OFFSET
};

// ScriptStruct Killstreak.RoundClientInputTypeUse
// 0x5AFB9380
struct FRoundClientInputTypeUse
{
	unsigned char                                      UnknownData00[0x5AFB9380];                                // 0x0000(0x5AFB9380) MISSED OFFSET
};

// ScriptStruct Killstreak.PollEndEventRecord
// 0x5AFB8F00
struct FPollEndEventRecord
{
	unsigned char                                      UnknownData00[0x5AFB8F00];                                // 0x0000(0x5AFB8F00) MISSED OFFSET
};

// ScriptStruct Killstreak.OrientationEventRecord
// 0x5AFB8800
struct FOrientationEventRecord
{
	unsigned char                                      UnknownData00[0x5AFB8800];                                // 0x0000(0x5AFB8800) MISSED OFFSET
};

// ScriptStruct Killstreak.ClientStatisticsRecord
// 0x5AFB8B00
struct FClientStatisticsRecord
{
	unsigned char                                      UnknownData00[0x5AFB8B00];                                // 0x0000(0x5AFB8B00) MISSED OFFSET
};

// ScriptStruct Killstreak.BotDifficultyChangeEventRecord
// 0x5AFB8600
struct FBotDifficultyChangeEventRecord
{
	unsigned char                                      UnknownData00[0x5AFB8600];                                // 0x0000(0x5AFB8600) MISSED OFFSET
};

// ScriptStruct Killstreak.BotStartingDifficultyRecord
// 0x5AFB8480
struct FBotStartingDifficultyRecord
{
	unsigned char                                      UnknownData00[0x5AFB8480];                                // 0x0000(0x5AFB8480) MISSED OFFSET
};

// ScriptStruct Killstreak.MultipleKillEventRecord
// 0x5AFBA400
struct FMultipleKillEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBA400];                                // 0x0000(0x5AFBA400) MISSED OFFSET
};

// ScriptStruct Killstreak.EliminationStreakEventRecord
// 0x5AFBA280
struct FEliminationStreakEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBA280];                                // 0x0000(0x5AFBA280) MISSED OFFSET
};

// ScriptStruct Killstreak.GadgetUseEventRecord
// 0x5AFB9B80
struct FGadgetUseEventRecord
{
	unsigned char                                      UnknownData00[0x5AFB9B80];                                // 0x0000(0x5AFB9B80) MISSED OFFSET
};

// ScriptStruct Killstreak.CommunicationUseEventRecord
// 0x5AFB9600
struct FCommunicationUseEventRecord
{
	unsigned char                                      UnknownData00[0x5AFB9600];                                // 0x0000(0x5AFB9600) MISSED OFFSET
};

// ScriptStruct Killstreak.RadialMenuItemUseEventRecord
// 0x5AFBB180
struct FRadialMenuItemUseEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBB180];                                // 0x0000(0x5AFBB180) MISSED OFFSET
};

// ScriptStruct Killstreak.AbilityUseEventRecord
// 0x5AFBAA80
struct FAbilityUseEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBAA80];                                // 0x0000(0x5AFBAA80) MISSED OFFSET
};

// ScriptStruct Killstreak.WeaponUseSummaryRecord
// 0x5AFBC480
struct FWeaponUseSummaryRecord
{
	unsigned char                                      UnknownData00[0x5AFBC480];                                // 0x0000(0x5AFBC480) MISSED OFFSET
};

// ScriptStruct Killstreak.ReviveEventRecord
// 0x5AFBC180
struct FReviveEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBC180];                                // 0x0000(0x5AFBC180) MISSED OFFSET
};

// ScriptStruct Killstreak.ExecuteEventRecord
// 0x5AFBBE00
struct FExecuteEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBBE00];                                // 0x0000(0x5AFBBE00) MISSED OFFSET
};

// ScriptStruct Killstreak.DownEventRecord
// 0x5AFBBA80
struct FDownEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBBA80];                                // 0x0000(0x5AFBBA80) MISSED OFFSET
};

// ScriptStruct Killstreak.CashCollectionEventRecord
// 0x5AFBB800
struct FCashCollectionEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBB800];                                // 0x0000(0x5AFBB800) MISSED OFFSET
};

// ScriptStruct Killstreak.PurchasedItemEventRecord
// 0x5AFBB600
struct FPurchasedItemEventRecord
{
	unsigned char                                      UnknownData00[0x5AFBB600];                                // 0x0000(0x5AFBB600) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerStartingCashRecord
// 0x5AFBD580
struct FPlayerStartingCashRecord
{
	unsigned char                                      UnknownData00[0x5AFBD580];                                // 0x0000(0x5AFBD580) MISSED OFFSET
};

// ScriptStruct Killstreak.MirrorMatchupRecord
// 0x5AFBD280
struct FMirrorMatchupRecord
{
	unsigned char                                      UnknownData00[0x5AFBD280];                                // 0x0000(0x5AFBD280) MISSED OFFSET
};

// ScriptStruct Killstreak.TeamSideRecord
// 0x5AFBCF80
struct FTeamSideRecord
{
	unsigned char                                      UnknownData00[0x5AFBCF80];                                // 0x0000(0x5AFBCF80) MISSED OFFSET
};

// ScriptStruct Killstreak.ClientContextRecord
// 0x5AFBC800
struct FClientContextRecord
{
	unsigned char                                      UnknownData00[0x5AFBC800];                                // 0x0000(0x5AFBC800) MISSED OFFSET
};

// ScriptStruct Killstreak.JobSelectionRecord
// 0x5AFBE180
struct FJobSelectionRecord
{
	unsigned char                                      UnknownData00[0x5AFBE180];                                // 0x0000(0x5AFBE180) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerRecord
// 0x5AFBEB00
struct FPlayerRecord
{
	unsigned char                                      UnknownData00[0x5AFBEB00];                                // 0x0000(0x5AFBEB00) MISSED OFFSET
};

// ScriptStruct Killstreak.MinimapData
// 0x5AFBE800
struct FMinimapData
{
	unsigned char                                      UnknownData00[0x5AFBE800];                                // 0x0000(0x5AFBE800) MISSED OFFSET
};

// ScriptStruct Killstreak.ObjectiveRecord
// 0x5AFBE900
struct FObjectiveRecord
{
	unsigned char                                      UnknownData00[0x5AFBE900];                                // 0x0000(0x5AFBE900) MISSED OFFSET
};

// ScriptStruct Killstreak.StateMachineObjectEntry
// 0x5AFD0C00
struct FStateMachineObjectEntry
{
	unsigned char                                      UnknownData00[0x5AFD0C00];                                // 0x0000(0x5AFD0C00) MISSED OFFSET
};

// ScriptStruct Killstreak.StateMachineModEntry
// 0x5AFD0B00
struct FStateMachineModEntry
{
	unsigned char                                      UnknownData00[0x5AFD0B00];                                // 0x0000(0x5AFD0B00) MISSED OFFSET
};

// ScriptStruct Killstreak.DownedEnemyPingHandle
// 0x5AFD0980
struct FDownedEnemyPingHandle
{
	unsigned char                                      UnknownData00[0x5AFD0980];                                // 0x0000(0x5AFD0980) MISSED OFFSET
};

// ScriptStruct Killstreak.KSModZoneModInfo
// 0x5AFD0780
struct FKSModZoneModInfo
{
	unsigned char                                      UnknownData00[0x5AFD0780];                                // 0x0000(0x5AFD0780) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeMultiDownTracker
// 0x5AFD0680
struct FAccoladeMultiDownTracker
{
	unsigned char                                      UnknownData00[0x5AFD0680];                                // 0x0000(0x5AFD0680) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeMultiElimTracker
// 0x5AFD0580
struct FAccoladeMultiElimTracker
{
	unsigned char                                      UnknownData00[0x5AFD0580];                                // 0x0000(0x5AFD0580) MISSED OFFSET
};

// ScriptStruct Killstreak.AirElimTracker
// 0x5AFD0480
struct FAirElimTracker
{
	unsigned char                                      UnknownData00[0x5AFD0480];                                // 0x0000(0x5AFD0480) MISSED OFFSET
};

// ScriptStruct Killstreak.TrackPlayerElim
// 0x5AFD0380
struct FTrackPlayerElim
{
	unsigned char                                      UnknownData00[0x5AFD0380];                                // 0x0000(0x5AFD0380) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPersistentMinPlayerDataContainer
// 0x151B20 (0x5AF5F420 - 0x5AE0D900)
struct FKSPersistentMinPlayerDataContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x151B20];                                  // 0x5AE0D900(0x151B20) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPersistentPlayerId
// 0x5AFD0100
struct FKSPersistentPlayerId
{
	unsigned char                                      UnknownData00[0x5AFD0100];                                // 0x0000(0x5AFD0100) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPersistentMinPlayerData
// 0x6A9F00 (0x5AFD1F80 - 0x5A928080)
struct FKSPersistentMinPlayerData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x6A9F00];                                  // 0x5A928080(0x6A9F00) MISSED OFFSET
};

// ScriptStruct Killstreak.PingInfoChangeList
// 0x151A80 (0x5AF5F380 - 0x5AE0D900)
struct FPingInfoChangeList : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x151A80];                                  // 0x5AE0D900(0x151A80) MISSED OFFSET
};

// ScriptStruct Killstreak.PingInfoChangeItem
// 0x6A9E00 (0x5AFD1E80 - 0x5A928080)
struct FPingInfoChangeItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x6A9E00];                                  // 0x5A928080(0x6A9E00) MISSED OFFSET
};

// ScriptStruct Killstreak.PingCacher
// 0x5AFD1D80
struct FPingCacher
{
	unsigned char                                      UnknownData00[0x5AFD1D80];                                // 0x0000(0x5AFD1D80) MISSED OFFSET
};

// ScriptStruct Killstreak.InternalPingInfo
// 0x5AFD1C00
struct FInternalPingInfo
{
	unsigned char                                      UnknownData00[0x5AFD1C00];                                // 0x0000(0x5AFD1C00) MISSED OFFSET
};

// ScriptStruct Killstreak.ClientStatistics
// 0x5AFD1980
struct FClientStatistics
{
	unsigned char                                      UnknownData00[0x5AFD1980];                                // 0x0000(0x5AFD1980) MISSED OFFSET
};

// ScriptStruct Killstreak.ClientInputTypeUse
// 0x5AFD1780
struct FClientInputTypeUse
{
	unsigned char                                      UnknownData00[0x5AFD1780];                                // 0x0000(0x5AFD1780) MISSED OFFSET
};

// ScriptStruct Killstreak.ClientContext
// 0x5AFD2B00
struct FClientContext
{
	unsigned char                                      UnknownData00[0x5AFD2B00];                                // 0x0000(0x5AFD2B00) MISSED OFFSET
};

// ScriptStruct Killstreak.DeferredViewTargetChangeInfo
// 0x5AFD2A00
struct FDeferredViewTargetChangeInfo
{
	unsigned char                                      UnknownData00[0x5AFD2A00];                                // 0x0000(0x5AFD2A00) MISSED OFFSET
};

// ScriptStruct Killstreak.KickbackPlayback
// 0x5AFD2900
struct FKickbackPlayback
{
	unsigned char                                      UnknownData00[0x5AFD2900];                                // 0x0000(0x5AFD2900) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCustomInputAxisKeyMappings
// 0x5AFC7600
struct FKSCustomInputAxisKeyMappings
{
	unsigned char                                      UnknownData00[0x5AFC7600];                                // 0x0000(0x5AFC7600) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInputAxisKeyMappings
// 0x5AF5F2E0
struct FKSInputAxisKeyMappings
{
	unsigned char                                      UnknownData00[0x5AF5F2E0];                                // 0x0000(0x5AF5F2E0) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCustomInputActionKeyMappings
// 0x5AF5F060
struct FKSCustomInputActionKeyMappings
{
	unsigned char                                      UnknownData00[0x5AF5F060];                                // 0x0000(0x5AF5F060) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInputActionKeyMapping
// 0x5AFD2280
struct FKSInputActionKeyMapping
{
	unsigned char                                      UnknownData00[0x5AFD2280];                                // 0x0000(0x5AFD2280) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInputActionKey
// 0x5AFD3E80
struct FKSInputActionKey
{
	unsigned char                                      UnknownData00[0x5AFD3E80];                                // 0x0000(0x5AFD3E80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCustomInputAxisKey
// 0x5AFD3C00
struct FKSCustomInputAxisKey
{
	unsigned char                                      UnknownData00[0x5AFD3C00];                                // 0x0000(0x5AFD3C00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCustomInputActionKey
// 0x5AFD3A80
struct FKSCustomInputActionKey
{
	unsigned char                                      UnknownData00[0x5AFD3A80];                                // 0x0000(0x5AFD3A80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInputActionTiedNames
// 0x5AFD3900
struct FKSInputActionTiedNames
{
	unsigned char                                      UnknownData00[0x5AFD3900];                                // 0x0000(0x5AFD3900) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInputActionNameTypePair
// 0x5AFD3800
struct FKSInputActionNameTypePair
{
	unsigned char                                      UnknownData00[0x5AFD3800];                                // 0x0000(0x5AFD3800) MISSED OFFSET
};

// ScriptStruct Killstreak.ShopManifest
// 0x151580 (0x5AF5EE80 - 0x5AE0D900)
struct FShopManifest : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x151580];                                  // 0x5AE0D900(0x151580) MISSED OFFSET
};

// ScriptStruct Killstreak.KSScoreChangeList
// 0x5AF5EDE0
struct FKSScoreChangeList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData00[0x5AF5EDE0];                                // 0x0000(0x5AF5EDE0) MISSED OFFSET
};

// ScriptStruct Killstreak.KSScoreChangeItem
// 0x5AFD3600
struct FKSScoreChangeItem : public FReplicatedLogItem
{
	unsigned char                                      UnknownData00[0x5AFD3600];                                // 0x0000(0x5AFD3600) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCashChangeList
// 0xFFFFFFFFA50A1220 (0x0000 - 0x5AF5EDE0)
struct FKSCashChangeList : public FKSScoreChangeList
{

};

// ScriptStruct Killstreak.LaggedProjectileHit
// 0x5AFD3400
struct FLaggedProjectileHit
{
	unsigned char                                      UnknownData00[0x5AFD3400];                                // 0x0000(0x5AFD3400) MISSED OFFSET
};

// ScriptStruct Killstreak.ProjectileWidgetInfo
// 0x0000
struct FProjectileWidgetInfo
{

};

// ScriptStruct Killstreak.KSSpreadList
// 0x1513A0 (0x5AF5ECA0 - 0x5AE0D900)
struct FKSSpreadList : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x1513A0];                                  // 0x5AE0D900(0x1513A0) MISSED OFFSET
};

// ScriptStruct Killstreak.KSSpreadEntry
// 0x6AB200 (0x5AFD3280 - 0x5A928080)
struct FKSSpreadEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x6AB200];                                  // 0x5A928080(0x6AB200) MISSED OFFSET
};

// ScriptStruct Killstreak.KSSpreadTransform
// 0x5AFD5080
struct FKSSpreadTransform
{
	unsigned char                                      UnknownData00[0x5AFD5080];                                // 0x0000(0x5AFD5080) MISSED OFFSET
};

// ScriptStruct Killstreak.KSProjectileClusterSegment
// 0x5AF5EC00
struct FKSProjectileClusterSegment
{
	unsigned char                                      UnknownData00[0x5AF5EC00];                                // 0x0000(0x5AF5EC00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSProximityFilter
// 0x5AF5EB60
struct FKSProximityFilter
{
	unsigned char                                      UnknownData00[0x5AF5EB60];                                // 0x0000(0x5AF5EB60) MISSED OFFSET
};

// ScriptStruct Killstreak.EndMatchPunishConfigEntry
// 0x5AFD4A80
struct FEndMatchPunishConfigEntry
{
	unsigned char                                      UnknownData00[0x5AFD4A80];                                // 0x0000(0x5AFD4A80) MISSED OFFSET
};

// ScriptStruct Killstreak.PunishmentConfigEntry
// 0x5AFD4B80
struct FPunishmentConfigEntry
{
	unsigned char                                      UnknownData00[0x5AFD4B80];                                // 0x0000(0x5AFD4B80) MISSED OFFSET
};

// ScriptStruct Killstreak.BadBehaviorConfigEntry
// 0x5AF5E8E0
struct FBadBehaviorConfigEntry
{
	unsigned char                                      UnknownData00[0x5AF5E8E0];                                // 0x0000(0x5AF5E8E0) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerPunishmentTracker
// 0x0000
struct FPlayerPunishmentTracker
{

};

// ScriptStruct Killstreak.BadBehaviorTracker
// 0x0000
struct FBadBehaviorTracker
{

};

// ScriptStruct Killstreak.KSRankedProgressionRow
// 0x5AFD4400
struct FKSRankedProgressionRow
{
	unsigned char                                      UnknownData00[0x5AFD4400];                                // 0x0000(0x5AFD4400) MISSED OFFSET
};

// ScriptStruct Killstreak.KSQueueGroupRow
// 0x5AFD4300
struct FKSQueueGroupRow
{
	unsigned char                                      UnknownData00[0x5AFD4300];                                // 0x0000(0x5AFD4300) MISSED OFFSET
};

// ScriptStruct Killstreak.KSBonusProgressionRow
// 0x5AFD6280
struct FKSBonusProgressionRow
{
	unsigned char                                      UnknownData00[0x5AFD6280];                                // 0x0000(0x5AFD6280) MISSED OFFSET
};

// ScriptStruct Killstreak.KSMapRow
// 0x5AFD6080
struct FKSMapRow
{
	unsigned char                                      UnknownData00[0x5AFD6080];                                // 0x0000(0x5AFD6080) MISSED OFFSET
};

// ScriptStruct Killstreak.KSMapListRow
// 0x5AFD5F80
struct FKSMapListRow
{
	unsigned char                                      UnknownData00[0x5AFD5F80];                                // 0x0000(0x5AFD5F80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSQueueRow
// 0x5AFD5780
struct FKSQueueRow
{
	unsigned char                                      UnknownData00[0x5AFD5780];                                // 0x0000(0x5AFD5780) MISSED OFFSET
};

// ScriptStruct Killstreak.KSRadialMenuItemInterruptRules
// 0x5AFD7180
struct FKSRadialMenuItemInterruptRules
{
	unsigned char                                      UnknownData00[0x5AFD7180];                                // 0x0000(0x5AFD7180) MISSED OFFSET
};

// ScriptStruct Killstreak.RecoilProfile2
// 0x5AFD6A80
struct FRecoilProfile2
{
	unsigned char                                      UnknownData00[0x5AFD6A80];                                // 0x0000(0x5AFD6A80) MISSED OFFSET
};

// ScriptStruct Killstreak.RecoilInfo2
// 0x5AFD6C00
struct FRecoilInfo2
{
	unsigned char                                      UnknownData00[0x5AFD6C00];                                // 0x0000(0x5AFD6C00) MISSED OFFSET
};

// ScriptStruct Killstreak.RecoilParams2
// 0x0000
struct FRecoilParams2
{

};

// ScriptStruct Killstreak.PlayerDamageInfo
// 0x5AFD6880
struct FPlayerDamageInfo
{
	unsigned char                                      UnknownData00[0x5AFD6880];                                // 0x0000(0x5AFD6880) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerRewardsSummaryReplicated
// 0x5AF5E3E0
struct FPlayerRewardsSummaryReplicated
{
	unsigned char                                      UnknownData00[0x5AF5E3E0];                                // 0x0000(0x5AF5E3E0) MISSED OFFSET
};

// ScriptStruct Killstreak.SafeZoneParams
// 0x5AFD6600
struct FSafeZoneParams
{
	unsigned char                                      UnknownData00[0x5AFD6600];                                // 0x0000(0x5AFD6600) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerShopTransaction
// 0x5AF5FF60
struct FPlayerShopTransaction
{
	unsigned char                                      UnknownData00[0x5AF5FF60];                                // 0x0000(0x5AF5FF60) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPlayerEventRecord
// 0x5AFD8380
struct FKSPlayerEventRecord
{
	unsigned char                                      UnknownData00[0x5AFD8380];                                // 0x0000(0x5AFD8380) MISSED OFFSET
};

// ScriptStruct Killstreak.KSSpawnSelectorTier
// 0x5AFD8100
struct FKSSpawnSelectorTier
{
	unsigned char                                      UnknownData00[0x5AFD8100];                                // 0x0000(0x5AFD8100) MISSED OFFSET
};

// ScriptStruct Killstreak.KSSpawnSelectorTierRule
// 0x5AF5FE20
struct FKSSpawnSelectorTierRule
{
	unsigned char                                      UnknownData00[0x5AF5FE20];                                // 0x0000(0x5AF5FE20) MISSED OFFSET
};

// ScriptStruct Killstreak.EquipPointDefinition
// 0x5AFD7F00
struct FEquipPointDefinition
{
	unsigned char                                      UnknownData00[0x5AFD7F00];                                // 0x0000(0x5AFD7F00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSTargeterConfig
// 0x5AFD7D00
struct FKSTargeterConfig
{
	unsigned char                                      UnknownData00[0x5AFD7D00];                                // 0x0000(0x5AFD7D00) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerTeamTracker
// 0x5AFD7B80
struct FPlayerTeamTracker
{
	unsigned char                                      UnknownData00[0x5AFD7B80];                                // 0x0000(0x5AFD7B80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSTimerState
// 0x5AFD7A80
struct FKSTimerState
{
	unsigned char                                      UnknownData00[0x5AFD7A80];                                // 0x0000(0x5AFD7A80) MISSED OFFSET
};

// ScriptStruct Killstreak.KSSettingsState
// 0x5AFD7880
struct FKSSettingsState
{
	unsigned char                                      UnknownData00[0x5AFD7880];                                // 0x0000(0x5AFD7880) MISSED OFFSET
};

// ScriptStruct Killstreak.SettingConfigPair
// 0x5AFD7780
struct FSettingConfigPair
{
	unsigned char                                      UnknownData00[0x5AFD7780];                                // 0x0000(0x5AFD7780) MISSED OFFSET
};

// ScriptStruct Killstreak.KSActionRestrictor
// 0x5AFD7500
struct FKSActionRestrictor
{
	unsigned char                                      UnknownData00[0x5AFD7500];                                // 0x0000(0x5AFD7500) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCSVRow
// 0x5AF5FCE0
struct FKSCSVRow
{
	unsigned char                                      UnknownData00[0x5AF5FCE0];                                // 0x0000(0x5AF5FCE0) MISSED OFFSET
};

// ScriptStruct Killstreak.ContextualPingMessagesRow
// 0x5AF5FC40
struct FContextualPingMessagesRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AF5FC40];                                // 0x0000(0x5AF5FC40) MISSED OFFSET
};

// ScriptStruct Killstreak.ContextualPingTypesRow
// 0x5AF5FBA0
struct FContextualPingTypesRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AF5FBA0];                                // 0x0000(0x5AF5FBA0) MISSED OFFSET
};

// ScriptStruct Killstreak.KSParticleSystemAttachment
// 0x5AFD9100
struct FKSParticleSystemAttachment
{
	unsigned char                                      UnknownData00[0x5AFD9100];                                // 0x0000(0x5AFD9100) MISSED OFFSET
};

// ScriptStruct Killstreak.KSSpecialEffect
// 0x5AFD8A00
struct FKSSpecialEffect
{
	unsigned char                                      UnknownData00[0x5AFD8A00];                                // 0x0000(0x5AFD8A00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPostProcessColorCurve
// 0x5AFD8F00
struct FKSPostProcessColorCurve
{
	unsigned char                                      UnknownData00[0x5AFD8F00];                                // 0x0000(0x5AFD8F00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPostProcessFloatCurve
// 0x5AFD8D80
struct FKSPostProcessFloatCurve
{
	unsigned char                                      UnknownData00[0x5AFD8D80];                                // 0x0000(0x5AFD8D80) MISSED OFFSET
};

// ScriptStruct Killstreak.ScreenLogData
// 0x5AF5F920
struct FScreenLogData
{
	unsigned char                                      UnknownData00[0x5AF5F920];                                // 0x0000(0x5AF5F920) MISSED OFFSET
};

// ScriptStruct Killstreak.KSRespawnConfig
// 0x5AF5F880
struct FKSRespawnConfig
{
	unsigned char                                      UnknownData00[0x5AF5F880];                                // 0x0000(0x5AF5F880) MISSED OFFSET
};

// ScriptStruct Killstreak.KSOutlineParameters
// 0x5AF5F7E0
struct FKSOutlineParameters
{
	unsigned char                                      UnknownData00[0x5AF5F7E0];                                // 0x0000(0x5AF5F7E0) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInitialLoadout
// 0x5AFE1460
struct FKSInitialLoadout
{
	unsigned char                                      UnknownData00[0x5AFE1460];                                // 0x0000(0x5AFE1460) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInitialInventoryItem
// 0x5AFD9F00
struct FKSInitialInventoryItem
{
	unsigned char                                      UnknownData00[0x5AFD9F00];                                // 0x0000(0x5AFD9F00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInitialInventoryTableEntry
// 0x5AFD9D80
struct FKSInitialInventoryTableEntry
{
	unsigned char                                      UnknownData00[0x5AFD9D80];                                // 0x0000(0x5AFD9D80) MISSED OFFSET
};

// ScriptStruct Killstreak.ReplicatedViewInfo
// 0x5AFD9C80
struct FReplicatedViewInfo
{
	unsigned char                                      UnknownData00[0x5AFD9C80];                                // 0x0000(0x5AFD9C80) MISSED OFFSET
};

// ScriptStruct Killstreak.ObjectiveState
// 0x5AFD9B00
struct FObjectiveState
{
	unsigned char                                      UnknownData00[0x5AFD9B00];                                // 0x0000(0x5AFD9B00) MISSED OFFSET
};

// ScriptStruct Killstreak.SkeletalMeshMaterialToReductionGroup
// 0x5AFD9A00
struct FSkeletalMeshMaterialToReductionGroup
{
	unsigned char                                      UnknownData00[0x5AFD9A00];                                // 0x0000(0x5AFD9A00) MISSED OFFSET
};

// ScriptStruct Killstreak.KSRiderSeatPair
// 0x5AFD9900
struct FKSRiderSeatPair
{
	unsigned char                                      UnknownData00[0x5AFD9900];                                // 0x0000(0x5AFD9900) MISSED OFFSET
};

// ScriptStruct Killstreak.KSVehicleDestructionStage
// 0x5AFD9680
struct FKSVehicleDestructionStage
{
	unsigned char                                      UnknownData00[0x5AFD9680];                                // 0x0000(0x5AFD9680) MISSED OFFSET
};

// ScriptStruct Killstreak.ViewModelInfo
// 0x5AFD9580
struct FViewModelInfo
{
	unsigned char                                      UnknownData00[0x5AFD9580];                                // 0x0000(0x5AFD9580) MISSED OFFSET
};

// ScriptStruct Killstreak.AttachmentInfo
// 0x5AFDB580
struct FAttachmentInfo
{
	unsigned char                                      UnknownData00[0x5AFDB580];                                // 0x0000(0x5AFDB580) MISSED OFFSET
};

// ScriptStruct Killstreak.WaveBotTableRow
// 0x7E500 (0x5AFDB300 - 0x5AF5CE00)
struct FWaveBotTableRow : public FBotSpawnTableRow
{
	unsigned char                                      UnknownData00[0x7E500];                                   // 0x5AF5CE00(0x7E500) MISSED OFFSET
};

// ScriptStruct Killstreak.KSWayPointLink
// 0x5AFE10A0
struct FKSWayPointLink
{
	unsigned char                                      UnknownData00[0x5AFE10A0];                                // 0x0000(0x5AFE10A0) MISSED OFFSET
};

// ScriptStruct Killstreak.AuxiliaryWeaponInfo
// 0x5AFDB100
struct FAuxiliaryWeaponInfo
{
	unsigned char                                      UnknownData00[0x5AFDB100];                                // 0x0000(0x5AFDB100) MISSED OFFSET
};

// ScriptStruct Killstreak.HitValidationRecoveryInfo
// 0x5AFE1000
struct FHitValidationRecoveryInfo
{
	unsigned char                                      UnknownData00[0x5AFE1000];                                // 0x0000(0x5AFE1000) MISSED OFFSET
};

// ScriptStruct Killstreak.WeaponLeadingInfo
// 0x5AFDAE00
struct FWeaponLeadingInfo
{
	unsigned char                                      UnknownData00[0x5AFDAE00];                                // 0x0000(0x5AFDAE00) MISSED OFFSET
};

// ScriptStruct Killstreak.ADSBlurValues
// 0x5AFDA800
struct FADSBlurValues
{
	unsigned char                                      UnknownData00[0x5AFDA800];                                // 0x0000(0x5AFDA800) MISSED OFFSET
};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainer
// 0x1D3660 (0x5AFE0F60 - 0x5AE0D900)
struct FKSWeaponDropAttachmentContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x1D3660];                                  // 0x5AE0D900(0x1D3660) MISSED OFFSET
};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainerEntry
// 0x6B2580 (0x5AFDA600 - 0x5A928080)
struct FKSWeaponDropAttachmentContainerEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x6B2580];                                  // 0x5A928080(0x6B2580) MISSED OFFSET
};

// ScriptStruct Killstreak.LoadedWeaponAttachmentAnimationData
// 0x5AFDBD00
struct FLoadedWeaponAttachmentAnimationData
{
	unsigned char                                      UnknownData00[0x5AFDBD00];                                // 0x0000(0x5AFDBD00) MISSED OFFSET
};

// ScriptStruct Killstreak.WeaponAttachmentAnimationData
// 0x5AFDD300
struct FWeaponAttachmentAnimationData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFDD300];                                // 0x0000(0x5AFDD300) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAssetOverrideTable_TableRow
// 0x5AFDD100
struct FKSAssetOverrideTable_TableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFDD100];                                // 0x0000(0x5AFDD100) MISSED OFFSET
};

// ScriptStruct Killstreak.PrefireSkipWindow
// 0x5AFDCF00
struct FPrefireSkipWindow
{
	unsigned char                                      UnknownData00[0x5AFDCF00];                                // 0x0000(0x5AFDCF00) MISSED OFFSET
};

// ScriptStruct Killstreak.BundledAmmoInfo
// 0x5AFE0C40
struct FBundledAmmoInfo
{
	unsigned char                                      UnknownData00[0x5AFE0C40];                                // 0x0000(0x5AFE0C40) MISSED OFFSET
};

// ScriptStruct Killstreak.KSEquipRepInfo
// 0x5AFDCC00
struct FKSEquipRepInfo
{
	unsigned char                                      UnknownData00[0x5AFDCC00];                                // 0x0000(0x5AFDCC00) MISSED OFFSET
};

// ScriptStruct Killstreak.InventoryRestoreInfo
// 0x5AFDCB00
struct FInventoryRestoreInfo
{
	unsigned char                                      UnknownData00[0x5AFDCB00];                                // 0x0000(0x5AFDCB00) MISSED OFFSET
};

// ScriptStruct Killstreak.WeaponStateGraph
// 0x0000
struct FWeaponStateGraph
{

};

// ScriptStruct Killstreak.WeaponGraphEdge
// 0x5AFE0B00
struct FWeaponGraphEdge
{
	unsigned char                                      UnknownData00[0x5AFE0B00];                                // 0x0000(0x5AFE0B00) MISSED OFFSET
};

// ScriptStruct Killstreak.FullFireRepData
// 0x5AFDC700
struct FFullFireRepData
{
	unsigned char                                      UnknownData00[0x5AFDC700];                                // 0x0000(0x5AFDC700) MISSED OFFSET
};

// ScriptStruct Killstreak.AncillaryWeaponMeshInfo
// 0x5AFDE680
struct FAncillaryWeaponMeshInfo
{
	unsigned char                                      UnknownData00[0x5AFDE680];                                // 0x0000(0x5AFDE680) MISSED OFFSET
};

// ScriptStruct Killstreak.HitDecalInfo
// 0x5AFDE380
struct FHitDecalInfo
{
	unsigned char                                      UnknownData00[0x5AFDE380];                                // 0x0000(0x5AFDE380) MISSED OFFSET
};

// ScriptStruct Killstreak.WeaponStateChangeRequest
// 0x5AFDE000
struct FWeaponStateChangeRequest
{
	unsigned char                                      UnknownData00[0x5AFDE000];                                // 0x0000(0x5AFDE000) MISSED OFFSET
};

// ScriptStruct Killstreak.TargetingModuleTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FTargetingModuleTickFunction : public FTickFunction
{

};

// ScriptStruct Killstreak.LoadingScreenImageInfo
// 0x5AFDDE00
struct FLoadingScreenImageInfo
{
	unsigned char                                      UnknownData00[0x5AFDDE00];                                // 0x0000(0x5AFDDE00) MISSED OFFSET
};

// ScriptStruct Killstreak.LobbyStaticPropInfo
// 0x5AFDDC00
struct FLobbyStaticPropInfo
{
	unsigned char                                      UnknownData00[0x5AFDDC00];                                // 0x0000(0x5AFDDC00) MISSED OFFSET
};

// ScriptStruct Killstreak.RevealManager
// 0x1D2EE0 (0x5AFE07E0 - 0x5AE0D900)
struct FRevealManager : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x1D2EE0];                                  // 0x5AE0D900(0x1D2EE0) MISSED OFFSET
};

// ScriptStruct Killstreak.RevealManagerEntry
// 0x6B5800 (0x5AFDD880 - 0x5A928080)
struct FRevealManagerEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x6B5800];                                  // 0x5A928080(0x6B5800) MISSED OFFSET
};

// ScriptStruct Killstreak.RevealInfo
// 0x5AFDD780
struct FRevealInfo
{
	unsigned char                                      UnknownData00[0x5AFDD780];                                // 0x0000(0x5AFDD780) MISSED OFFSET
};

// ScriptStruct Killstreak.TimelineSimulationHandler
// 0x5AFDF500
struct FTimelineSimulationHandler
{
	unsigned char                                      UnknownData00[0x5AFDF500];                                // 0x0000(0x5AFDF500) MISSED OFFSET
};

// ScriptStruct Killstreak.SoftDataTableInfo
// 0x5AFDF380
struct FSoftDataTableInfo
{
	unsigned char                                      UnknownData00[0x5AFDF380];                                // 0x0000(0x5AFDF380) MISSED OFFSET
};

// ScriptStruct Killstreak.ActiveThermalPPComponentInfo
// 0x5AFDF280
struct FActiveThermalPPComponentInfo
{
	unsigned char                                      UnknownData00[0x5AFDF280];                                // 0x0000(0x5AFDF280) MISSED OFFSET
};

// ScriptStruct Killstreak.TraceCommonEmpty
// 0x0000
struct FTraceCommonEmpty
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
