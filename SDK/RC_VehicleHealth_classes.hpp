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

// WidgetBlueprintGeneratedClass VehicleHealth.VehicleHealth_C
// 0xFFFFFFFFC6E07E00 (0x219FC780 - 0x5ABF4980)
class UVehicleHealth_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VehicleHealth.VehicleHealth_C");
		return ptr;
	}


	void Set_Target_Value();
	void Set_Value();
	void Tick();
	void ExecuteUbergraph_VehicleHealth();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
