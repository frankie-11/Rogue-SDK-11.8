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

// WidgetBlueprintGeneratedClass WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C
// 0x219F3500
class UWBP_EliminationMessageOverlay_C : public UKSEliminationMessageWidget
{
public:
	unsigned char                                      UnknownData00[0x219F3500];                                // 0x0000(0x219F3500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C");
		return ptr;
	}


	void Clear_Assist_Message();
	void Construct();
	void OnRoundStart();
	void ShowKillCardForTakedown();
	void ShowKillCardForTakenDown();
	void ShowAssistMessage();
	void Finish_Assist_Message();
	void ClearMessages();
	void ExecuteUbergraph_WBP_EliminationMessageOverlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
