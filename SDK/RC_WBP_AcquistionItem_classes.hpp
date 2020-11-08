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

// WidgetBlueprintGeneratedClass WBP_AcquistionItem.WBP_AcquistionItem_C
// 0xFFFFFFFFCF153A80 (0x29D48400 - 0x5ABF4980)
class UWBP_AcquistionItem_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AcquistionItem.WBP_AcquistionItem_C");
		return ptr;
	}


	void OnSlotHovered();
	void OnSlotClicked();
	void SetSlotItem();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_AcquistionItem();
	void OnSlotHover__DelegateSignature();
	void OnSlotSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
