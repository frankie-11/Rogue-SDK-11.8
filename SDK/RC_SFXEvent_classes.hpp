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

// BlueprintGeneratedClass SFXEvent.SFXEvent_C
// 0x5E972300
class USFXEvent_C : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5E972300];                                // 0x0000(0x5E972300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SFXEvent.SFXEvent_C");
		return ptr;
	}


	void GetNotifyName();
	void Received_Notify();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
