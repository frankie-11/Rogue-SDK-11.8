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

// WidgetBlueprintGeneratedClass WBP_RespawnTimer.WBP_RespawnTimer_C
// 0xFFFFFFFFC964A380 (0x2423ED00 - 0x5ABF4980)
class UWBP_RespawnTimer_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RespawnTimer.WBP_RespawnTimer_C");
		return ptr;
	}


	void Tick();
	void InitializeWidget();
	void On_Respawn_Timer_Tick();
	void On_Respawn_Timer_Active();
	void OnRespawnTimerComplete();
	void ExecuteUbergraph_WBP_RespawnTimer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
