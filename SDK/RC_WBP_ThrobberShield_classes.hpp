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

// WidgetBlueprintGeneratedClass WBP_ThrobberShield.WBP_ThrobberShield_C
// 0xFFFFFFFFCFA75C80 (0x2A665F00 - 0x5ABF0280)
class UWBP_ThrobberShield_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ThrobberShield.WBP_ThrobberShield_C");
		return ptr;
	}


	void ResetThrobberAnim();
	void PlayThrobberAnim();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_ThrobberShield();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
