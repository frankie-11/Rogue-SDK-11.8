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

// WidgetBlueprintGeneratedClass WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C
// 0xFFFFFFFFC968B680 (0x2427B900 - 0x5ABF0280)
class UWBP_GameModeInfoPanel_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C");
		return ptr;
	}


	void GetQueueImageById();
	void SetDisplayInfo();
	void SetQueueInfo();
	void ExecuteUbergraph_WBP_GameModeInfoPanel();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
