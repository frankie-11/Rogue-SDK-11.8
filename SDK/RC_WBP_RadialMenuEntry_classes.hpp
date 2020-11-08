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

// WidgetBlueprintGeneratedClass WBP_RadialMenuEntry.WBP_RadialMenuEntry_C
// 0xFFFFFFFFD067F100 (0x2B26F380 - 0x5ABF0280)
class UWBP_RadialMenuEntry_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RadialMenuEntry.WBP_RadialMenuEntry_C");
		return ptr;
	}


	void ShowBigTextInsteadOfIcon();
	void SetEmpty();
	void SetIconColor();
	void SetIconFromSoftTexture();
	void Set_IconAndName();
	void SetRotation();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_RadialMenuEntry();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
