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

// WidgetBlueprintGeneratedClass WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C
// 0xFFFFFFFFCE892980 (0x29487300 - 0x5ABF4980)
class UWBP_CosmeticItem_Title_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C");
		return ptr;
	}


	void PreConstruct();
	void ExecuteUbergraph_WBP_CosmeticItem_Title();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
