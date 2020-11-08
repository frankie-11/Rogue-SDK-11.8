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

// WidgetBlueprintGeneratedClass DropdownList.DropdownList_C
// 0xBD37700 (0x6692C080 - 0x5ABF4980)
class UDropdownList_C : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0xBD37700];                                 // 0x5ABF4980(0xBD37700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DropdownList.DropdownList_C");
		return ptr;
	}


	void NavigateBack();
	void InitializeWidget();
	void Selection();
	void OnMouseLeave();
	void InitializeWidgetNavigation();
	void HandleOnHover();
	void SetSelectedEntryByIndex();
	void ExecuteUbergraph_DropdownList();
	void OnCancel__DelegateSignature();
	void OnSelection__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
