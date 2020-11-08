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

// BlueprintGeneratedClass VoicelineNotify.VoicelineNotify_C
// 0x29BAF580
class UVoicelineNotify_C : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x29BAF580];                                // 0x0000(0x29BAF580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VoicelineNotify.VoicelineNotify_C");
		return ptr;
	}


	void GetNotifyName();
	void Received_Notify();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
