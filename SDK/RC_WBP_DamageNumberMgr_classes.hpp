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

// WidgetBlueprintGeneratedClass WBP_DamageNumberMgr.WBP_DamageNumberMgr_C
// 0xFFFFFFFFAF0FB680 (0xCCB3280 - 0x5DBB7C00)
class UWBP_DamageNumberMgr_C : public UKSViewedPawnDamageDisplay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DamageNumberMgr.WBP_DamageNumberMgr_C");
		return ptr;
	}


	void GetDamageNumberWidgetInstance();
	void Construct();
	void ExecuteUbergraph_WBP_DamageNumberMgr();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
