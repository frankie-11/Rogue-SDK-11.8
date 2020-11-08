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

// BlueprintGeneratedClass ANotifyState_DropMagazine.ANotifyState_DropMagazine_C
// 0x65C14800
class UANotifyState_DropMagazine_C : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x65C14800];                                // 0x0000(0x65C14800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotifyState_DropMagazine.ANotifyState_DropMagazine_C");
		return ptr;
	}


	void Received_NotifyEnd();
	void Received_NotifyBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
