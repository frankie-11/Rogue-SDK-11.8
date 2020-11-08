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

// Class GameplayTasks.GameplayTask
// 0x5ABF7500
class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5ABF7500];                                // 0x0000(0x5ABF7500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};


// Class GameplayTasks.GameplayTask_ClaimResource
// 0xFFFFFFFFA5408B00 (0x0000 - 0x5ABF7500)
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return ptr;
	}


	void ClaimResources();
	void ClaimResource();
};


// Class GameplayTasks.GameplayTask_SpawnActor
// 0x37F1680 (0x5E3E8B80 - 0x5ABF7500)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x37F1680];                                 // 0x5ABF7500(0x37F1680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}


	void SpawnActor();
	void FinishSpawningActor();
	void BeginSpawningActor();
};


// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x1F00 (0x5ABF9400 - 0x5ABF7500)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x1F00];                                    // 0x5ABF7500(0x1F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask_WaitDelay
// 0x1C80 (0x5ABF9180 - 0x5ABF7500)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x1C80];                                    // 0x5ABF7500(0x1C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}


	void TaskWaitDelay();
	void TaskDelayDelegate__DelegateSignature();
};


// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTaskResource
// 0x5E3E8A00
class UGameplayTaskResource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3E8A00];                                // 0x0000(0x5E3E8A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTasksComponent
// 0xD838680 (0x5E3E8500 - 0x50BAFE80)
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD838680];                                 // 0x50BAFE80(0xD838680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}


	void OnRep_SimulatedTasks();
	void K2_RunGameplayTask();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
