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

// Enum Qos.EQosResponseType
enum class EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse   = 0,
	EQosResponseType__Success      = 1,
	EQosResponseType__Failure      = 2,
	EQosResponseType__EQosResponseType_MAX = 3
};


// Enum Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid  = 0,
	EQosCompletionResult__Success  = 1,
	EQosCompletionResult__Failure  = 2,
	EQosCompletionResult__Canceled = 3,
	EQosCompletionResult__EQosCompletionResult_MAX = 4
};


// Enum Qos.EQosDatacenterResult
enum class EQosDatacenterResult : uint8_t
{
	EQosDatacenterResult__Invalid  = 0,
	EQosDatacenterResult__Success  = 1,
	EQosDatacenterResult__Incomplete = 2,
	EQosDatacenterResult__EQosDatacenterResult_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Qos.RegionQosInstance
// 0x5AE0F900
struct FRegionQosInstance
{
	unsigned char                                      UnknownData00[0x5AE0F900];                                // 0x0000(0x5AE0F900) MISSED OFFSET
};

// ScriptStruct Qos.DatacenterQosInstance
// 0x5AE0FC80
struct FDatacenterQosInstance
{
	unsigned char                                      UnknownData00[0x5AE0FC80];                                // 0x0000(0x5AE0FC80) MISSED OFFSET
};

// ScriptStruct Qos.QosDatacenterInfo
// 0x5AE0F980
struct FQosDatacenterInfo
{
	unsigned char                                      UnknownData00[0x5AE0F980];                                // 0x0000(0x5AE0F980) MISSED OFFSET
};

// ScriptStruct Qos.QosPingServerInfo
// 0x5AE0FB00
struct FQosPingServerInfo
{
	unsigned char                                      UnknownData00[0x5AE0FB00];                                // 0x0000(0x5AE0FB00) MISSED OFFSET
};

// ScriptStruct Qos.QosRegionInfo
// 0x5AEF0F80
struct FQosRegionInfo
{
	unsigned char                                      UnknownData00[0x5AEF0F80];                                // 0x0000(0x5AEF0F80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
