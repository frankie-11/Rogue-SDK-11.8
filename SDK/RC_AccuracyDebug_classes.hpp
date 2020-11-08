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

// WidgetBlueprintGeneratedClass AccuracyDebug.AccuracyDebug_C
// 0xFFFFFFFFC98A5980 (0x2449A300 - 0x5ABF4980)
class UAccuracyDebug_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AccuracyDebug.AccuracyDebug_C");
		return ptr;
	}


	void Construct();
	void Tick();
	void ExecuteUbergraph_AccuracyDebug();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
