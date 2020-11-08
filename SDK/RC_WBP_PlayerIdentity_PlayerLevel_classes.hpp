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

// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C
// 0xFFFFFFFFD06B6D00 (0x2B2AB680 - 0x5ABF4980)
class UWBP_PlayerIdentity_PlayerLevel_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C");
		return ptr;
	}


	void SetThrobber();
	void SetPlayerLevelExplicit();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
