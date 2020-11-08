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

// DynamicClass FootstepNotify.FootstepNotify_C
// 0x5F25AA60
class UFootstepNotify_C : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5F25AA60];                                // 0x0000(0x5F25AA60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass FootstepNotify.FootstepNotify_C");
		return ptr;
	}


	void Received_Notify();
	void GetSFXMaterial();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
