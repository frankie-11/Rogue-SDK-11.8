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

// WidgetBlueprintGeneratedClass WBP_StoreRotatorTick.WBP_StoreRotatorTick_C
// 0xFFFFFFFFD11B9D00 (0x2BDAE680 - 0x5ABF4980)
class UWBP_StoreRotatorTick_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreRotatorTick.WBP_StoreRotatorTick_C");
		return ptr;
	}


	void SetTickActive();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
