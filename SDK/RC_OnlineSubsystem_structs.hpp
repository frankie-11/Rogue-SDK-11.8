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

// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown   = 0,
	EInAppPurchaseState__Success   = 1,
	EInAppPurchaseState__Failed    = 2,
	EInAppPurchaseState__Cancelled = 3,
	EInAppPurchaseState__Invalid   = 4,
	EInAppPurchaseState__NotAllowed = 5,
	EInAppPurchaseState__Restored  = 6,
	EInAppPurchaseState__AlreadyOwned = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 8
};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x50BA3C00
struct FInAppPurchaseProductInfo
{
	unsigned char                                      UnknownData00[0x50BA3C00];                                // 0x0000(0x50BA3C00) MISSED OFFSET
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x50BA5080
struct FInAppPurchaseRestoreInfo
{
	unsigned char                                      UnknownData00[0x50BA5080];                                // 0x0000(0x50BA5080) MISSED OFFSET
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x5AE0D480
struct FNamedInterfaceDef
{
	unsigned char                                      UnknownData00[0x5AE0D480];                                // 0x0000(0x5AE0D480) MISSED OFFSET
};

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x5AE0D380
struct FNamedInterface
{
	unsigned char                                      UnknownData00[0x5AE0D380];                                // 0x0000(0x5AE0D380) MISSED OFFSET
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x5AE0D280
struct FInAppPurchaseProductRequest
{
	unsigned char                                      UnknownData00[0x5AE0D280];                                // 0x0000(0x5AE0D280) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
