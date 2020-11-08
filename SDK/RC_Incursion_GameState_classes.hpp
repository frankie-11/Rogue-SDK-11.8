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

// BlueprintGeneratedClass Incursion_GameState.Incursion_GameState_C
// 0xFFFFFFFFFFFFFD00 (0x2B26BD00 - 0x2B26C000)
class AIncursion_GameState_C : public AExtraction_GameState_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Incursion_GameState.Incursion_GameState_C");
		return ptr;
	}


	void GetUIMatchTime();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Incursion_GameState();
	void On_New_Wave__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
