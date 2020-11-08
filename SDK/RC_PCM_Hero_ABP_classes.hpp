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

// DynamicClass PCM_Hero_ABP.PCM_Hero_ABP_C
// 0x4B3F600 (0x624AFE00 - 0x5D970800)
class UPCM_Hero_ABP_C : public UKSCharacterAnimInst
{
public:
	unsigned char                                      UnknownData00[0x4B3F600];                                 // 0x5D970800(0x4B3F600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass PCM_Hero_ABP.PCM_Hero_ABP_C");
		return ptr;
	}


	void OnMagThrow__DelegateSignature();
	void ZipLineTurnReset();
	void Update_Eng_Head_Additive_Secondary_Active();
	void UpdateWeaponLimitedMovement();
	void UpdateSkinDependantVariables();
	void UpdateRagdollPelvis();
	void UpdateIKHandRuleset();
	void UpdateCustomPivot();
	void UnhideMag();
	void TurnInPlace();
	void TickHitReacts();
	void SwitchWeaponIK();
	void SwitchWeapon();
	void Stop_Turn_In_Place();
	void Start_Turn_In_Place();
	void StartRevivee();
	void Should_Update_Component_Rotation();
	void Should_Turn_In_Place_Be_Active();
	void ShoulderCharge();
	void Set_Turn_Value();
	void Set_Skinned_Local_Parameters();
	void Set_Footstep_SFX_Switches();
	void Set_Desired_Component_Yaw();
	void Set_Clothing_SFX_Switch();
	void Set_Aims();
	void Set_ADS_1p_Aims();
	void SetUpStopAnims();
	void SetUpStartAnims();
	void SetUpperBodyTurnInPlace();
	void SetTransitionAnims();
	void SetStopAnim();
	void SetStartMeleeLowerBodyAnim();
	void SetStartAnim();
	void SetPoseDrivenHitReactParams();
	void SetMovementDirection();
	void SetMaxSpeedValues_2();
	void SetHitReactParams();
	void ReviveMesh();
	void RequestNewCombatState();
	void RemoveExpiredHitReact();
	void On_Sprint_Changed();
	void OnShoulderChanged();
	void OnNotifyEnd_F55321C648B813A33A06BF926330EB4F();
	void OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1();
	void OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B();
	void OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B();
	void OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB();
	void OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE();
	void OnNotifyEnd_68DE575241BD5D31439A859E850392A2();
	void OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B();
	void OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3();
	void OnNotifyEnd_143632A9488E9A82D17492B8710C0540();
	void OnNotifyBegin_F55321C648B813A33A06BF926330EB4F();
	void OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1();
	void OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B();
	void OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B();
	void OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB();
	void OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE();
	void OnNotifyBegin_68DE575241BD5D31439A859E850392A2();
	void OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B();
	void OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3();
	void OnNotifyBegin_143632A9488E9A82D17492B8710C0540();
	void OnInterrupted_F55321C648B813A33A06BF926330EB4F();
	void OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1();
	void OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B();
	void OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B();
	void OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB();
	void OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE();
	void OnInterrupted_68DE575241BD5D31439A859E850392A2();
	void OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B();
	void OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3();
	void OnInterrupted_143632A9488E9A82D17492B8710C0540();
	void OnCompleted_F55321C648B813A33A06BF926330EB4F();
	void OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1();
	void OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B();
	void OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B();
	void OnCompleted_B5B16ACD4F176963194D6B8527E16FBB();
	void OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE();
	void OnCompleted_68DE575241BD5D31439A859E850392A2();
	void OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B();
	void OnCompleted_1BE19CEA4A7E760561F3419034A02FE3();
	void OnCompleted_143632A9488E9A82D17492B8710C0540();
	void OnBlendOut_F55321C648B813A33A06BF926330EB4F();
	void OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1();
	void OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B();
	void OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B();
	void OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB();
	void OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE();
	void OnBlendOut_68DE575241BD5D31439A859E850392A2();
	void OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B();
	void OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3();
	void OnBlendOut_143632A9488E9A82D17492B8710C0540();
	void LocomotionStop();
	void LocomotionStart();
	void LocomotionPrePivot();
	void LocomotionPivotCheckpoint();
	void LocomotionPivot();
	void LocalAccelerationToMovementDirection();
	void IsPlayerRagdoll();
	void Hit_React_Event_New();
	void HideMag();
	void Get_Roll_Directions();
	void Get_Footstep_SFX_Material();
	void ExecuteUbergraph_PCM_Hero_ABP_74();
	void ExecuteUbergraph_PCM_Hero_ABP_6();
	void ExecuteUbergraph_PCM_Hero_ABP_44();
	void ExecuteUbergraph_PCM_Hero_ABP_41();
	void ExecuteUbergraph_PCM_Hero_ABP_40();
	void ExecuteUbergraph_PCM_Hero_ABP_24();
	void ExecuteUbergraph_PCM_Hero_ABP_22();
	void ExecuteUbergraph_PCM_Hero_ABP_3();
	void ExecuteUbergraph_PCM_Hero_ABP_17();
	void EventStopSwimming();
	void EventStopSubmerge();
	void EventStartSwimming();
	void EventStartSubmerge();
	void EventStartInteraction();
	void EventEndZipLine();
	void EventEndVault();
	void EventEndPowerSlide();
	void EventEndInteraction();
	void EventEndAbilityMovement();
	void EventDoZipLine();
	void EventDoVault();
	void EventDoStun();
	void EventDoPowerSlide();
	void EventDoGoDown();
	void EventDoDodgeRoll();
	void EventDoAbilityMovement();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_172323EF48DCF7241EF95098F2D8AD87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_131E912946E5081C735EBFAFB1693C8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_C14F007F4907BBAD8DC842954DC08D71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E8F5864A4FBC518801ABE9B4B8E01DB2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E471C2EA41D54CD0DBC13F89A50DBDD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_B60DB0C2476CE26BC38E85978156C863();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_A71A137D45979E49935FD59C46E68895();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_9EC4576B4419196162338EB146564905();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_928BF07A47B3335F07F0FEBDA1AEEA49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7EE32840456D5D28C484B38772C5014A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7768F70149EF6298739C1C9FEDCCBB0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_6C07F39748AE158DE081A1A83BB697E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5F88837142168D1B73A6A1B2A0AD3830();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_3B9ACF614D7FA965A4FAE0ADBEB82AD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_33E027DF46DCE517828E04A253364A0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_223977B248EAF97F0D1CF197C85E2617();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_RotationOffsetBlendSpace_D107525D4933CE74C8899D9BD3CC2AA0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EFBF9A054BC7B28D4BFC5FB791063D37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_E028EF2646CAABBA4677D6BE2F6ACEB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BA1929D54B3B09856192B4B7A4D3B8A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B8C63AC244919E63F441999AF88ED3E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B37F5A5044B9338ED291FF9598922B35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_A84676B74AFF6C9E33195FB08136D345();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_933D26B8456AE00A739D7C98D974D374();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8E46CD0F459017238E79DC91DFAD4E63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8B2E22BB4C78E301E11713A2FA2A31A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8746FEEA43980FC2F65C9DA47BD6C683();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8550E2144C50DB8698BDCBBD4ED6D425();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_81898CD14A88E1C843BD08BA90B663DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_815C9F154477C4703D8C4C88F2D59040();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_37906F5F492BB9398CB5C894999E8B65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_299A235045F7CAFDDC18FFBABC71DFF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1CDEF52142A60BC67A453693093D4120();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1888317840C6DA4D8814B18BC7223E23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_0B8FD2D64DEA37A39BF510A97F6DDAB2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendByLOD_BF890DE54BACD0C3904012BE70422665();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A82298444B1E8F93A73095B20F5AAD80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_10BC24364F921197A28983919050AD47();
	void EndRevivee();
	void EmoteMontageLostAllGlobalWeight();
	void Do_Bind_Hit_React_Event_New();
	void DetermineAutoEquip();
	void Check_for_Skin_Dependant_Variables();
	void CancelDownedCosmetic();
	void CacheRootRagdollState();
	void BlueprintUpdateAnimation();
	void BlueprintInitializeAnimation();
	void AnimNotify_UpdateCrouchTransition1P();
	void AnimNotify_Unplant_Right_Hand();
	void AnimNotify_Unplant_Left_Hand();
	void AnimNotify_UnHide_Weapon();
	void AnimNotify_UnHide_Tablet();
	void AnimNotify_Unhide_Mag();
	void AnimNotify_UnHide_Gadget();
	void AnimNotify_RetrieveEnd();
	void AnimNotify_RetrieveBegin();
	void AnimNotify_Plant_Right_Hand();
	void AnimNotify_Plant_Left_Hand();
	void AnimNotify_MagThrow();
	void AnimNotify_InterruptStopExit();
	void AnimNotify_InterruptStartExit();
	void AnimNotify_Hide_Weapon();
	void AnimNotify_Hide_Tablet();
	void AnimNotify_Hide_Mag();
	void AnimNotify_Hide_Gadget();
	void AnimNotify_HackingEnd();
	void AnimNotify_HackingBegin();
	void AnimNotify_Fire_End();
	void AnimNotify_ExitCustomPivot();
	void AnimNotify_EndLocomotionStartExit();
	void AnimNotify_EndLocomotionStartEnter();
	void AnimNotify_EnableAims();
	void AnimNotify_DisableAims();
	void AnimNotify_CanStand();
	void AnimNotify_BeginLocomotionStartExit();
	void AnimNotify_BeginLocomotionStartEnter();
	void AnimMIrrorDelayEnd();
	void AnimGraph();
	void AfterInteraction();
	void ADS_Bump_Stop_Reset();
	void ADS_Bump_Start_Reset();
	void ADSResetBumpnRollValues();
	void ADSBumpnRollEvaluation();
	void OnSprintChanged__DelegateSignature();
	void OnPlayHitFromPointDamage__DelegateSignature();
	void OnMontagePlayDelegate__DelegateSignature();
	void OnFinishedAllPendingLoadsKeywords__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
