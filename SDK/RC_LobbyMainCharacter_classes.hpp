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

// BlueprintGeneratedClass LobbyMainCharacter.LobbyMainCharacter_C
// 0xFFFFFFFFA2969E80 (0x38E700 - 0x5DA24880)
class ALobbyMainCharacter_C : public AKSLobbyCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyMainCharacter.LobbyMainCharacter_C");
		return ptr;
	}


	void Randomize_Lobby_Idle_anim_start();
	void Make_Lobby_Fidget_Keyword_Array();
	void Parse_Lobby_Fidget_Animation();
	void Get_Montage_Position_of_Lobby_Characater();
	void Init_Body_Apparel();
	void LobbyWeapon01_Timeline__FinishedFunc();
	void LobbyWeapon01_Timeline__UpdateFunc();
	void LobbyWeapon02_Timeline__FinishedFunc();
	void LobbyWeapon02_Timeline__UpdateFunc();
	void LobbyProp01_Timeline__FinishedFunc();
	void LobbyProp01_Timeline__UpdateFunc();
	void OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7();
	void OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7();
	void OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7();
	void OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7();
	void OnCompleted_AA177F3D4F176F58A7691D84D8C329C7();
	void StopRightPropEffect();
	void PlayRightPropEffect();
	void StopLeftPropEffect();
	void PlayLeftPropEffect();
	void StopScenePropEffect();
	void PlayScenePropEffect();
	void ReceiveBeginPlay();
	void Add_Body_Apparel_As_Parent();
	void PlayLobbyCharacterMontage();
	void StopLobbyCharacterMontage();
	void InitializeLobbyCharacterAnimation();
	void ExecuteUbergraph_LobbyMainCharacter();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
