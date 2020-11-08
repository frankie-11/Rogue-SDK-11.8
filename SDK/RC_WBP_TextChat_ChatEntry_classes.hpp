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

// WidgetBlueprintGeneratedClass WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C
// 0xFFFFFFFFD1BE2D80 (0x2C7D3000 - 0x5ABF0280)
class UWBP_TextChat_ChatEntry_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C");
		return ptr;
	}


	void HandleInitialSpawn();
	void InitialShowFinished();
	void SetWindowCollapsed();
	void SetTextWithoutPlayer();
	void SetTextWithPlayer();
	void Construct();
	void ExecuteUbergraph_WBP_TextChat_ChatEntry();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
