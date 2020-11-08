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

// WidgetBlueprintGeneratedClass WBP_ContextualPingIcon.WBP_ContextualPingIcon_C
// 0xFFFFFFFFC66F7680 (0x2423EA80 - 0x5DB47400)
class UWBP_ContextualPingIcon_C : public UKSContextualPingMarkerWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ContextualPingIcon.WBP_ContextualPingIcon_C");
		return ptr;
	}


	void Construct();
	void HandlePingRemoved();
	void SetupPingOnReady();
	void ExecuteUbergraph_WBP_ContextualPingIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
