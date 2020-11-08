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

// BlueprintGeneratedClass HandCrawlingNotify.HandCrawlingNotify_C
// 0x65C15D80
class UHandCrawlingNotify_C : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x65C15D80];                                // 0x0000(0x65C15D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HandCrawlingNotify.HandCrawlingNotify_C");
		return ptr;
	}


	void Received_Notify();
	void GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
