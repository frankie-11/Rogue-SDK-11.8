#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8_t
{
	SimpleAndComplex               = 0,
	Simple                         = 1,
	Complex                        = 2,
	EWheelSweepType_MAX            = 3
};


// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// 0xFFFFFFFFA5100A00 (0x0000 - 0x5AEFF600)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// 0x5AF8C200
struct FTireConfigMaterialFriction
{
	unsigned char                                      UnknownData00[0x5AF8C200];                                // 0x0000(0x5AF8C200) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// 0x0000
struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct PhysXVehicles.VehicleInputRate
// 0x5AF8C100
struct FVehicleInputRate
{
	unsigned char                                      UnknownData00[0x5AF8C100];                                // 0x0000(0x5AF8C100) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// 0x5AF8BE80
struct FReplicatedVehicleState
{
	unsigned char                                      UnknownData00[0x5AF8BE80];                                // 0x0000(0x5AF8BE80) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.WheelSetup
// 0x5AF55D80
struct FWheelSetup
{
	unsigned char                                      UnknownData00[0x5AF55D80];                                // 0x0000(0x5AF55D80) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// 0x5AF8B780
struct FVehicleTransmissionData
{
	unsigned char                                      UnknownData00[0x5AF8B780];                                // 0x0000(0x5AF8B780) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleGearData
// 0x5AF8B980
struct FVehicleGearData
{
	unsigned char                                      UnknownData00[0x5AF8B980];                                // 0x0000(0x5AF8B980) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleEngineData
// 0x5AF8D500
struct FVehicleEngineData
{
	unsigned char                                      UnknownData00[0x5AF8D500];                                // 0x0000(0x5AF8D500) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// 0x5AF8C980
struct FVehicleDifferential4WData
{
	unsigned char                                      UnknownData00[0x5AF8C980];                                // 0x0000(0x5AF8C980) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
