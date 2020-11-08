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

// BlueprintGeneratedClass WaypointBeaconLarge.WaypointBeaconLarge_C
// 0x81CC800 (0x65C1A380 - 0x5DA4DB80)
class AWaypointBeaconLarge_C : public AKSPingBeaconBase
{
public:
	unsigned char                                      UnknownData00[0x81CC800];                                 // 0x5DA4DB80(0x81CC800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaypointBeaconLarge.WaypointBeaconLarge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupBeaconDisplay();
	void ExecuteUbergraph_WaypointBeaconLarge();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
