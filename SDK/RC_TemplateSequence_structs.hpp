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

// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// 0x5AFA1180
struct FTemplateSequenceBindingOverrideData
{
	unsigned char                                      UnknownData00[0x5AFA1180];                                // 0x0000(0x5AFA1180) MISSED OFFSET
};

// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
// 0x4B9DF180
struct FTemplateSequenceInstanceData : public FMovieSceneSequenceInstanceData
{
	unsigned char                                      UnknownData00[0x4B9DF180];                                // 0x0000(0x4B9DF180) MISSED OFFSET
};

// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
// 0x52AC0 (0x5AFA2F80 - 0x5AF504C0)
struct FTemplateSequenceSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x52AC0];                                   // 0x5AF504C0(0x52AC0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
