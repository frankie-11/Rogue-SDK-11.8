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

// DynamicClass ConfigurableThreatComponent.ConfigurableThreatComponent_C
// 0xFFFFFFFFA2531800 (0x0000 - 0x5DACE800)
class UConfigurableThreatComponent_C : public UKSThreatComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass ConfigurableThreatComponent.ConfigurableThreatComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
