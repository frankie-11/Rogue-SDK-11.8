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

// WidgetBlueprintGeneratedClass WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C
// 0x23345380
class UWBP_NeutralBombIndicator_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x23345380];                                // 0x0000(0x23345380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C");
		return ptr;
	}


	void Construct();
	void HandleBombStateChanged();
	void HandleViewedPawnChanged();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_NeutralBombIndicator();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
