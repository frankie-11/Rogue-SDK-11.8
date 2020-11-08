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

// WidgetBlueprintGeneratedClass WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C
// 0xFFFFFFFFC6E4B700 (0x24992B00 - 0x5DB47400)
class UWBP_ContextualPingMapIcon_C : public UKSContextualPingMarkerWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C");
		return ptr;
	}


	void Construct();
	void HandlePingRemoved();
	void SetupPingOnReady();
	void ExecuteUbergraph_WBP_ContextualPingMapIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
