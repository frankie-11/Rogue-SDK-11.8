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

// WidgetBlueprintGeneratedClass WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C
// 0x23348200
class UWBP_LocalPlayerModBar_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x23348200];                                // 0x0000(0x23348200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C");
		return ptr;
	}


	void PostSetPawn();
	void PreClearPawn();
	void Handle_Mods_Updated();
	void ExecuteUbergraph_WBP_LocalPlayerModBar();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
