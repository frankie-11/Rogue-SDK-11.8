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

// DynamicClass INameplateWidget.INameplateWidget_C
// 0x0000
class UINameplateWidget_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass INameplateWidget.INameplateWidget_C");
		return ptr;
	}


	void OnUnhovered();
	void OnPossession();
	void OnHovered();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
