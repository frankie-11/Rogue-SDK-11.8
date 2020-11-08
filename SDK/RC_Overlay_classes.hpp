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

// Class Overlay.Overlays
// 0x0000
class UOverlays : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}

};


// Class Overlay.BasicOverlays
// 0x5E3B1D20
class UBasicOverlays : public UOverlays
{
public:
	unsigned char                                      UnknownData00[0x5E3B1D20];                                // 0x0000(0x5E3B1D20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}

};


// Class Overlay.LocalizedOverlays
// 0x5E3DD780
class ULocalizedOverlays : public UOverlays
{
public:
	unsigned char                                      UnknownData00[0x5E3DD780];                                // 0x0000(0x5E3DD780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
