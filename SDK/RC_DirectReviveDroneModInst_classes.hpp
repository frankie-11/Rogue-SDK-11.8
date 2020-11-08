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

// BlueprintGeneratedClass DirectReviveDroneModInst.DirectReviveDroneModInst_C
// 0xFFFFFFFFCC165A00 (0x29BAA580 - 0x5DA44B80)
class UDirectReviveDroneModInst_C : public UKSModInst_ReviveDrone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DirectReviveDroneModInst.DirectReviveDroneModInst_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnActivation();
	void OnReviveDroneEvent();
	void ExecuteUbergraph_DirectReviveDroneModInst();
	void OnReviveComplete__DelegateSignature();
	void OnReviveBegin__DelegateSignature();
	void OnDroneDestroy__DelegateSignature();
	void OnTargetRevive__DelegateSignature();
	void OnTargetDeath__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
