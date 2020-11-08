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

// DynamicClass Master_GrenadeComponent.Master_GrenadeComponent_C
// 0xFFFFFFFFC4E37F00 (0x2B7ED880 - 0x669B5980)
class UMaster_GrenadeComponent_C : public UMaster_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Master_GrenadeComponent.Master_GrenadeComponent_C");
		return ptr;
	}


	void ShowGadget();
	void HideGadget();
	void Get_Scaled_Grenade_Fire_Playrate();
	void ExecuteUbergraph_Master_GrenadeComponent_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
