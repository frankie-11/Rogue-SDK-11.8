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

// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// 0x65C18E80
class UAnimNotify_AkEvent_C : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x65C18E80];                                // 0x0000(0x65C18E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C");
		return ptr;
	}


	void Hirez_Get_Ak_Component();
	void Received_Notify();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
