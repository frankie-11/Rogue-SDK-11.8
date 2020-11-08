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

// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor = 0,
	EActorSequenceObjectReferenceType__ExternalActor = 1,
	EActorSequenceObjectReferenceType__Component = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// 0x5AF5A2E0
struct FActorSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x5AF5A2E0];                                // 0x0000(0x5AF5A2E0) MISSED OFFSET
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// 0x5AF5A420
struct FActorSequenceObjectReferences
{
	unsigned char                                      UnknownData00[0x5AF5A420];                                // 0x0000(0x5AF5A420) MISSED OFFSET
};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// 0x5AF5A380
struct FActorSequenceObjectReference
{
	unsigned char                                      UnknownData00[0x5AF5A380];                                // 0x0000(0x5AF5A380) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
