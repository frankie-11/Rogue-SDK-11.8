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

// Class AIModule.BTNode
// 0x5B14B580
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B14B580];                                // 0x0000(0x5B14B580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}

};


// Class AIModule.BTCompositeNode
// 0xFFFFFFFFFFF50520 (0x5B09BAA0 - 0x5B14B580)
class UBTCompositeNode : public UBTNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}

};


// Class AIModule.BTTaskNode
// 0xFFFFFFFFFFF52D20 (0x5B09E2A0 - 0x5B14B580)
class UBTTaskNode : public UBTNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}

};


// Class AIModule.BTTask_BlackboardBase
// 0xACEE0 (0x5B14B180 - 0x5B09E2A0)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0xACEE0];                                   // 0x5B09E2A0(0xACEE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.AIController
// 0x13C200 (0x5B27A200 - 0x5B13E000)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x13C200];                                  // 0x5B13E000(0x13C200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}


	void UseBlackboard();
	void UnclaimTaskResource();
	void SetPathFollowingComponent();
	void SetMoveBlockDetection();
	void RunBehaviorTree();
	void OnUsingBlackBoard();
	void OnGameplayTaskResourcesClaimed();
	void MoveToLocation();
	void MoveToActor();
	void K2_SetFocus();
	void K2_SetFocalPoint();
	void K2_ClearFocus();
	void HasPartialPath();
	void GetPathFollowingComponent();
	void GetMoveStatus();
	void GetImmediateMoveDestination();
	void GetFocusActor();
	void GetFocalPointOnActor();
	void GetFocalPoint();
	void GetAIPerceptionComponent();
	void ClaimTaskResource();
};


// Class AIModule.AIPerceptionComponent
// 0xA688020 (0x5B237EA0 - 0x50BAFE80)
class UAIPerceptionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA688020];                                 // 0x50BAFE80(0xA688020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}


	void SetSenseEnabled();
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay();
	void GetPerceivedHostileActors();
	void GetPerceivedActors();
	void GetKnownPerceivedActors();
	void GetCurrentlyPerceivedActors();
	void GetActorsPerception();
	void ForgetAll();
};


// Class AIModule.AISense
// 0x5B290680
class UAISense : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B290680];                                // 0x0000(0x5B290680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}

};


// Class AIModule.AISense_Hearing
// 0xFFFFFFFFFFFA9E40 (0x5B23A4C0 - 0x5B290680)
class UAISense_Hearing : public UAISense
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}


	void ReportNoiseEvent();
};


// Class AIModule.AISense_Sight
// 0x1600 (0x5B291C80 - 0x5B290680)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x1600];                                    // 0x5B290680(0x1600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}

};


// Class AIModule.AISenseConfig
// 0x5B291A00
class UAISenseConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B291A00];                                // 0x0000(0x5B291A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}

};


// Class AIModule.AISenseEvent
// 0x0000
class UAISenseEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}

};


// Class AIModule.AISightTargetInterface
// 0x0000
class UAISightTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}

};


// Class AIModule.BTAuxiliaryNode
// 0xFFFFFFFFA4EB4A80 (0x0000 - 0x5B14B580)
class UBTAuxiliaryNode : public UBTNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}

};


// Class AIModule.BTDecorator
// 0x5B2E3C00
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00[0x5B2E3C00];                                // 0x0000(0x5B2E3C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlackboardBase
// 0xFFFFFFFFFFFFFF80 (0x5B2E3B80 - 0x5B2E3C00)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x19A380 (0x5B2E5500 - 0x5B14B180)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x19A380];                                  // 0x5B14B180(0x19A380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveTo
// 0x19B500 (0x5B2E6680 - 0x5B14B180)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x19B500];                                  // 0x5B14B180(0x19B500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveDirectlyToward
// 0x1D00 (0x5B2E8380 - 0x5B2E6680)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	unsigned char                                      UnknownData00[0x1D00];                                    // 0x5B2E6680(0x1D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}

};


// Class AIModule.BTTask_PawnActionBase
// 0xFFFFFFFFA4F61D60 (0x0000 - 0x5B09E2A0)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}

};


