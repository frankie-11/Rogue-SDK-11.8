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

// WidgetBlueprintGeneratedClass WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C
// 0xFFFFFFFFCE89C300 (0x2948C580 - 0x5ABF0280)
class UWBP_QuickPlay_MapThumbnail_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C");
		return ptr;
	}


	void Construct();
	void SetMapInfo();
	void SetMapDetail();
	void ExecuteUbergraph_WBP_QuickPlay_MapThumbnail();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
