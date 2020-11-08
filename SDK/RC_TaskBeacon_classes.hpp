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

// BlueprintGeneratedClass TaskBeacon.TaskBeacon_C
// 0xD799700 (0x6B1E7280 - 0x5DA4DB80)
class ATaskBeacon_C : public AKSPingBeaconBase
{
public:
	unsigned char                                      UnknownData00[0xD799700];                                 // 0x5DA4DB80(0xD799700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TaskBeacon.TaskBeacon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TaskBeacon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
