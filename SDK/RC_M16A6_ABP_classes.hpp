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

// AnimBlueprintGeneratedClass M16A6_ABP.M16A6_ABP_C
// 0x5AE1100 (0x635CF800 - 0x5DAEE700)
class UM16A6_ABP_C : public UKSWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x5AE1100];                                 // 0x5DAEE700(0x5AE1100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M16A6_ABP.M16A6_ABP_C");
		return ptr;
	}


	void AnimGraph();
	void ExecuteUbergraph_M16A6_ABP();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
