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

// BlueprintGeneratedClass BP_InWorld_Reticle.BP_InWorld_Reticle_C
// 0xAC81680 (0x65C1F680 - 0x5AF9E000)
class ABP_InWorld_Reticle_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0xAC81680];                                 // 0x5AF9E000(0xAC81680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InWorld_Reticle.BP_InWorld_Reticle_C");
		return ptr;
	}


	void SetWeaponComponent();
	void SetPossession();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_InWorld_Reticle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
