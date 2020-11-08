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

// DynamicClass Sub_Hero_ABP_PowerSlide.Sub_Hero_ABP_PowerSlide_C
// 0x94C8880 (0x66E39080 - 0x5D970800)
class USub_Hero_ABP_PowerSlide_C : public UKSCharacterAnimInst
{
public:
	unsigned char                                      UnknownData00[0x94C8880];                                 // 0x5D970800(0x94C8880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Sub_Hero_ABP_PowerSlide.Sub_Hero_ABP_PowerSlide_C");
		return ptr;
	}


	void EventEndPowerSlide();
	void EventDoPowerSlide();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_F2002302482AD25E4145C8A35E6E52A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_9C1158CA49F8D953A3CC959E565A0B4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_6340AB694822FD8029F618AABD307E22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_3EFDE50344F37F1823FB6183AB26579A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_0C51BCE94007B9A9160D67BE7D5836DC();
	void BlueprintInitializeAnimation();
	void AnimGraph();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
