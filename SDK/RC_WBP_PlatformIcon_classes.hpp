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

// WidgetBlueprintGeneratedClass WBP_PlatformIcon.WBP_PlatformIcon_C
// 0x42BF380 (0x5EEB3D00 - 0x5ABF4980)
class UWBP_PlatformIcon_C : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x42BF380];                                 // 0x5ABF4980(0x42BF380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlatformIcon.WBP_PlatformIcon_C");
		return ptr;
	}


	void SetPlatform();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_PlatformIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
