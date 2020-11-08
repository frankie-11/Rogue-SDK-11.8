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

// BlueprintGeneratedClass ANotify_Ragdoll.ANotify_Ragdoll_C
// 0x0000
class UANotify_Ragdoll_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotify_Ragdoll.ANotify_Ragdoll_C");
		return ptr;
	}


	void Received_Notify();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
