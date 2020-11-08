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

// BlueprintGeneratedClass GamePlayerController.GamePlayerController_C
// 0xFFFFFFFFF323A700 (0x5E422580 - 0x6B1E7E80)
class AGamePlayerController_C : public AGamePlayerControllerNoHUD_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GamePlayerController.GamePlayerController_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_GamePlayerController();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
