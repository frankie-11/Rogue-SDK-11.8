#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NiagaraCore.NiagaraMergeable
// 0x0000
class UNiagaraMergeable : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NiagaraCore.NiagaraMergeable");
		return ptr;
	}

};


// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NiagaraCore.NiagaraDataInterfaceBase");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
