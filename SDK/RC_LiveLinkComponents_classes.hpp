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

// Class LiveLinkComponents.LiveLinkControllerBase
// 0x0000
class ULiveLinkControllerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkControllerBase");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkCameraController
// 0x0000
class ULiveLinkCameraController : public ULiveLinkControllerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkCameraController");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkComponentController
// 0xA639280 (0x5B1E9100 - 0x50BAFE80)
class ULiveLinkComponentController : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA639280];                                 // 0x50BAFE80(0xA639280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentController");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkComponentSettings
// 0x5B0E3580
class ULiveLinkComponentSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0E3580];                                // 0x0000(0x5B0E3580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentSettings");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkLightController
// 0x0000
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkLightController");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkTransformController
// 0x5B1E9080
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	unsigned char                                      UnknownData00[0x5B1E9080];                                // 0x0000(0x5B1E9080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkTransformController");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
