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

// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C
// 0xFFFFFFFFD13E5B00 (0x2BFDA480 - 0x5ABF4980)
class UWBP_PlayerIdentity_Banner_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C");
		return ptr;
	}


	void HideBorder();
	void SetBorder();
	void SetBanner();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
