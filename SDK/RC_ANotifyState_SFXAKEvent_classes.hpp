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

// BlueprintGeneratedClass ANotifyState_SFXAKEvent.ANotifyState_SFXAKEvent_C
// 0x29BAFE00
class UANotifyState_SFXAKEvent_C : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x29BAFE00];                                // 0x0000(0x29BAFE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotifyState_SFXAKEvent.ANotifyState_SFXAKEvent_C");
		return ptr;
	}


	void Received_NotifyEnd();
	void Received_NotifyBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
