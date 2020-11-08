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

// Class CensorAssets.CensorTable
// 0x5B1ABF00
class UCensorTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1ABF00];                                // 0x0000(0x5B1ABF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CensorAssets.CensorTable");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
