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

// BlueprintGeneratedClass KneeCrawlingNotify.KneeCrawlingNotify_C
// 0x5E973680
class UKneeCrawlingNotify_C : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5E973680];                                // 0x0000(0x5E973680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KneeCrawlingNotify.KneeCrawlingNotify_C");
		return ptr;
	}


	void Received_Notify();
	void GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
