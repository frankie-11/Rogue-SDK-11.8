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

// Enum KillstreakAnimGraphRuntime.EPoseMirrorPlane
enum class EPoseMirrorPlane : uint8_t
{
	EPoseMirrorPlane__XZ           = 0,
	EPoseMirrorPlane__XY           = 1,
	EPoseMirrorPlane__YZ           = 2,
	EPoseMirrorPlane__EPoseMirrorPlane_MAX = 3
};


// Enum KillstreakAnimGraphRuntime.ERecoilAllowMirror
enum class ERecoilAllowMirror : uint8_t
{
	ERecoilAllowMirror__Both       = 0,
	ERecoilAllowMirror__UnmirroredOnly = 1,
	ERecoilAllowMirror__MirroredOnly = 2,
	ERecoilAllowMirror__ERecoilAllowMirror_MAX = 3
};


// Enum KillstreakAnimGraphRuntime.ERecoilStart
enum class ERecoilStart : uint8_t
{
	ERS_SpecifyOffset              = 0,
	ERS_Random                     = 1,
	ERS_SpecifyOffsetRandom        = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorConfig
// 0x5AFE1E60
struct FBoneMirrorConfig
{
	unsigned char                                      UnknownData00[0x5AFE1E60];                                // 0x0000(0x5AFE1E60) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorPair
// 0x5AFF3A80
struct FBoneMirrorPair
{
	unsigned char                                      UnknownData00[0x5AFF3A80];                                // 0x0000(0x5AFF3A80) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Mirror
// 0xF4200 (0x5AFF3800 - 0x5AEFF600)
struct FKSAnimNode_Mirror : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0xF4200];                                   // 0x5AEFF600(0xF4200) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_OrientationWarp
// 0xF3D00 (0x5AFF3300 - 0x5AEFF600)
struct FKSAnimNode_OrientationWarp : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0xF3D00];                                   // 0x5AEFF600(0xF3D00) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.AnimOrientationWarpDefinition
// 0x5AFF3400
struct FAnimOrientationWarpDefinition
{
	unsigned char                                      UnknownData00[0x5AFF3400];                                // 0x0000(0x5AFF3400) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Recoil
// 0xF4E00 (0x5AFF4400 - 0x5AEFF600)
struct FKSAnimNode_Recoil : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0xF4E00];                                   // 0x5AEFF600(0xF4E00) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilInfo
// 0x5AFF4600
struct FRecoilInfo
{
	unsigned char                                      UnknownData00[0x5AFF4600];                                // 0x0000(0x5AFF4600) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilParams
// 0x5AFF4980
struct FRecoilParams
{
	unsigned char                                      UnknownData00[0x5AFF4980];                                // 0x0000(0x5AFF4980) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_SpeedWarp
// 0xF6980 (0x5AFF5F80 - 0x5AEFF600)
struct FKSAnimNode_SpeedWarp : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0xF6980];                                   // 0x5AEFF600(0xF6980) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.AnimSpeedWarpDefinition
// 0x5AFF6080
struct FAnimSpeedWarpDefinition
{
	unsigned char                                      UnknownData00[0x5AFF6080];                                // 0x0000(0x5AFF6080) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilProfile
// 0x5AFF5B80
struct FRecoilProfile
{
	unsigned char                                      UnknownData00[0x5AFF5B80];                                // 0x0000(0x5AFF5B80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