// Class AIModule.BTTask_PushPawnAction
// 0x5B2E8100
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	unsigned char                                      UnknownData00[0x5B2E8100];                                // 0x0000(0x5B2E8100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehavior
// 0x249960 (0x5B2E7C00 - 0x5B09E2A0)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x249960];                                  // 0x5B09E2A0(0x249960) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext
// 0x0000
class UEnvQueryContext : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}

};


// Class AIModule.EnvQueryNode
// 0x5D98A680
class UEnvQueryNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D98A680];                                // 0x0000(0x5D98A680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest
// 0x1780 (0x5D98BE00 - 0x5D98A680)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	unsigned char                                      UnknownData00[0x1780];                                    // 0x5D98A680(0x1780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}

};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0xCE23D80 (0x5D9D3C00 - 0x50BAFE80)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE23D80];                                 // 0x50BAFE80(0xCE23D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}


	void UnregisterFromSense();
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense();
};


// Class AIModule.NavLinkProxy
// 0x2A494A0 (0x5D9E74A0 - 0x5AF9E000)
class ANavLinkProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A494A0];                                 // 0x5AF9E000(0x2A494A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavLinkProxy");
		return ptr;
	}


	void SetSmartLinkEnabled();
	void ResumePathFollowing();
	void ReceiveSmartLinkReached();
	void IsSmartLinkEnabled();
	void HasMovingAgents();
};


// Class AIModule.PathFollowingComponent
// 0xCE9AD80 (0x5DA4AC00 - 0x50BAFE80)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE9AD80];                                 // 0x50BAFE80(0xCE9AD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}


	void OnNavDataRegistered();
	void OnActorBump();
	void GetPathDestination();
	void GetPathActionType();
};


// Class AIModule.CrowdFollowingComponent
// 0xFFFFFFFFFFFFFE80 (0x5DA4AA80 - 0x5DA4AC00)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}


	void SuspendCrowdSteering();
};


// Class AIModule.PawnAction
// 0x5DA4C500
class UPawnAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DA4C500];                                // 0x0000(0x5DA4C500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}


	void GetActionPriority();
	void Finish();
	void CreateActionInstance();
};


// Class AIModule.PawnAction_BlueprintBase
// 0xFFFFFFFFA25B3B00 (0x0000 - 0x5DA4C500)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}


	void ActionTick();
	void ActionStart();
	void ActionResume();
	void ActionPause();
	void ActionFinished();
};


// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x5E3EA400
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3EA400];                                // 0x0000(0x5E3EA400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}


	void OnMoveCompleted();
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}


	void UnlockAIResourcesWithAnimation();
	void SpawnAIFromClass();
	void SimpleMoveToLocation();
	void SimpleMoveToActor();
	void SendAIMessage();
	void LockAIResourcesWithAnimation();
	void IsValidAIRotation();
	void IsValidAILocation();
	void IsValidAIDirection();
	void GetCurrentPath();
	void GetBlackboard();
	void GetAIController();
	void CreateMoveToProxyObject();
};


// Class AIModule.AIDataProvider
// 0x0000
class UAIDataProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}

};


// Class AIModule.AIDataProvider_QueryParams
// 0x5E3EAF00
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x5E3EAF00];                                // 0x0000(0x5E3EAF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}

};


// Class AIModule.AIDataProvider_Random
// 0xFFFFFFFFFFFFFE80 (0x5E3EAD80 - 0x5E3EAF00)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		return ptr;
	}

};


// Class AIModule.AIHotSpotManager
// 0x0000
class UAIHotSpotManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}

};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000
class UAIPerceptionListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}

};


// Class AIModule.AISubsystem
// 0x5E3EAD00
class UAISubsystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3EAD00];                                // 0x0000(0x5E3EAD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISubsystem");
		return ptr;
	}

};


// Class AIModule.AIPerceptionSystem
// 0xFFFFFFFFFFFCB9E0 (0x5E3B66E0 - 0x5E3EAD00)
class UAIPerceptionSystem : public UAISubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}


	void ReportPerceptionEvent();
	void ReportEvent();
	void RegisterPerceptionStimuliSource();
	void OnPerceptionStimuliSourceEndPlay();
	void GetSenseClassForStimulus();
};


