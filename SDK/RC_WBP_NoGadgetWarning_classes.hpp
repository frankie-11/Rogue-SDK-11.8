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

// WidgetBlueprintGeneratedClass WBP_NoGadgetWarning.WBP_NoGadgetWarning_C
// 0x2423C280
class UWBP_NoGadgetWarning_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x2423C280];                                // 0x0000(0x2423C280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NoGadgetWarning.WBP_NoGadgetWarning_C");
		return ptr;
	}


	void HandleMedPackFailed();
	void HandleGrenadeFailed();
	void PostSetPawn();
	void ExecuteUbergraph_WBP_NoGadgetWarning();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
