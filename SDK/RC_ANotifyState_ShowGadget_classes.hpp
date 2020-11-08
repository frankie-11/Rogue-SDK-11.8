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

// BlueprintGeneratedClass ANotifyState_ShowGadget.ANotifyState_ShowGadget_C
// 0x5E974580
class UANotifyState_ShowGadget_C : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x5E974580];                                // 0x0000(0x5E974580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotifyState_ShowGadget.ANotifyState_ShowGadget_C");
		return ptr;
	}


	void Received_NotifyEnd();
	void Received_NotifyBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
