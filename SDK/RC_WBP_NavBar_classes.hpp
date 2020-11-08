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

// WidgetBlueprintGeneratedClass WBP_NavBar.WBP_NavBar_C
// 0xFFFFFFFFCD66A800 (0x2825F180 - 0x5ABF4980)
class UWBP_NavBar_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NavBar.WBP_NavBar_C");
		return ptr;
	}


	void HandleInput();
	void OnKeyUp();
	void SetButtonIndexActive();
	void HandleNavRight();
	void HandleNavLeft();
	void HandleInputStateChanged();
	void SetupGamepadCallouts();
	void SetNavButtons();
	void Construct();
	void OnButtonClicked();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_NavBar();
	void OnButtonsCreated__DelegateSignature();
	void OnButtonSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
