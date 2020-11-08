#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_AimOffsetSkinned
// 0xFFFFFFFFFFFFFE00 (0x5AEFAB80 - 0x5AEFAD80)
struct FAnimNode_AimOffsetSkinned : public FAnimNode_RotationOffsetBlendSpace
{

};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BlendPoseNodeSkinned
// 0xFFFFFFFFFFFFFE00 (0x5AEFA780 - 0x5AEFA980)
struct FAnimNode_BlendPoseNodeSkinned : public FAnimNode_PoseBlendNode
{

};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BlendSpacePlayerSkinned
// 0x2080 (0x5AEFBD80 - 0x5AEF9D00)
struct FAnimNode_BlendSpacePlayerSkinned : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0x2080];                                    // 0x5AEF9D00(0x2080) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BSpaceEvalSkinned
// 0x1900 (0x5AEFD600 - 0x5AEFBD00)
struct FAnimNode_BSpaceEvalSkinned : public FAnimNode_BlendSpaceEvaluator
{
	unsigned char                                      UnknownData00[0x1900];                                    // 0x5AEFBD00(0x1900) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SeqEvalSkinned
// 0xFFFFFFFFFFFFF700 (0x5AEFCA00 - 0x5AEFD300)
struct FAnimNode_SeqEvalSkinned : public FAnimNode_SequenceEvaluator
{

};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SeqCurveEvalSkinned
// 0xFFFFFFFFFFFFFF80 (0x5AEFC980 - 0x5AEFCA00)
struct FAnimNode_SeqCurveEvalSkinned : public FAnimNode_SeqEvalSkinned
{

};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SequenceSkinned
// 0x3F00 (0x5AEFE080 - 0x5AEFA180)
struct FAnimNode_SequenceSkinned : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x3F00];                                    // 0x5AEFA180(0x3F00) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SequenceSkinnedCurvePlay
// 0xFFFFFFFFFFFFFF80 (0x5AEFE000 - 0x5AEFE080)
struct FAnimNode_SequenceSkinnedCurvePlay : public FAnimNode_SequenceSkinned
{

};

// ScriptStruct SkinnableAnimGraphRuntime.SkinnedAnimInstanceProxy
// 0x0000
struct FSkinnedAnimInstanceProxy : public FAnimInstanceProxy
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
