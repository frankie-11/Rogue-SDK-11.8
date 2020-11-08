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

// WidgetBlueprintGeneratedClass VehicleSpeedometer.VehicleSpeedometer_C
// 0xFFFFFFFFC6E06580 (0x219FAF00 - 0x5ABF4980)
class UVehicleSpeedometer_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VehicleSpeedometer.VehicleSpeedometer_C");
		return ptr;
	}


	void SetTargetValue();
	void SetValue();
	void Tick();
	void ExecuteUbergraph_VehicleSpeedometer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
