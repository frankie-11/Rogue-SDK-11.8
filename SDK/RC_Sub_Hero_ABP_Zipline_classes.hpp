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

// DynamicClass Sub_Hero_ABP_Zipline.Sub_Hero_ABP_Zipline_C
// 0xD870E00 (0x6B1E1600 - 0x5D970800)
class USub_Hero_ABP_Zipline_C : public UKSCharacterAnimInst
{
public:
	unsigned char                                      UnknownData00[0xD870E00];                                 // 0x5D970800(0xD870E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Sub_Hero_ABP_Zipline.Sub_Hero_ABP_Zipline_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TwoWayBlend_DDE3AA1946C4264B5A59E0B1BADCBADC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TwoWayBlend_242462904500E0B6D930E19E4DB0C6D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_D9C5B0034C9C28AA4A0434BA01E27E73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_1E1D89A741DF2E43F644BCA5EE070A99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_09A602084B5A102876EB09BB3031974C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_BlendSpaceSkinned_5F46B98C4B1D30DBFEFD828DAC1F7AFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_BlendSpacePlayer_BB5718EA470B95B8C71CAEAD9061FD51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_AimOffsetSkinned_D6326F614B64DD28D034169EC440A648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_AimOffsetSkinned_A46F832B4EAD1C4FD29A9DB467609956();
	void BlueprintInitializeAnimation();
	void AnimGraph();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
