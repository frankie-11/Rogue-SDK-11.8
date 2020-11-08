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

// WidgetBlueprintGeneratedClass WBP_Social_Platform_ID.WBP_Social_Platform_ID_C
// 0xFFFFFFFFCAE3CC00 (0x25A2CE80 - 0x5ABF0280)
class UWBP_Social_Platform_ID_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Platform_ID.WBP_Social_Platform_ID_C");
		return ptr;
	}


	void PreConstruct();
	void OnInitialized();
	void ExecuteUbergraph_WBP_Social_Platform_ID();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
