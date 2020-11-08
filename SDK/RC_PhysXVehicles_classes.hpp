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

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x8CF500 (0x5B1FCC00 - 0x5A92D700)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8CF500];                                  // 0x5A92D700(0x8CF500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}


	void SetUseAutoGears();
	void SetThrottleInput();
	void SetTargetGear();
	void SetSteeringInput();
	void SetHandbrakeInput();
	void SetGroupsToIgnoreMask();
	void SetGroupsToIgnore();
	void SetGroupsToAvoidMask();
	void SetGroupsToAvoid();
	void SetGearUp();
	void SetGearDown();
	void SetBrakeInput();
	void SetAvoidanceGroupMask();
	void SetAvoidanceGroup();
	void SetAvoidanceEnabled();
	void ServerUpdateState();
	void GetUseAutoGears();
	void GetTargetGear();
	void GetForwardSpeed();
	void GetEngineRotationSpeed();
	void GetEngineMaxRotationSpeed();
	void GetCurrentGear();
};


// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0xFFFFFFFFA4E03400 (0x0000 - 0x5B1FCC00)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}


	void SetSteerAngle();
	void SetDriveTorque();
	void SetBrakeTorque();
};


// Class PhysXVehicles.TireConfig
// 0x15F3C0 (0x5B1FC800 - 0x5B09D440)
class UTireConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x15F3C0];                                  // 0x5B09D440(0x15F3C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}

};


// Class PhysXVehicles.VehicleAnimInstance
// 0x2D800 (0x5B1FC700 - 0x5B1CEF00)
class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x2D800];                                   // 0x5B1CEF00(0x2D800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}


	void GetVehicle();
};


// Class PhysXVehicles.VehicleWheel
// 0x5B1FF600
class UVehicleWheel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1FF600];                                // 0x0000(0x5B1FF600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}


	void IsInAir();
	void GetSuspensionOffset();
	void GetSteerAngle();
	void GetRotationAngle();
};


// Class PhysXVehicles.WheeledVehicle
// 0xCAE80 (0x5B1FF500 - 0x5B134680)
class AWheeledVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0xCAE80];                                   // 0x5B134680(0xCAE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}

};


// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x2680 (0x5B1FF280 - 0x5B1FCC00)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x2680];                                    // 0x5B1FCC00(0x2680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
