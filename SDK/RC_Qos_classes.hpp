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

// Class Qos.QosBeaconClient
// 0xFFFFFFFFA4EF2600 (0x0000 - 0x5B10DA00)
class AQosBeaconClient : public AOnlineBeaconClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconClient");
		return ptr;
	}


	void ServerQosRequest();
	void ClientQosResponse();
};


// Class Qos.QosBeaconHost
// 0xFFFFFFFFA4EF2800 (0x0000 - 0x5B10D800)
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconHost");
		return ptr;
	}

};


// Class Qos.QosEvaluator
// 0x5B14AF00
class UQosEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B14AF00];                                // 0x0000(0x5B14AF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosEvaluator");
		return ptr;
	}

};


// Class Qos.QosRegionManager
// 0x5B14A980
class UQosRegionManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B14A980];                                // 0x0000(0x5B14A980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosRegionManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