// Class AIModule.AIResourceInterface
// 0x0000
class UAIResourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}

};


// Class AIModule.AIResource_Movement
// 0xFFFFFFFFA1C17600 (0x0000 - 0x5E3E8A00)
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}

};


// Class AIModule.AIResource_Logic
// 0xFFFFFFFFA1C17600 (0x0000 - 0x5E3E8A00)
class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}

};


// Class AIModule.AISense_Blueprint
// 0x3125CA0 (0x5E3B6320 - 0x5B290680)
class UAISense_Blueprint : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x3125CA0];                                 // 0x5B290680(0x3125CA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}


	void OnUpdate();
	void OnListenerUpdated();
	void OnListenerUnregistered();
	void OnListenerRegistered();
	void K2_OnNewPawn();
	void GetAllListenerComponents();
	void GetAllListenerActors();
};


// Class AIModule.AISense_Damage
// 0x3125C00 (0x5E3B6280 - 0x5B290680)
class UAISense_Damage : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x3125C00];                                 // 0x5B290680(0x3125C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}


	void ReportDamageEvent();
};


// Class AIModule.AISense_Prediction
// 0x3125B60 (0x5E3B61E0 - 0x5B290680)
class UAISense_Prediction : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x3125B60];                                 // 0x5B290680(0x3125B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}


	void RequestPawnPredictionEvent();
	void RequestControllerPredictionEvent();
};


// Class AIModule.AISense_Team
// 0x3125AC0 (0x5E3B6140 - 0x5B290680)
class UAISense_Team : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x3125AC0];                                 // 0x5B290680(0x3125AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}

};


// Class AIModule.AISense_Touch
// 0x3125A20 (0x5E3B60A0 - 0x5B290680)
class UAISense_Touch : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x3125A20];                                 // 0x5B290680(0x3125A20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseBlueprintListener
// 0xFFFFFFFFA1C26400 (0x0000 - 0x5E3D9C00)
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Blueprint
// 0x3124600 (0x5E3B6000 - 0x5B291A00)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	unsigned char                                      UnknownData00[0x3124600];                                 // 0x5B291A00(0x3124600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Damage
// 0x3124560 (0x5E3B5F60 - 0x5B291A00)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	unsigned char                                      UnknownData00[0x3124560];                                 // 0x5B291A00(0x3124560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Hearing
// 0x31244C0 (0x5E3B5EC0 - 0x5B291A00)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	unsigned char                                      UnknownData00[0x31244C0];                                 // 0x5B291A00(0x31244C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Prediction
// 0xFFFFFFFFA4D6E600 (0x0000 - 0x5B291A00)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Sight
// 0x3124420 (0x5E3B5E20 - 0x5B291A00)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	unsigned char                                      UnknownData00[0x3124420];                                 // 0x5B291A00(0x3124420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Team
// 0xFFFFFFFFA4D6E600 (0x0000 - 0x5B291A00)
class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Touch
// 0xFFFFFFFFA4D6E600 (0x0000 - 0x5B291A00)
class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Damage
// 0x5E3ED580
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	unsigned char                                      UnknownData00[0x5E3ED580];                                // 0x0000(0x5E3ED580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Hearing
// 0x5E3ED500
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	unsigned char                                      UnknownData00[0x5E3ED500];                                // 0x0000(0x5E3ED500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}

};


// Class AIModule.AISystem
// 0x73ED00 (0x5E3ECB80 - 0x5DCADE80)
class UAISystem : public UAISystemBase
{
public:
	unsigned char                                      UnknownData00[0x73ED00];                                  // 0x5DCADE80(0x73ED00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}


	void AILoggingVerbose();
	void AIIgnorePlayers();
};


// Class AIModule.AITask
// 0x37F5600 (0x5E3ECB00 - 0x5ABF7500)
class UAITask : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x37F5600];                                 // 0x5ABF7500(0x37F5600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}

};


// Class AIModule.AITask_LockLogic
// 0xFFFFFFFFA1C13500 (0x0000 - 0x5E3ECB00)
class UAITask_LockLogic : public UAITask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_LockLogic");
		return ptr;
	}

};


