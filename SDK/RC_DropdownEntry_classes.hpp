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

// WidgetBlueprintGeneratedClass DropdownEntry.DropdownEntry_C
// 0xDEB4C00 (0x68AA9580 - 0x5ABF4980)
class UDropdownEntry_C : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0xDEB4C00];                                 // 0x5ABF4980(0xDEB4C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DropdownEntry.DropdownEntry_C");
		return ptr;
	}


	void NavigateConfirm();
	void Construct();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadConfirm();
	void ChangeSelectionState();
	void ExecuteUbergraph_DropdownEntry();
	void OnOptionHovered__DelegateSignature();
	void OnOptionSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
