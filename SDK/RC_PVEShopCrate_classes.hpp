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

// BlueprintGeneratedClass PVEShopCrate.PVEShopCrate_C
// 0xFFFFFFFFCE337200 (0x2BDA6A00 - 0x5DA6F800)
class APVEShopCrate_C : public AKSPlayerShopZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PVEShopCrate.PVEShopCrate_C");
		return ptr;
	}


	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature();
	void OnCharacterPossessed();
	void EnableShopZone();
	void DisableShopZone();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PVEShopCrate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
