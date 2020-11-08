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

// BlueprintGeneratedClass KillCamController.KillCamController_C
// 0x8E1A200 (0x6683A300 - 0x5DA20100)
class AKillCamController_C : public AKSKillCamController
{
public:
	unsigned char                                      UnknownData00[0x8E1A200];                                 // 0x5DA20100(0x8E1A200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KillCamController.KillCamController_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_KillCamController();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
