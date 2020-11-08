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

// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_StatEntry.WBP_PlayerProfileScreen_StatEntry_C
// 0xFFFFFFFFD13EA400 (0x2BFDA680 - 0x5ABF0280)
class UWBP_PlayerProfileScreen_StatEntry_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_StatEntry.WBP_PlayerProfileScreen_StatEntry_C");
		return ptr;
	}


	void SetActivityInstance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