// Class AIModule.AITask_MoveTo
// 0x1A00 (0x5E3EE500 - 0x5E3ECB00)
class UAITask_MoveTo : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x1A00];                                    // 0x5E3ECB00(0x1A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}


	void AIMoveTo();
};


// Class AIModule.AITask_RunEQS
// 0xFFFFFFFFA1C13500 (0x0000 - 0x5E3ECB00)
class UAITask_RunEQS : public UAITask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_RunEQS");
		return ptr;
	}


	void RunEQS();
};


// Class AIModule.BehaviorTree
// 0x5E3EE180
class UBehaviorTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3EE180];                                // 0x0000(0x5E3EE180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}

};


// Class AIModule.BrainComponent
// 0xD83E080 (0x5E3EDF00 - 0x50BAFE80)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD83E080];                                 // 0x50BAFE80(0xD83E080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}


	void StopLogic();
	void StartLogic();
	void RestartLogic();
	void IsRunning();
	void IsPaused();
};


// Class AIModule.BehaviorTreeComponent
// 0xFFFFFFFFFFFC7CA0 (0x5E3B5BA0 - 0x5E3EDF00)
class UBehaviorTreeComponent : public UBrainComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}


	void SetDynamicSubtree();
	void GetTagCooldownEndTime();
	void AddCooldownTagDuration();
};


// Class AIModule.BehaviorTreeManager
// 0x5E3ED900
class UBehaviorTreeManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3ED900];                                // 0x0000(0x5E3ED900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}

};


// Class AIModule.BehaviorTreeTypes
// 0x0000
class UBehaviorTreeTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}

};


// Class AIModule.BlackboardAssetProvider
// 0x0000
class UBlackboardAssetProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardAssetProvider");
		return ptr;
	}


	void GetBlackboardAsset();
};


// Class AIModule.BlackboardComponent
// 0xD851200 (0x5E401080 - 0x50BAFE80)
class UBlackboardComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD851200];                                 // 0x50BAFE80(0xD851200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}


	void SetValueAsVector();
	void SetValueAsString();
	void SetValueAsRotator();
	void SetValueAsObject();
	void SetValueAsName();
	void SetValueAsInt();
	void SetValueAsFloat();
	void SetValueAsEnum();
	void SetValueAsClass();
	void SetValueAsBool();
	void IsVectorValueSet();
	void GetValueAsVector();
	void GetValueAsString();
	void GetValueAsRotator();
	void GetValueAsObject();
	void GetValueAsName();
	void GetValueAsInt();
	void GetValueAsFloat();
	void GetValueAsEnum();
	void GetValueAsClass();
	void GetValueAsBool();
	void GetRotationFromEntry();
	void GetLocationFromEntry();
	void ClearValue();
};


// Class AIModule.BlackboardData
// 0x3363AC0 (0x5E400F00 - 0x5B09D440)
class UBlackboardData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x3363AC0];                                 // 0x5B09D440(0x3363AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType
// 0x0000
class UBlackboardKeyType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Class
// 0x5E3B5740
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x5E3B5740];                                // 0x0000(0x5E3B5740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Enum
// 0x5E400D80
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x5E400D80];                                // 0x0000(0x5E400D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Float
// 0x0000
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Int
// 0x0000
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Name
// 0x0000
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_NativeEnum
// 0x5E400C80
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x5E400C80];                                // 0x0000(0x5E400C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Object
// 0x5E3B56A0
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x5E3B56A0];                                // 0x0000(0x5E3B56A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Rotator
// 0x0000
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_String
// 0x5E400C00
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	unsigned char                                      UnknownData00[0x5E400C00];                                // 0x0000(0x5E400C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Vector
// 0x0000
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}

};


// Class AIModule.BTComposite_Selector
// 0xFFFFFFFFA4F64560 (0x0000 - 0x5B09BAA0)
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}

};


// Class AIModule.BTComposite_Sequence
// 0xFFFFFFFFA4F64560 (0x0000 - 0x5B09BAA0)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}

};


