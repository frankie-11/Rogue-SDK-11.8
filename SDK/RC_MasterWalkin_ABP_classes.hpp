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

// AnimBlueprintGeneratedClass MasterWalkin_ABP.MasterWalkin_ABP_C
// 0xFFFFFFFFCE434C00 (0x2BDA5400 - 0x5D970800)
class UMasterWalkin_ABP_C : public UKSCharacterAnimInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MasterWalkin_ABP.MasterWalkin_ABP_C");
		return ptr;
	}


	void AnimGraph();
	void Update_Skin_Dependent_Variables();
	void BlueprintUpdateAnimation();
	void Set_Skin_Parameters();
	void BlueprintInitializeAnimation();
	void AnimNotify_PhoneFlipShut();
	void AnimNotify_PhoneFlipOpen();
	void ExecuteUbergraph_MasterWalkin_ABP();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
