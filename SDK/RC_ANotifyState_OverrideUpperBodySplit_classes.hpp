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

// BlueprintGeneratedClass ANotifyState_OverrideUpperBodySplit.ANotifyState_OverrideUpperBodySplit_C
// 0x2B7E0380
class UANotifyState_OverrideUpperBodySplit_C : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x2B7E0380];                                // 0x0000(0x2B7E0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotifyState_OverrideUpperBodySplit.ANotifyState_OverrideUpperBodySplit_C");
		return ptr;
	}


	void Received_NotifyEnd();
	void Received_NotifyBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
