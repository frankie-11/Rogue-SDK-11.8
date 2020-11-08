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

// WidgetBlueprintGeneratedClass WBP_StoreDiscountTag.WBP_StoreDiscountTag_C
// 0xFFFFFFFFD0674200 (0x2B264480 - 0x5ABF0280)
class UWBP_StoreDiscountTag_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreDiscountTag.WBP_StoreDiscountTag_C");
		return ptr;
	}


	void SetDiscountPercentage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
