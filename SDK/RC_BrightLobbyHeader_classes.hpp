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

// WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C
// 0xFFFFFFFFC9B95500 (0x24789E80 - 0x5ABF4980)
class UBrightLobbyHeader_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C");
		return ptr;
	}


	void InitializeWidget();
	void StartShowSequence();
	void HandleLobbyStartMenuInputAction();
	void HandleLoginStateChange();
	void ExecuteUbergraph_BrightLobbyHeader();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
