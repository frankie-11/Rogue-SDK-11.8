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

// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class EFNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log = 0,
	FNiagaraCompileEventSeverity__Warning = 1,
	FNiagaraCompileEventSeverity__Error = 2,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// 0x5AF87F00
struct FNiagaraDataInterfaceGPUParamInfo
{
	unsigned char                                      UnknownData00[0x5AF87F00];                                // 0x0000(0x5AF87F00) MISSED OFFSET
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// 0x0000
struct FNiagaraDataInterfaceGeneratedFunction
{

};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// 0x5AF55F60
struct FNiagaraCompileEvent
{
	unsigned char                                      UnknownData00[0x5AF55F60];                                // 0x0000(0x5AF55F60) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
