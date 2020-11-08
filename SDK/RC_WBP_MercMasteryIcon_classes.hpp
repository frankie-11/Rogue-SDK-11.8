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

// WidgetBlueprintGeneratedClass WBP_MercMasteryIcon.WBP_MercMasteryIcon_C
// 0xFFFFFFFFD1BE0A80 (0x2C7D0D00 - 0x5ABF0280)
class UWBP_MercMasteryIcon_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MercMasteryIcon.WBP_MercMasteryIcon_C");
		return ptr;
	}


	void SetMasteryLevelExplicit();
	void SetMasteryLevelForJob();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
