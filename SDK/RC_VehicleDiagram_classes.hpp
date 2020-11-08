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

// BlueprintGeneratedClass VehicleDiagram.VehicleDiagram_C
// 0x0000
class UVehicleDiagram_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleDiagram.VehicleDiagram_C");
		return ptr;
	}


	void SetSeating();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
