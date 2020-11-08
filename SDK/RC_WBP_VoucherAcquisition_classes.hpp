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

// WidgetBlueprintGeneratedClass WBP_VoucherAcquisition.WBP_VoucherAcquisition_C
// 0x2BFF3680
class UWBP_VoucherAcquisition_C : public UKSVoucherAcquisition
{
public:
	unsigned char                                      UnknownData00[0x2BFF3680];                                // 0x0000(0x2BFF3680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VoucherAcquisition.WBP_VoucherAcquisition_C");
		return ptr;
	}


	void OnKeyDown();
	void OnKeyUp();
	void DisplayVoucherAcquisitions();
	void AttemptGetAcquisition();
	void OnRedeemDLC();
	void NavigateBack();
	void Tick();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void OnShown();
	void PreConstruct();
	void ExecuteUbergraph_WBP_VoucherAcquisition();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
