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

// BlueprintGeneratedClass ANotifyState_DisableAims.ANotifyState_DisableAims_C
// 0x0000
class UANotifyState_DisableAims_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotifyState_DisableAims.ANotifyState_DisableAims_C");
		return ptr;
	}


	void Received_NotifyEnd();
	void Received_NotifyBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
