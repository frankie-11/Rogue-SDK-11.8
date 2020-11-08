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

// WidgetBlueprintGeneratedClass WBP_Context_Bar.WBP_Context_Bar_C
// 0xFFFFFFFFC6C3D200 (0x24783680 - 0x5DB46480)
class UWBP_Context_Bar_C : public UKSContextBarWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Context_Bar.WBP_Context_Bar_C");
		return ptr;
	}


	void RefreshContextButtons();
	void HandleInputStateChange();
	void CanCloseOnLogout();
	void InitializeWidget();
	void UpdateContextActions();
	void ExecuteUbergraph_WBP_Context_Bar();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
