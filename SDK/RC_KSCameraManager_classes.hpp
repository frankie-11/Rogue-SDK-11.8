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

// BlueprintGeneratedClass KSCameraManager.KSCameraManager_C
// 0x9C0680 (0x5E425400 - 0x5DA64D80)
class AKSCameraManager_C : public AKSPlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x9C0680];                                  // 0x5DA64D80(0x9C0680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KSCameraManager.KSCameraManager_C");
		return ptr;
	}


	void GetMantleHeightFromKSChar();
	void NotifyCamModFinished();
	void UpdateCamModValues();
	void JumpStart__FinishedFunc();
	void JumpStart__UpdateFunc();
	void JumpLanding__FinishedFunc();
	void JumpLanding__UpdateFunc();
	void Mantle_Tall__FinishedFunc();
	void Mantle_Tall__UpdateFunc();
	void Mantle_Medium__FinishedFunc();
	void Mantle_Medium__UpdateFunc();
	void Mantle_Short__FinishedFunc();
	void Mantle_Short__UpdateFunc();
	void Vault_Tall__FinishedFunc();
	void Vault_Tall__UpdateFunc();
	void Vault_Medium__FinishedFunc();
	void Vault_Medium__UpdateFunc();
	void Vault_Short__FinishedFunc();
	void Vault_Short__UpdateFunc();
	void Vault_Medium_Running__FinishedFunc();
	void Vault_Medium_Running__UpdateFunc();
	void Play_Jump_Start();
	void PlayJumpLanding();
	void Play_Mantle();
	void ExecuteUbergraph_KSCameraManager();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
