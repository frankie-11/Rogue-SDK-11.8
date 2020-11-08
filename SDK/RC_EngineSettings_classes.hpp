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

// Class EngineSettings.ConsoleSettings
// 0x5DBBBC80
class UConsoleSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBBBC80];                                // 0x0000(0x5DBBBC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x5DBBD500
class UGameMapsSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBBD500];                                // 0x0000(0x5DBBD500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}


	void SetSkipAssigningGamepadToPlayer1();
	void GetSkipAssigningGamepadToPlayer1();
	void GetGameMapsSettings();
};


// Class EngineSettings.GameNetworkManagerSettings
// 0x5DBBCF80
class UGameNetworkManagerSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBBCF80];                                // 0x0000(0x5DBBCF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x5DBBCE00
class UGameSessionSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBBCE00];                                // 0x0000(0x5DBBCE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralEngineSettings
// 0x0000
class UGeneralEngineSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x5DBBE400
class UGeneralProjectSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBBE400];                                // 0x0000(0x5DBBE400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}

};


// Class EngineSettings.HudSettings
// 0x5DBBE300
class UHudSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBBE300];                                // 0x0000(0x5DBBE300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
