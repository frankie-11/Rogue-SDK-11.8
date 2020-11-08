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

// WidgetBlueprintGeneratedClass WBP_EventProgress.WBP_EventProgress_C
// 0xFFFFFFFFC5F61A80 (0x20B56400 - 0x5ABF4980)
class UWBP_EventProgress_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EventProgress.WBP_EventProgress_C");
		return ptr;
	}


	void InitializeWithActivityInstance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
