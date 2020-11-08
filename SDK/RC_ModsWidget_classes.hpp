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

// WidgetBlueprintGeneratedClass ModsWidget.ModsWidget_C
// 0x24E92700
class UModsWidget_C : public UKSViewedPawnModsWidget
{
public:
	unsigned char                                      UnknownData00[0x24E92700];                                // 0x0000(0x24E92700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ModsWidget.ModsWidget_C");
		return ptr;
	}


	void GetOverlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