// Class AIModule.BTComposite_SimpleParallel
// 0x33650E0 (0x5E400B80 - 0x5B09BAA0)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	unsigned char                                      UnknownData00[0x33650E0];                                 // 0x5B09BAA0(0x33650E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Blackboard
// 0x311CD00 (0x5E400880 - 0x5B2E3B80)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x311CD00];                                 // 0x5B2E3B80(0x311CD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlueprintBase
// 0x311DD80 (0x5E401980 - 0x5B2E3C00)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311DD80];                                 // 0x5B2E3C00(0x311DD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI();
	void ReceiveTick();
	void ReceiveObserverDeactivatedAI();
	void ReceiveObserverDeactivated();
	void ReceiveObserverActivatedAI();
	void ReceiveObserverActivated();
	void ReceiveExecutionStartAI();
	void ReceiveExecutionStart();
	void ReceiveExecutionFinishAI();
	void ReceiveExecutionFinish();
	void PerformConditionCheckAI();
	void PerformConditionCheck();
	void IsDecoratorObserverActive();
	void IsDecoratorExecutionActive();
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x311DB80 (0x5E401780 - 0x5B2E3C00)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311DB80];                                 // 0x5B2E3C00(0x311DB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}

};


// Class AIModule.BTDecorator_CompareBBEntries
// 0x311DA00 (0x5E401600 - 0x5B2E3C00)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311DA00];                                 // 0x5B2E3C00(0x311DA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConditionalLoop
// 0xFFFFFFFFA1BFF780 (0x0000 - 0x5E400880)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConeCheck
// 0x311D800 (0x5E401400 - 0x5B2E3C00)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311D800];                                 // 0x5B2E3C00(0x311D800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Cooldown
// 0x311D780 (0x5E401380 - 0x5B2E3C00)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311D780];                                 // 0x5B2E3C00(0x311D780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_DoesPathExist
// 0x311D580 (0x5E401180 - 0x5B2E3C00)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311D580];                                 // 0x5B2E3C00(0x311D580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ForceSuccess
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsAtLocation
// 0x311F400 (0x5E402F80 - 0x5B2E3B80)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x311F400];                                 // 0x5B2E3B80(0x311F400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x30D1800 (0x5E3B5380 - 0x5B2E3B80)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x30D1800];                                 // 0x5B2E3B80(0x30D1800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}

};


// Class AIModule.BTDecorator_KeepInCone
// 0x311F100 (0x5E402D00 - 0x5B2E3C00)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311F100];                                 // 0x5B2E3C00(0x311F100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Loop
// 0x311EF80 (0x5E402B80 - 0x5B2E3C00)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311EF80];                                 // 0x5B2E3C00(0x311EF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ReachedMoveGoal
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}

};


// Class AIModule.BTDecorator_SetTagCooldown
// 0x311EE00 (0x5E402A00 - 0x5B2E3C00)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311EE00];                                 // 0x5B2E3C00(0x311EE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TagCooldown
// 0x311EC00 (0x5E402800 - 0x5B2E3C00)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311EC00];                                 // 0x5B2E3C00(0x311EC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TimeLimit
// 0x311EB80 (0x5E402780 - 0x5B2E3C00)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x311EB80];                                 // 0x5B2E3C00(0x311EB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}

};


// Class AIModule.BTFunctionLibrary
// 0x0000
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}


	void StopUsingExternalEvent();
	void StartUsingExternalEvent();
	void SetBlackboardValueAsVector();
	void SetBlackboardValueAsString();
	void SetBlackboardValueAsRotator();
	void SetBlackboardValueAsObject();
	void SetBlackboardValueAsName();
	void SetBlackboardValueAsInt();
	void SetBlackboardValueAsFloat();
	void SetBlackboardValueAsEnum();
	void SetBlackboardValueAsClass();
	void SetBlackboardValueAsBool();
	void GetOwnersBlackboard();
	void GetOwnerComponent();
	void GetBlackboardValueAsVector();
	void GetBlackboardValueAsString();
	void GetBlackboardValueAsRotator();
	void GetBlackboardValueAsObject();
	void GetBlackboardValueAsName();
	void GetBlackboardValueAsInt();
	void GetBlackboardValueAsFloat();
	void GetBlackboardValueAsEnum();
	void GetBlackboardValueAsClass();
	void GetBlackboardValueAsBool();
	void GetBlackboardValueAsActor();
	void ClearBlackboardValueAsVector();
	void ClearBlackboardValue();
};


