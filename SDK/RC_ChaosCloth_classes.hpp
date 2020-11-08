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

// Class ChaosCloth.ChaosClothConfig
// 0x5B19C360
class UChaosClothConfig : public UClothConfigCommon
{
public:
	unsigned char                                      UnknownData00[0x5B19C360];                                // 0x0000(0x5B19C360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosCloth.ChaosClothConfig");
		return ptr;
	}

};


// Class ChaosCloth.ChaosClothSharedSimConfig
// 0x5B20D480
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
public:
	unsigned char                                      UnknownData00[0x5B20D480];                                // 0x0000(0x5B20D480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosCloth.ChaosClothSharedSimConfig");
		return ptr;
	}

};


// Class ChaosCloth.ChaosClothingSimulationFactory
// 0x0000
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosCloth.ChaosClothingSimulationFactory");
		return ptr;
	}

};


// Class ChaosCloth.ChaosClothingSimulationInteractor
// 0x0000
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosCloth.ChaosClothingSimulationInteractor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
