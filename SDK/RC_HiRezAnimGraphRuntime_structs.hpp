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

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByDedicatedServer
// 0x5AEFDE00
struct FAnimNode_BlendByDedicatedServer : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5AEFDE00];                                // 0x0000(0x5AEFDE00) MISSED OFFSET
};

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByLOD
// 0xFFFFFFFFFFFAB7E0 (0x5AEFDA00 - 0x5AF52220)
struct FAnimNode_BlendByLOD : public FAnimNode_BlendListBase
{

};

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_RigidBodySkipServer
// 0xFFFFFFFFFFFFFF80 (0x5AEFE980 - 0x5AEFEA00)
struct FAnimNode_RigidBodySkipServer : public FAnimNode_RigidBody
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
