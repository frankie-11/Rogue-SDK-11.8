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

// BlueprintGeneratedClass ANotifyState_WeaponHide.ANotifyState_WeaponHide_C
// 0x5E973100
class UANotifyState_WeaponHide_C : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x5E973100];                                // 0x0000(0x5E973100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotifyState_WeaponHide.ANotifyState_WeaponHide_C");
		return ptr;
	}


	void Received_NotifyEnd();
	void Received_NotifyBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
