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

// BlueprintGeneratedClass ANotifyState_DisablesHandIK.ANotifyState_DisablesHandIK_C
// 0x669B4F80
class UANotifyState_DisablesHandIK_C : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x669B4F80];                                // 0x0000(0x669B4F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotifyState_DisablesHandIK.ANotifyState_DisablesHandIK_C");
		return ptr;
	}


	void Received_NotifyEnd();
	void Received_NotifyBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
