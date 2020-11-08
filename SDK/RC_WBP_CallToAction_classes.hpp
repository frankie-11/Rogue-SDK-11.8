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

// WidgetBlueprintGeneratedClass WBP_CallToAction.WBP_CallToAction_C
// 0xFFFFFFFFC9B95100 (0x24785380 - 0x5ABF0280)
class UWBP_CallToAction_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CallToAction.WBP_CallToAction_C");
		return ptr;
	}


	void StopCTAAnim();
	void PlayCTAAnim();
	void Construct();
	void ExecuteUbergraph_WBP_CallToAction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
