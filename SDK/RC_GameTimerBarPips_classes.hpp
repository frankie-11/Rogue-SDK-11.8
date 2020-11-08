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

// WidgetBlueprintGeneratedClass GameTimerBarPips.GameTimerBarPips_C
// 0xFFFFFFFFC641A900 (0x2100F280 - 0x5ABF4980)
class UGameTimerBarPips_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameTimerBarPips.GameTimerBarPips_C");
		return ptr;
	}


	void Set_Total_Pips();
	void Set_Pips_Number();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_GameTimerBarPips();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
