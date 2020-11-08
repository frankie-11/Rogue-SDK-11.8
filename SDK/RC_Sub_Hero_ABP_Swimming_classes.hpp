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

// DynamicClass Sub_Hero_ABP_Swimming.Sub_Hero_ABP_Swimming_C
// 0x66E3F880
class USub_Hero_ABP_Swimming_C : public UKSSwimmingAnimInst
{
public:
	unsigned char                                      UnknownData00[0x66E3F880];                                // 0x0000(0x66E3F880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Sub_Hero_ABP_Swimming.Sub_Hero_ABP_Swimming_C");
		return ptr;
	}


	void SwimNotifyTransitionStateLock();
	void SwimNotifyTransitionEnd();
	void LocomotionStop();
	void LocomotionStart();
	void LocomotionPivot();
	void EventStopSwimming();
	void EventStartSwimming();
	void EventDoGoDown();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_EDD270D34439CCC54F7076BF79F86501();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_E3E49F7F454B47E501D44EA073EE26EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_CE2D32B1481E672703161D88E16C4293();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C5D70A1F49036F86E187EE8C571CB2DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C49A16B641148CF5EAC0AF962C213E99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C3BF42E04C99D31FBCA4D3AFC7973064();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C383F92B49670B60382C5A9FC1940F6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C2D7D736421F594024F7C2AF55FCC2EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_BD5472394057FF2F92436AB44DC691B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_BA9EF61A495651544A5BA4AFFA755093();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_B223D50A4F3B4C41684F9E8177A8F7A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_AFB0DB7640628CC60CE90A88F7D7B406();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_9B29AAAF44C7BC37AE81E2A03FB98EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_938C84254015E9783201E49BF3DF9465();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_6365BFCC4C7591A5B093198C5CA9FF8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_5B8DBD004F9A9F51037D04B9CB4BB5D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_412E9E2342DC09D338E7689E4AE3F409();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_35CE07414E66C5731CDC05BDE1C3FF54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_2208B5994E350E2087383187EF43E431();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_131305F54923CBAAD2ECACAF3945B3DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_10CC17F94E9FC40609685BA8E8696FD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_0A8F60B345D2BCC08EA3789A0068E76B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_069CC5CC44770AEB005A73A9D24ABCB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_01DF78A64F399D3147CEBFB5A62CE2E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpaceSkinned_D851DFDC483F78D4EAA22B93237B96A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpaceSkinned_7A7AB61949D5571EC30570B52C4D42BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpaceSkinned_41A40DD044D9659BD6A16D80547254CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpacePlayer_C4FB8F814F606919DFCCC893012E97E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpacePlayer_853E42D84AFC62678C3DDC898DF2A596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpacePlayer_2C181114494B887D79B62E9850F50428();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendListByInt_DAF14B4B4B8333FABBF358A49999E8D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendListByInt_9E589FC04A148FF3686CC28EC92AE41E();
	void BlueprintUpdateAnimation();
	void BlueprintInitializeAnimation();
	void AnimNotify_UnLockTransitions();
	void AnimNotify_PivotTransitionEnd();
	void AnimGraph();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
