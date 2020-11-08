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

// WidgetBlueprintGeneratedClass WBP_RoleFilterButton.WBP_RoleFilterButton_C
// 0xFFFFFFFFCE896E00 (0x2948B780 - 0x5ABF4980)
class UWBP_RoleFilterButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RoleFilterButton.WBP_RoleFilterButton_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_WBP_RoleFilterButton();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
