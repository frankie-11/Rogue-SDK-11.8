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

// WidgetBlueprintGeneratedClass TargetingDetailsWidget.TargetingDetailsWidget_C
// 0xFFFFFFFFCD79FE80 (0x2B26BB80 - 0x5DACBD00)
class UTargetingDetailsWidget_C : public UKSTargetingDetailsWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TargetingDetailsWidget.TargetingDetailsWidget_C");
		return ptr;
	}


	void OnCurrentDistanceChanged();
	void ExecuteUbergraph_TargetingDetailsWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