// Class AIModule.BTService
// 0x5E404280
class UBTService : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00[0x5E404280];                                // 0x0000(0x5E404280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}

};


// Class AIModule.BTService_BlackboardBase
// 0x2080 (0x5E406300 - 0x5E404280)
class UBTService_BlackboardBase : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x2080];                                    // 0x5E404280(0x2080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTService_BlueprintBase
// 0x1700 (0x5E405980 - 0x5E404280)
class UBTService_BlueprintBase : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x1700];                                    // 0x5E404280(0x1700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI();
	void ReceiveTick();
	void ReceiveSearchStartAI();
	void ReceiveSearchStart();
	void ReceiveDeactivationAI();
	void ReceiveDeactivation();
	void ReceiveActivationAI();
	void ReceiveActivation();
	void IsServiceActive();
};


// Class AIModule.BTService_DefaultFocus
// 0xFFFFFFFFFFFFF600 (0x5E405900 - 0x5E406300)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}

};


// Class AIModule.BTService_RunEQS
// 0xFFFFFFFFFFFFF580 (0x5E405880 - 0x5E406300)
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return ptr;
	}

};


// Class AIModule.BTTask_BlueprintBase
// 0x3368C60 (0x5E406F00 - 0x5B09E2A0)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x3368C60];                                 // 0x5B09E2A0(0x3368C60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}


	void SetFinishOnMessageWithId();
	void SetFinishOnMessage();
	void ReceiveTickAI();
	void ReceiveTick();
	void ReceiveExecuteAI();
	void ReceiveExecute();
	void ReceiveAbortAI();
	void ReceiveAbort();
	void IsTaskExecuting();
	void IsTaskAborting();
	void FinishExecute();
	void FinishAbort();
};


// Class AIModule.BTTask_FinishWithResult
// 0x3368BE0 (0x5E406E80 - 0x5B09E2A0)
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x3368BE0];                                 // 0x5B09E2A0(0x3368BE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_FinishWithResult");
		return ptr;
	}

};


// Class AIModule.BTTask_GameplayTaskBase
// 0x3368B60 (0x5E406E00 - 0x5B09E2A0)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x3368B60];                                 // 0x5B09E2A0(0x3368B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		return ptr;
	}

};


// Class AIModule.BTTask_MakeNoise
// 0x3368AE0 (0x5E406D80 - 0x5B09E2A0)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x3368AE0];                                 // 0x5B09E2A0(0x3368AE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}

};


// Class AIModule.BTTask_PlayAnimation
// 0x3368860 (0x5E406B00 - 0x5B09E2A0)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x3368860];                                 // 0x5B09E2A0(0x3368860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}

};


// Class AIModule.BTTask_PlaySound
// 0x33687E0 (0x5E406A80 - 0x5B09E2A0)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x33687E0];                                 // 0x5B09E2A0(0x33687E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehaviorDynamic
// 0x3368660 (0x5E406900 - 0x5B09E2A0)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x3368660];                                 // 0x5B09E2A0(0x3368660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}

};


// Class AIModule.BTTask_RunEQSQuery
// 0x32BB400 (0x5E406580 - 0x5B14B180)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x32BB400];                                 // 0x5B14B180(0x32BB400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}

};


// Class AIModule.BTTask_SetTagCooldown
// 0x3368160 (0x5E406400 - 0x5B09E2A0)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x3368160];                                 // 0x5B09E2A0(0x3368160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.BTTask_Wait
// 0x336A160 (0x5E408400 - 0x5B09E2A0)
class UBTTask_Wait : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x336A160];                                 // 0x5B09E2A0(0x336A160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}

};


// Class AIModule.BTTask_WaitBlackboardTime
// 0xFFFFFFFFFFFFFF80 (0x5E408380 - 0x5E408400)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}

};


// Class AIModule.CrowdAgentInterface
// 0x0000
class UCrowdAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}

};


// Class AIModule.CrowdManager
// 0x5E407D80
class UCrowdManager : public UCrowdManagerBase
{
public:
	unsigned char                                      UnknownData00[0x5E407D80];                                // 0x0000(0x5E407D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}

};


// Class AIModule.DetourCrowdAIController
// 0xFFFFFFFFA4D85E00 (0x0000 - 0x5B27A200)
class ADetourCrowdAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}

};


