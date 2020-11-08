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

// WidgetBlueprintGeneratedClass WBP_PanelDefault.WBP_PanelDefault_C
// 0xFFFFFFFFC86DDF80 (0x232CE200 - 0x5ABF0280)
class UWBP_PanelDefault_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PanelDefault.WBP_PanelDefault_C");
		return ptr;
	}


	void SetContentPadding();
	void SetPanelColor();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_PanelDefault();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
