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

// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C
// 0xFFFFFFFFD13E2780 (0x2BFD7100 - 0x5ABF4980)
class UWBP_PlayerIdentity_Title_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C");
		return ptr;
	}


	void SetTitle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
