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

// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// 0x5B2315A0
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B2315A0];                                // 0x0000(0x5B2315A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
