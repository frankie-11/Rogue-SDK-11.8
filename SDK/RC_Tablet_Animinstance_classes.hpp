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

// AnimBlueprintGeneratedClass Tablet_Animinstance.Tablet_Animinstance_C
// 0xD717100 (0x6B1E2F80 - 0x5DACBE80)
class UTablet_Animinstance_C : public UKSTabletAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xD717100];                                 // 0x5DACBE80(0xD717100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Tablet_Animinstance.Tablet_Animinstance_C");
		return ptr;
	}


	void AnimGraph();
	void CheckFullyClosed();
	void CheckFullyOpened();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195();
	void AnimNotify_BecomeFullyOpened();
	void AnimNotify_EndFullyOpened();
	void AnimNotify_BecomeFullyClosed();
	void AnimNotify_EndFullyClosed();
	void ExecuteUbergraph_Tablet_Animinstance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
