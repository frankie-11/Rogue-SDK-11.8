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

// WidgetBlueprintGeneratedClass GameTimerBarScorePip.GameTimerBarScorePip_C
// 0xFFFFFFFFC9997980 (0x2458C300 - 0x5ABF4980)
class UGameTimerBarScorePip_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameTimerBarScorePip.GameTimerBarScorePip_C");
		return ptr;
	}


	void Set_Pip();
	void Construct();
	void ExecuteUbergraph_GameTimerBarScorePip();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
