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

// Enum PlatformGameFramework.EGameLocalizationType
enum class EGameLocalizationType : uint8_t
{
	EGameLocalizationType__Unknown = 0,
	EGameLocalizationType__PC      = 1,
	EGameLocalizationType__XboxOne = 2,
	EGameLocalizationType__PS4_SIEA = 3,
	EGameLocalizationType__PS4_SIEE = 4,
	EGameLocalizationType__Switch  = 5,
	EGameLocalizationType__Mobile  = 6,
	EGameLocalizationType__EGameLocalizationType_MAX = 7
};


// Enum PlatformGameFramework.EGameBits
enum class EGameBits : uint8_t
{
	EGameBits__NoStoreUI           = 0,
	EGameBits__UseAltUI            = 1,
	EGameBits__UseAltQueueUI       = 2,
	EGameBits__UseSpectator        = 3,
	EGameBits__EGameBits_MAX       = 4
};


// Enum PlatformGameFramework.EPGame_CustomMovement
enum class EPGame_CustomMovement : uint8_t
{
	PLATMOVE_Tween                 = 0,
	PLATMOVE_Charge                = 1,
	PLATMOVE_MAX                   = 2
};


// Enum PlatformGameFramework.ECombatLogType
enum class ECombatLogType : uint8_t
{
	ECombatLogType__JSON           = 0,
	ECombatLogType__AWS            = 1,
	ECombatLogType__DEFAULT        = 2,
	ECombatLogType__ECombatLogType_MAX = 3
};


// Enum PlatformGameFramework.EEffectGroupApplicationRule
enum class EEffectGroupApplicationRule : uint8_t
{
	EEffectGroupApplicationRule__STACKABLE = 0,
	EEffectGroupApplicationRule__NEWEST = 1,
	EEffectGroupApplicationRule__STRONGEST = 2,
	EEffectGroupApplicationRule__REFRESH = 3,
	EEffectGroupApplicationRule__STACK_IN_PLACE = 4,
	EEffectGroupApplicationRule__STACK_IN_PLACE_INSTIGATOR = 5,
	EEffectGroupApplicationRule__STRONGEST_BEFORE_NEWEST = 6,
	EEffectGroupApplicationRule__EEffectGroupApplicationRule_MAX = 7
};


// Enum PlatformGameFramework.EPGame_EPropertyType
enum class EPGame_EPropertyType : uint8_t
{
	PROPTYPE_Modifier              = 0,
	PROPTYPE_Percent               = 1,
	PROPTYPE_Value                 = 2,
	PROPTYPE_Delta                 = 3,
	PROPTYPE_MAX                   = 4
};


// Enum PlatformGameFramework.PGAME_INPUT_STATE
enum class EPGAME_INPUT_STATE : uint8_t
{
	PIS_KEYMOUSE                   = 0,
	PIS_GAMEPAD                    = 1,
	PIS_TOUCH                      = 2,
	PIS_UNKNOWN                    = 3,
	PIS_MAX                        = 4
};


// Enum PlatformGameFramework.EPositionHistoryRecordMode
enum class EPositionHistoryRecordMode : uint8_t
{
	EPositionHistoryRecordMode__OnTick = 0,
	EPositionHistoryRecordMode__Manual = 1,
	EPositionHistoryRecordMode__EPositionHistoryRecordMode_MAX = 2
};


// Enum PlatformGameFramework.EPGame_ReplicateTimerState
enum class EPGame_ReplicateTimerState : uint8_t
{
	EPGame_ReplicateTimerState__Inactive = 0,
	EPGame_ReplicateTimerState__Active = 1,
	EPGame_ReplicateTimerState__Overtime = 2,
	EPGame_ReplicateTimerState__Unlimited = 3,
	EPGame_ReplicateTimerState__Paused = 4,
	EPGame_ReplicateTimerState__EPGame_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformGameFramework.SerializedMctsNetId
// 0x5A929980
struct FSerializedMctsNetId
{
	unsigned char                                      UnknownData00[0x5A929980];                                // 0x0000(0x5A929980) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_BlueprintableLightingChannels
// 0x5AE0E100
struct FPGame_BlueprintableLightingChannels
{
	unsigned char                                      UnknownData00[0x5AE0E100];                                // 0x0000(0x5AE0E100) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.ChargeInfo
// 0x5AE0DE80
struct FChargeInfo
{
	unsigned char                                      UnknownData00[0x5AE0DE80];                                // 0x0000(0x5AE0DE80) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.TweenInfo
// 0x5AE0DD00
struct FTweenInfo
{
	unsigned char                                      UnknownData00[0x5AE0DD00];                                // 0x0000(0x5AE0DD00) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_InstantEffectRepData
// 0x5AE0DA00
struct FPGame_InstantEffectRepData
{
	unsigned char                                      UnknownData00[0x5AE0DA00];                                // 0x0000(0x5AE0DA00) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepDataContainer
// 0xFFFFFFFFF5E32520 (0x50C3FE20 - 0x5AE0D900)
struct FPGame_PersistentEffectRepDataContainer : public FFastArraySerializer
{

};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepData
// 0x4E7500 (0x5AE0F580 - 0x5A928080)
struct FPGame_PersistentEffectRepData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4E7500];                                  // 0x5A928080(0x4E7500) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerPropertyContainer
// 0xFFFFFFFFF5E323E0 (0x50C3FCE0 - 0x5AE0D900)
struct FPGame_EffectManagerPropertyContainer : public FFastArraySerializer
{

};

// ScriptStruct PlatformGameFramework.PGame_Property
// 0x4E7100 (0x5AE0F180 - 0x5A928080)
struct FPGame_Property : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4E7100];                                  // 0x5A928080(0x4E7100) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PlatformPropertyId
// 0x5AE0F100
struct FPlatformPropertyId
{
	unsigned char                                      UnknownData00[0x5AE0F100];                                // 0x0000(0x5AE0F100) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerCurrentProperty
// 0x5AE0F000
struct FPGame_EffectManagerCurrentProperty
{
	unsigned char                                      UnknownData00[0x5AE0F000];                                // 0x0000(0x5AE0F000) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_InactivePlayerStateEntry
// 0x5AE0EF80
struct FPGame_InactivePlayerStateEntry
{
	unsigned char                                      UnknownData00[0x5AE0EF80];                                // 0x0000(0x5AE0EF80) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_PlayerProfile
// 0x5AE0ED00
struct FPGame_PlayerProfile
{
	unsigned char                                      UnknownData00[0x5AE0ED00];                                // 0x0000(0x5AE0ED00) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_PerformanceCaptureProfile
// 0x5AE0EA00
struct FPGame_PerformanceCaptureProfile
{
	unsigned char                                      UnknownData00[0x5AE0EA00];                                // 0x0000(0x5AE0EA00) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.CollisionDebugInfo
// 0x0000
struct FCollisionDebugInfo
{

};

// ScriptStruct PlatformGameFramework.PrimitivePriority
// 0x5AE0E900
struct FPrimitivePriority
{
	unsigned char                                      UnknownData00[0x5AE0E900];                                // 0x0000(0x5AE0E900) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimer
// 0x50C3FC40
struct FPGame_ReplicatedTimer
{
	unsigned char                                      UnknownData00[0x50C3FC40];                                // 0x0000(0x50C3FC40) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
