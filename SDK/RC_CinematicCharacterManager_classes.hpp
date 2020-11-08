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

// BlueprintGeneratedClass CinematicCharacterManager.CinematicCharacterManager_C
// 0xFFFFFFFFD0E07680 (0x2BDA5680 - 0x5AF9E000)
class ACinematicCharacterManager_C : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CinematicCharacterManager.CinematicCharacterManager_C");
		return ptr;
	}


	void SpawnCinematicCharacter();
	void DestroyCinematicCharacter();
	void ReceiveBeginPlay();
	void Clear_All_Apparel();
	void ReceiveEndPlay();
	void ExecuteUbergraph_CinematicCharacterManager();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