// Class AIModule.EnvQuery
// 0x336A840 (0x5E407C80 - 0x5B09D440)
class UEnvQuery : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x336A840];                                 // 0x5B09D440(0x336A840) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0000
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}


	void ProvideSingleLocation();
	void ProvideSingleActor();
	void ProvideLocationsSet();
	void ProvideActorsSet();
};


// Class AIModule.EnvQueryContext_Item
// 0x0000
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_Querier
// 0x0000
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}

};


// Class AIModule.EnvQueryDebugHelpers
// 0x0000
class UEnvQueryDebugHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator
// 0xA7CF00 (0x5E407580 - 0x5D98A680)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	unsigned char                                      UnknownData00[0xA7CF00];                                  // 0x5D98A680(0xA7CF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0xFFFFFFFFFFFAFFC0 (0x5E3B7540 - 0x5E407580)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x1D80 (0x5E409300 - 0x5E407580)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x1D80];                                    // 0x5E407580(0x1D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}


	void GetQuerier();
	void DoItemGeneration();
	void AddGeneratedVector();
	void AddGeneratedActor();
};


// Class AIModule.EnvQueryGenerator_Composite
// 0xFFFFFFFFFFFAFCA0 (0x5E3B7220 - 0x5E407580)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x1B80 (0x5E409100 - 0x5E407580)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x1B80];                                    // 0x5E407580(0x1B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Cone
// 0xFFFFFFFFFFFFFD80 (0x5E408E80 - 0x5E409100)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0xFFFFFFFFFFFAFB60 (0x5E3B70E0 - 0x5E407580)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Donut
// 0xFFFFFFFFFFFFF980 (0x5E408A80 - 0x5E409100)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_OnCircle
// 0xFFFFFFFFFFFFF400 (0x5E408500 - 0x5E409100)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x1400 (0x5E40A500 - 0x5E409100)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x1400];                                    // 0x5E409100(0x1400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_PathingGrid
// 0xFFFFFFFFFFFFFF00 (0x5E40A400 - 0x5E40A500)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x5ABF8800
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5ABF8800];                                // 0x0000(0x5ABF8800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}


	void SetNamedParam();
	void GetResultsAsLocations();
	void GetResultsAsActors();
	void GetQueryResultsAsLocations();
	void GetQueryResultsAsActors();
	void GetItemScore();
	void EQSQueryDoneSignature__DelegateSignature();
};


// Class AIModule.EnvQueryItemType
// 0x0000
class UEnvQueryItemType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Actor
// 0x0000
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Direction
// 0x0000
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Point
// 0x0000
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}

};


// Class AIModule.EnvQueryManager
// 0xFFFFFFFFFFFCBE40 (0x5E3B6B40 - 0x5E3EAD00)
class UEnvQueryManager : public UAISubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}


	void RunEQSQuery();
};


// Class AIModule.EnvQueryOption
// 0x5E409D00
class UEnvQueryOption : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E409D00];                                // 0x0000(0x5E409D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Distance
// 0xA7DE80 (0x5E409C80 - 0x5D98BE00)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0xA7DE80];                                  // 0x5D98BE00(0xA7DE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Dot
// 0xA7DC80 (0x5E409A80 - 0x5D98BE00)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0xA7DC80];                                  // 0x5D98BE00(0xA7DC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_GameplayTags
// 0xA7DA80 (0x5E409880 - 0x5D98BE00)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0xA7DA80];                                  // 0x5D98BE00(0xA7DA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Overlap
// 0xA7DA00 (0x5E409800 - 0x5D98BE00)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0xA7DA00];                                  // 0x5D98BE00(0xA7DA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Pathfinding
// 0xA7D880 (0x5E409680 - 0x5D98BE00)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0xA7D880];                                  // 0x5D98BE00(0xA7D880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_PathfindingBatch
// 0xFFFFFFFFFFFFFF80 (0x5E409600 - 0x5E409680)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Project
// 0xA7D780 (0x5E409580 - 0x5D98BE00)
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0xA7D780];                                  // 0x5D98BE00(0xA7D780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Random
// 0xFFFFFFFFA2674200 (0x0000 - 0x5D98BE00)
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Trace
// 0xA7F680 (0x5E40B480 - 0x5D98BE00)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0xA7F680];                                  // 0x5D98BE00(0xA7F680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Volume
// 0xA2D0E0 (0x5E3B8EE0 - 0x5D98BE00)
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0xA2D0E0];                                  // 0x5D98BE00(0xA2D0E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Volume");
		return ptr;
	}

};


