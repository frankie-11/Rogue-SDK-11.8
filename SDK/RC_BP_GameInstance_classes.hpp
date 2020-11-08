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

// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// 0x8E9EE80 (0x6683FD00 - 0x5D9A0E80)
class UBP_GameInstance_C : public UKSGameInstance
{
public:
	unsigned char                                      UnknownData00[0x8E9EE80];                                 // 0x5D9A0E80(0x8E9EE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C");
		return ptr;
	}


	void EndLoading();
	void BeginLoading();
	void ExecuteUbergraph_BP_GameInstance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
