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

// WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C
// 0x2BB94A00
class UWBP_RegionSelectRedirect_C : public UKSRegionSelectModal
{
public:
	unsigned char                                      UnknownData00[0x2BB94A00];                                // 0x0000(0x2BB94A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C");
		return ptr;
	}


	void InitializeWidget();
	void Handle_Region_Selected();
	void Handle_Region_Select_Entries_Created();
	void InitializeWidgetNavigation();
	void OnShown();
	void ExecuteUbergraph_WBP_RegionSelectRedirect();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
