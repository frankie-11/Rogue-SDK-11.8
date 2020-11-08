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

// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
	ETransformConstraintType__Translation = 0,
	ETransformConstraintType__Rotation = 1,
	ETransformConstraintType__Scale = 2,
	ETransformConstraintType__Parent = 3,
	ETransformConstraintType__ETransformConstraintType_MAX = 4
};


// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
	EConstraintType__Transform     = 0,
	EConstraintType__Aim           = 1,
	EConstraintType__MAX           = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationCore.CCDIKChainLink
// 0x0000
struct FCCDIKChainLink
{

};

// ScriptStruct AnimationCore.Axis
// 0x5B014380
struct FAxis
{
	unsigned char                                      UnknownData00[0x5B014380];                                // 0x0000(0x5B014380) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintData
// 0x5B016200
struct FConstraintData
{
	unsigned char                                      UnknownData00[0x5B016200];                                // 0x0000(0x5B016200) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x5AFE45C0
struct FConstraintDescriptor
{
	unsigned char                                      UnknownData00[0x5AFE45C0];                                // 0x0000(0x5AFE45C0) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x5B016100
struct FConstraintDescriptionEx
{
	unsigned char                                      UnknownData00[0x5B016100];                                // 0x0000(0x5B016100) MISSED OFFSET
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x5B015F80
struct FFilterOptionPerAxis
{
	unsigned char                                      UnknownData00[0x5B015F80];                                // 0x0000(0x5B015F80) MISSED OFFSET
};

// ScriptStruct AnimationCore.AimConstraintDescription
// 0xFFFFFFFFFFFFFC80 (0x5B015D80 - 0x5B016100)
struct FAimConstraintDescription : public FConstraintDescriptionEx
{

};

// ScriptStruct AnimationCore.TransformConstraintDescription
// 0xFFFFFFFFFFFCE420 (0x5AFE4520 - 0x5B016100)
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{

};

// ScriptStruct AnimationCore.TransformConstraint
// 0x5B015A80
struct FTransformConstraint
{
	unsigned char                                      UnknownData00[0x5B015A80];                                // 0x0000(0x5B015A80) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintDescription
// 0x5B015700
struct FConstraintDescription
{
	unsigned char                                      UnknownData00[0x5B015700];                                // 0x0000(0x5B015700) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintOffset
// 0x5B015500
struct FConstraintOffset
{
	unsigned char                                      UnknownData00[0x5B015500];                                // 0x0000(0x5B015500) MISSED OFFSET
};

// ScriptStruct AnimationCore.TransformFilter
// 0x5B015380
struct FTransformFilter
{
	unsigned char                                      UnknownData00[0x5B015380];                                // 0x0000(0x5B015380) MISSED OFFSET
};

// ScriptStruct AnimationCore.EulerTransform
// 0x5B017300
struct FEulerTransform
{
	unsigned char                                      UnknownData00[0x5B017300];                                // 0x0000(0x5B017300) MISSED OFFSET
};

// ScriptStruct AnimationCore.FABRIKChainLink
// 0x0000
struct FFABRIKChainLink
{

};

// ScriptStruct AnimationCore.NodeChain
// 0x5AFE4480
struct FNodeChain
{
	unsigned char                                      UnknownData00[0x5AFE4480];                                // 0x0000(0x5AFE4480) MISSED OFFSET
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x5B017180
struct FNodeHierarchyWithUserData
{
	unsigned char                                      UnknownData00[0x5B017180];                                // 0x0000(0x5B017180) MISSED OFFSET
};

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x5AFE4340
struct FNodeHierarchyData
{
	unsigned char                                      UnknownData00[0x5AFE4340];                                // 0x0000(0x5AFE4340) MISSED OFFSET
};

// ScriptStruct AnimationCore.NodeObject
// 0x5B016E80
struct FNodeObject
{
	unsigned char                                      UnknownData00[0x5B016E80];                                // 0x0000(0x5B016E80) MISSED OFFSET
};

// ScriptStruct AnimationCore.TransformNoScale
// 0x5B016D80
struct FTransformNoScale
{
	unsigned char                                      UnknownData00[0x5B016D80];                                // 0x0000(0x5B016D80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
