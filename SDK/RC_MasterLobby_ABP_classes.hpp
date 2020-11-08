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

// AnimBlueprintGeneratedClass MasterLobby_ABP.MasterLobby_ABP_C
// 0xFFFFFFFFA2A15E80 (0x386680 - 0x5D970800)
class UMasterLobby_ABP_C : public UKSCharacterAnimInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MasterLobby_ABP.MasterLobby_ABP_C");
		return ptr;
	}


	void AnimGraph();
	void AnimNotify_Lobby_Unlock_LProp();
	void AnimNotify_Lobby_Unlock_RProp();
	void AnimNotify_Lobby_Lock_LProp();
	void AnimNotify_Lobby_Lock_RProp();
	void BlueprintInitializeAnimation();
	void Set_Skinned_Local_Parameters();
	void ExecuteUbergraph_MasterLobby_ABP();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
