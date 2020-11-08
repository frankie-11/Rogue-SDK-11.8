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

// WidgetBlueprintGeneratedClass Dropdown.Dropdown_C
// 0xDEB6F80 (0x68AAB900 - 0x5ABF4980)
class UDropdown_C : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0xDEB6F80];                                 // 0x5ABF4980(0xDEB6F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Dropdown.Dropdown_C");
		return ptr;
	}


	void IsSelecting();
	void NavigateConfirm();
	void AppendOptions();
	void ForceClose();
	void ForceToggle();
	void ForceOpen();
	void InitializeDropdownList();
	void SetSelectedOptionByIndex();
	void SetSelectedOptionByText();
	void RemoveOptionByIndex();
	void RemoveOptionByText();
	void GetSelectedOption();
	void GetOptionCount();
	void FindIndexForOption();
	void FindOptionByIndex();
	void ClearSelection();
	void ClearOptions();
	void AddOption();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void SelectionMade();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void SelectionCancel();
	void BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature();
	void HandleSetCurrentHoverIndex();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void On_Selected();
	void Hover();
	void Unhover();
	void ExecuteUbergraph_Dropdown();
	void OnSelectionChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
