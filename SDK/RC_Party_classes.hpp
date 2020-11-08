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

// Class Party.Chatroom
// 0x5B14A800
class UChatroom : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B14A800];                                // 0x0000(0x5B14A800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.Chatroom");
		return ptr;
	}

};


// Class Party.SocialManager
// 0x5B09DDA0
class USocialManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B09DDA0];                                // 0x0000(0x5B09DDA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialManager");
		return ptr;
	}

};


// Class Party.SocialParty
// 0x5B09DC60
class USocialParty : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B09DC60];                                // 0x0000(0x5B09DC60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialParty");
		return ptr;
	}

};


// Class Party.PartyMember
// 0x5B14A780
class UPartyMember : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B14A780];                                // 0x0000(0x5B14A780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.PartyMember");
		return ptr;
	}

};


// Class Party.SocialToolkit
// 0x5B14B700
class USocialToolkit : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B14B700];                                // 0x0000(0x5B14B700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialToolkit");
		return ptr;
	}

};


// Class Party.SocialChatManager
// 0x5B0E4840
class USocialChatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0E4840];                                // 0x0000(0x5B0E4840) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialChatManager");
		return ptr;
	}

};


// Class Party.SocialChatChannel
// 0x0000
class USocialChatChannel : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialChatChannel");
		return ptr;
	}

};


// Class Party.SocialChatRoom
// 0x0000
class USocialChatRoom : public USocialChatChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialChatRoom");
		return ptr;
	}

};


// Class Party.SocialDebugTools
// 0x0000
class USocialDebugTools : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialDebugTools");
		return ptr;
	}

};


// Class Party.SocialGroupChannel
// 0x5B14C200
class USocialGroupChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B14C200];                                // 0x0000(0x5B14C200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialGroupChannel");
		return ptr;
	}

};


// Class Party.SocialPartyChatRoom
// 0x0000
class USocialPartyChatRoom : public USocialChatRoom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialPartyChatRoom");
		return ptr;
	}

};


// Class Party.SocialPrivateMessageChannel
// 0x5B14BD00
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	unsigned char                                      UnknownData00[0x5B14BD00];                                // 0x0000(0x5B14BD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialPrivateMessageChannel");
		return ptr;
	}

};


// Class Party.SocialReadOnlyChatChannel
// 0x0000
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialReadOnlyChatChannel");
		return ptr;
	}

};


// Class Party.SocialSettings
// 0x5B09DBC0
class USocialSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B09DBC0];                                // 0x0000(0x5B09DBC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialSettings");
		return ptr;
	}

};


// Class Party.SocialUser
// 0x0000
class USocialUser : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialUser");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
