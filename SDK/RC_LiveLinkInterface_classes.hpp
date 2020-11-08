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

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// 0x0000
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkFrameTranslator
// 0x0000
class ULiveLinkFrameTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameTranslator");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkVirtualSubject
// 0x5B196320
class ULiveLinkVirtualSubject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B196320];                                // 0x0000(0x5B196320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkVirtualSubject");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkFramePreProcessor
// 0x0000
class ULiveLinkFramePreProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFramePreProcessor");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000
class ULiveLinkSourceFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x5B195740
class ULiveLinkSourceSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B195740];                                // 0x0000(0x5B195740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkRole
// 0x0000
class ULiveLinkRole : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkBasicRole
// 0x0000
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkBasicRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkAnimationRole
// 0x0000
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkAnimationRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkTransformRole
// 0x0000
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkTransformRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkCameraRole
// 0x0000
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCameraRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkController
// 0x0000
class ULiveLinkController : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkController");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// 0x3277340 (0x5E40CA80 - 0x5B195740)
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	unsigned char                                      UnknownData00[0x3277340];                                 // 0x5B195740(0x3277340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCurveRemapSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkLightRole
// 0x0000
class ULiveLinkLightRole : public ULiveLinkTransformRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkLightRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSubjectSettings
// 0x5E3B8760
class ULiveLinkSubjectSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3B8760];                                // 0x0000(0x5E3B8760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSubjectSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
