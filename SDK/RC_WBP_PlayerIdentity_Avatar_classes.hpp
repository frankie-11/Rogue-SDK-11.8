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

// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C
// 0xFFFFFFFFD06B8880 (0x2B2AD200 - 0x5ABF4980)
class UWBP_PlayerIdentity_Avatar_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C");
		return ptr;
	}


	void SetAvatar();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
