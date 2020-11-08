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

// BlueprintGeneratedClass WaypointBeacon.WaypointBeacon_C
// 0x5B7EB80 (0x635CC700 - 0x5DA4DB80)
class AWaypointBeacon_C : public AKSPingBeaconBase
{
public:
	unsigned char                                      UnknownData00[0x5B7EB80];                                 // 0x5DA4DB80(0x5B7EB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaypointBeacon.WaypointBeacon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupBeaconDisplay();
	void ExecuteUbergraph_WaypointBeacon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
