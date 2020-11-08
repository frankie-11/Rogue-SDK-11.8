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

// WidgetBlueprintGeneratedClass WBP_BoxStroke.WBP_BoxStroke_C
// 0xFFFFFFFFC5F6D480 (0x20B5D700 - 0x5ABF0280)
class UWBP_BoxStroke_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BoxStroke.WBP_BoxStroke_C");
		return ptr;
	}


	void SetStrokeColor();
	void SetStrokeSize();
	void ApplyStrokeColor();
	void ApplyStrokeSize();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_BoxStroke();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
