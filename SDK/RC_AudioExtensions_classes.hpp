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

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// 0x0000
class USoundfieldEncodingSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEncodingSettingsBase");
		return ptr;
	}

};


// Class AudioExtensions.AudioEndpointSettingsBase
// 0x0000
class UAudioEndpointSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioExtensions.AudioEndpointSettingsBase");
		return ptr;
	}

};


// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// 0x0000
class USpatializationPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioExtensions.SpatializationPluginSourceSettingsBase");
		return ptr;
	}

};


// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// 0x0000
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioExtensions.OcclusionPluginSourceSettingsBase");
		return ptr;
	}

};


// Class AudioExtensions.SoundModulationPluginSourceSettingsBase
// 0x0000
class USoundModulationPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioExtensions.SoundModulationPluginSourceSettingsBase");
		return ptr;
	}

};


// Class AudioExtensions.ReverbPluginSourceSettingsBase
// 0x0000
class UReverbPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioExtensions.ReverbPluginSourceSettingsBase");
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEndpointSettingsBase
// 0x0000
class USoundfieldEndpointSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEndpointSettingsBase");
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEffectSettingsBase
// 0x0000
class USoundfieldEffectSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEffectSettingsBase");
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEffectBase
// 0x5DC83100
class USoundfieldEffectBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC83100];                                // 0x0000(0x5DC83100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEffectBase");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
