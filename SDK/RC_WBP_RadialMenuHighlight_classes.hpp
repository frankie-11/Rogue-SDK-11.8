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

// WidgetBlueprintGeneratedClass WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C
// 0xFFFFFFFFC5B6A080 (0x2075A300 - 0x5ABF0280)
class UWBP_RadialMenuHighlight_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C");
		return ptr;
	}


	void GetHighlightMat();
	void SetPosition();
	void SetWidth();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
