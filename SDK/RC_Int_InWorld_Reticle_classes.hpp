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

// DynamicClass Int_InWorld_Reticle.Int_InWorld_Reticle_C
// 0x0000
class UInt_InWorld_Reticle_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Int_InWorld_Reticle.Int_InWorld_Reticle_C");
		return ptr;
	}


	void OnWeaponSet();
	void OnPossession();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
