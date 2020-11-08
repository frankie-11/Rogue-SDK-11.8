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

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// 0xFFFFFFFFFFFFFC80 (0x5AFA0900 - 0x5AFA0C80)
class AMagicLeapSharedWorldGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode");
		return ptr;
	}


	void SendSharedWorldDataToClients();
	void SelectChosenOne();
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	void DetermineSharedWorldData();
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// 0xFFFFFFFFFFFFFD00 (0x5AFA1D80 - 0x5AFA2080)
class AMagicLeapSharedWorldGameState : public AGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState");
		return ptr;
	}


	void OnReplicate_SharedWorldData();
	void OnReplicate_AlignmentTransforms();
	void MagicLeapSharedWorldEvent__DelegateSignature();
	void CalculateXRCameraRootTransform();
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// 0xFFFFFFFFA4EB9780 (0x0000 - 0x5B146880)
class AMagicLeapSharedWorldPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController");
		return ptr;
	}


	void ServerSetLocalWorldData();
	void ServerSetAlignmentTransforms();
	void IsChosenOne();
	void ClientSetChosenOne();
	void ClientMarkReadyForSendingLocalData();
	void CanSendLocalDataToServer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