// Class AIModule.EnvQueryTypes
// 0x0000
class UEnvQueryTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}

};


// Class AIModule.EQSQueryResultSourceInterface
// 0x0000
class UEQSQueryResultSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}

};


// Class AIModule.EQSRenderingComponent
// 0xFFFFFFFFA51F8A80 (0x0000 - 0x5AE07580)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}

};


// Class AIModule.EQSTestingPawn
// 0x32CF800 (0x5E40AD80 - 0x5B13B580)
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x32CF800];                                 // 0x5B13B580(0x32CF800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}

};


// Class AIModule.GenericTeamAgentInterface
// 0x0000
class UGenericTeamAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}

};


// Class AIModule.GridPathAIController
// 0xFFFFFFFFA4D85E00 (0x0000 - 0x5B27A200)
class AGridPathAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathAIController");
		return ptr;
	}

};


// Class AIModule.GridPathFollowingComponent
// 0x9C0100 (0x5E40AD00 - 0x5DA4AC00)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x9C0100];                                  // 0x5DA4AC00(0x9C0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		return ptr;
	}

};


// Class AIModule.NavFilter_AIControllerDefault
// 0xFFFFFFFFA26187A0 (0x0000 - 0x5D9E7860)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		return ptr;
	}

};


// Class AIModule.NavLocalGridManager
// 0x0000
class UNavLocalGridManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavLocalGridManager");
		return ptr;
	}


	void SetLocalNavigationGridDensity();
	void RemoveLocalNavigationGrid();
	void FindLocalNavigationGridPath();
	void AddLocalNavigationGridForPoints();
	void AddLocalNavigationGridForPoint();
	void AddLocalNavigationGridForCapsule();
	void AddLocalNavigationGridForBox();
};


// Class AIModule.PathFollowingManager
// 0x0000
class UPathFollowingManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingManager");
		return ptr;
	}

};


// Class AIModule.PawnAction_Move
// 0x9C1180 (0x5E40D680 - 0x5DA4C500)
class UPawnAction_Move : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x9C1180];                                  // 0x5DA4C500(0x9C1180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}

};


// Class AIModule.PawnAction_Repeat
// 0x9C1000 (0x5E40D500 - 0x5DA4C500)
class UPawnAction_Repeat : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x9C1000];                                  // 0x5DA4C500(0x9C1000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}

};


// Class AIModule.PawnAction_Sequence
// 0x96C580 (0x5E3B8A80 - 0x5DA4C500)
class UPawnAction_Sequence : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x96C580];                                  // 0x5DA4C500(0x96C580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}

};


// Class AIModule.PawnAction_Wait
// 0x9C0E00 (0x5E40D300 - 0x5DA4C500)
class UPawnAction_Wait : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x9C0E00];                                  // 0x5DA4C500(0x9C0E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}

};


// Class AIModule.PawnActionsComponent
// 0xD85CC80 (0x5E40CB00 - 0x50BAFE80)
class UPawnActionsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD85CC80];                                 // 0x50BAFE80(0xD85CC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}


	void K2_PushAction();
	void K2_PerformAction();
	void K2_ForceAbortAction();
	void K2_AbortAction();
};


// Class AIModule.PawnSensingComponent
// 0xA049980 (0x5ABF9800 - 0x50BAFE80)
class UPawnSensingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA049980];                                 // 0x50BAFE80(0xA049980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}


	void SetSensingUpdatesEnabled();
	void SetSensingInterval();
	void SetPeripheralVisionAngle();
	void SeePawnDelegate__DelegateSignature();
	void HearNoiseDelegate__DelegateSignature();
	void GetPeripheralVisionCosine();
	void GetPeripheralVisionAngle();
};


// Class AIModule.VisualLoggerExtension
// 0x0000
class UVisualLoggerExtension : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
