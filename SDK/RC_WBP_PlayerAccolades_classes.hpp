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

// WidgetBlueprintGeneratedClass WBP_PlayerAccolades.WBP_PlayerAccolades_C
// 0xFFFFFFFFCB62C600 (0x2916C780 - 0x5DB40180)
class UWBP_PlayerAccolades_C : public UKSAccoladeQueueWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerAccolades.WBP_PlayerAccolades_C");
		return ptr;
	}


	void GetAccolateWidget();
	void InitAccoladePool();
	void SetPresentationSpeed();
	void TickPresentationSpeed();
	void CalculatePresentationSpeed();
	void MoveAccolades();
	void QueueAccolade();
	void AllowOtherAccolades();
	void RemoveAccolade();
	void HandleAccoladeRecieved();
	void HandleMultiplier();
	void CreateAccolade();
	void Construct();
	void HandleKillCamEnabled();
	void Tick();
	void ExecuteUbergraph_WBP_PlayerAccolades();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
