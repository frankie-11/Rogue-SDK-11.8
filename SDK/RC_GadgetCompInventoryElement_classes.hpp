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

// WidgetBlueprintGeneratedClass GadgetCompInventoryElement.GadgetCompInventoryElement_C
// 0xFFFFFFFFB49ACA80 (0x12566000 - 0x5DBB9580)
class UGadgetCompInventoryElement_C : public UKSWeaponComponentAmmoWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GadgetCompInventoryElement.GadgetCompInventoryElement_C");
		return ptr;
	}


	void Set_Jammed();
	void OnAmmoChanged();
	void InitializeWidget();
	void Construct();
	void PostSetWeaponComponent();
	void PreClearWeaponComponent();
	void OnBecomeActiveWeaponComponent();
	void OnSetCannotFireNow();
	void ExecuteUbergraph_GadgetCompInventoryElement();
	void OnGadgetRemoved__DelegateSignature();
	void OnGadgetAdded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
