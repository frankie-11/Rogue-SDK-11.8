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

// BlueprintGeneratedClass ANotifyState_MagazineHide.ANotifyState_MagazineHide_C
// 0x65C17F80
class UANotifyState_MagazineHide_C : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x65C17F80];                                // 0x0000(0x65C17F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotifyState_MagazineHide.ANotifyState_MagazineHide_C");
		return ptr;
	}


	void Received_NotifyEnd();
	void Received_NotifyBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
