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

// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C
// 0xFFFFFFFFCE89A500 (0x2948A780 - 0x5ABF0280)
class UWBP_QuickPlay_QueueTypeHeader_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C");
		return ptr;
	}


	void Construct();
	void PreConstruct();
	void SetHeaderText();
	void ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
