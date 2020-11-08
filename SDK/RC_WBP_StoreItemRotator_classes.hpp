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

// WidgetBlueprintGeneratedClass WBP_StoreItemRotator.WBP_StoreItemRotator_C
// 0xFFFFFFFFD066D780 (0x2B262100 - 0x5ABF4980)
class UWBP_StoreItemRotator_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreItemRotator.WBP_StoreItemRotator_C");
		return ptr;
	}


	void SetPercentTimeRemaining();
	void SetRotatorSize();
	void SetActiveIndex();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
