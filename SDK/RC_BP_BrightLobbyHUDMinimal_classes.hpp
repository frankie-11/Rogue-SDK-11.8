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

// BlueprintGeneratedClass BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C
// 0xFFFFFFFFC7B0DA00 (0x25670900 - 0x5DB62F00)
class ABP_BrightLobbyHUDMinimal_C : public AKSLobbyHUDNew
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C");
		return ptr;
	}


	void CallRemoveTopViewRoute();
	void CallAddViewRoute();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
