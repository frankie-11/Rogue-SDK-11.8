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

// DynamicClass DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C
// 0x3C67FE0 (0x669B9580 - 0x62D515A0)
class UDualMLXMark4_WeaponComponent_C : public UHidden_WeaponComponent_C
{
public:
	unsigned char                                      UnknownData00[0x3C67FE0];                                 // 0x62D515A0(0x3C67FE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C");
		return ptr;
	}


	void Update_Heat();
	void Scale_Out();
	void Scale_In();
	void Play_Muzzle_Fire_On_Duplicate_Mesh();
	void ExecuteUbergraph_DualMLXMark4_WeaponComponent_8();
	void ExecuteUbergraph_DualMLXMark4_WeaponComponent_6();
	void ExecuteUbergraph_DualMLXMark4_WeaponComponent_4();
	void Event_Activate();
	void Cool_Down();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
