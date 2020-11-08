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

// WidgetBlueprintGeneratedClass WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C
// 0xFFFFFFFFCB53F100 (0x2612F380 - 0x5ABF0280)
class UWBP_ThrobberHorizontal_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C");
		return ptr;
	}


	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_ThrobberHorizontal();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
