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

// Class PlatformCommon.PComGameEngine
// 0xFFFFFFFFFFFFFF80 (0x5B106400 - 0x5B106480)
class UPComGameEngine : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComGameEngine");
		return ptr;
	}

};


// Class PlatformCommon.PCom_IpConnection
// 0xFFFFFFFFA4EF8380 (0x0000 - 0x5B107C80)
class UPCom_IpConnection : public UIpConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PCom_IpConnection");
		return ptr;
	}

};


// Class PlatformCommon.PCom_LocalPlayer
// 0xFFFFFFFFA4EF8580 (0x0000 - 0x5B107A80)
class UPCom_LocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PCom_LocalPlayer");
		return ptr;
	}

};


// Class PlatformCommon.PCom_UDPEncryptionHandlerComponentFactory
// 0x0000
class UPCom_UDPEncryptionHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PCom_UDPEncryptionHandlerComponentFactory");
		return ptr;
	}

};


// Class PlatformCommon.PCom_SimpleTimecodeProvider
// 0xFFFFFFFFFFFFFF00 (0x5B107600 - 0x5B107700)
class UPCom_SimpleTimecodeProvider : public UTimecodeProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PCom_SimpleTimecodeProvider");
		return ptr;
	}


	void SetFrameRate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
