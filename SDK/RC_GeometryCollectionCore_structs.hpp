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

// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None = 0,
	EGeometryCollectionCacheType__Record = 1,
	EGeometryCollectionCacheType__Play = 2,
	EGeometryCollectionCacheType__RecordAndPlay = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
// 0x5AFE9840
struct FRecordedTransformTrack
{
	unsigned char                                      UnknownData00[0x5AFE9840];                                // 0x0000(0x5AFE9840) MISSED OFFSET
};

// ScriptStruct GeometryCollectionCore.RecordedFrame
// 0x5AFE93E0
struct FRecordedFrame
{
	unsigned char                                      UnknownData00[0x5AFE93E0];                                // 0x0000(0x5AFE93E0) MISSED OFFSET
};

// ScriptStruct GeometryCollectionCore.SolverTrailingData
// 0x5B02F900
struct FSolverTrailingData
{
	unsigned char                                      UnknownData00[0x5B02F900];                                // 0x0000(0x5B02F900) MISSED OFFSET
};

// ScriptStruct GeometryCollectionCore.SolverBreakingData
// 0x5B030E80
struct FSolverBreakingData
{
	unsigned char                                      UnknownData00[0x5B030E80];                                // 0x0000(0x5B030E80) MISSED OFFSET
};

// ScriptStruct GeometryCollectionCore.SolverCollisionData
// 0x5B030780
struct FSolverCollisionData
{
	unsigned char                                      UnknownData00[0x5B030780];                                // 0x0000(0x5B030780) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
