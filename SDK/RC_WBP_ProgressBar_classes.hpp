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

// WidgetBlueprintGeneratedClass WBP_ProgressBar.WBP_ProgressBar_C
// 0xFFFFFFFFCC13B300 (0x26D2B580 - 0x5ABF0280)
class UWBP_ProgressBar_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressBar.WBP_ProgressBar_C");
		return ptr;
	}


	void SetFillPercentage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
