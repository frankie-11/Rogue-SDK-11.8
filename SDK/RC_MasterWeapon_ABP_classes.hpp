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

// DynamicClass MasterWeapon_ABP.MasterWeapon_ABP_C
// 0x9345080 (0x66E33780 - 0x5DAEE700)
class UMasterWeapon_ABP_C : public UKSWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x9345080];                                 // 0x5DAEE700(0x9345080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MasterWeapon_ABP.MasterWeapon_ABP_C");
		return ptr;
	}


	void UpdateUnspentShellVisibility();
	void UpdateSpentShellVisibility();
	void Set_Weapon_State();
	void Set_Shield_Active();
	void Set_Scope_Scale_Alpha();
	void Set_Revolver_Chamber_Rot();
	void Set_Multi_Stage_Reload();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674();
	void AnimNotify_Unhide_Mag();
	void AnimNotify_Hide_Mag();
	void AnimGraph();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
