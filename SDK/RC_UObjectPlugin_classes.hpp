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

// Class UObjectPlugin.MyPluginObject
// 0x5B200880
class UMyPluginObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B200880];                                // 0x0000(0x5B200880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UObjectPlugin.MyPluginObject");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
