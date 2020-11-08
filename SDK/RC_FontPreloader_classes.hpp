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

// WidgetBlueprintGeneratedClass FontPreloader.FontPreloader_C
// 0xFFFFFFFFCE890700 (0x29480980 - 0x5ABF0280)
class UFontPreloader_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FontPreloader.FontPreloader_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_FontPreloader();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
