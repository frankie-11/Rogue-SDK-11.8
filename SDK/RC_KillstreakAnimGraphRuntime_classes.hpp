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

// Class KillstreakAnimGraphRuntime.RecoilProfileAsset
// 0x2B1D640 (0x5DBBAA80 - 0x5B09D440)
class URecoilProfileAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2B1D640];                                 // 0x5B09D440(0x2B1D640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakAnimGraphRuntime.RecoilProfileAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
