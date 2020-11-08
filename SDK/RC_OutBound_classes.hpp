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

// WidgetBlueprintGeneratedClass OutBound.OutBound_C
// 0x24E92600
class UOutBound_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x24E92600];                                // 0x0000(0x24E92600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OutBound.OutBound_C");
		return ptr;
	}


	void Construct();
	void HandleOutBoundsStart();
	void HandleOutBoundsWarningEnd();
	void HandleOutBoundsEnd();
	void Tick();
	void OpenGate();
	void CloseGate();
	void PostSetPawn();
	void PreClearPawn();
	void HandleKillCamViewChange();
	void InitializeWidget();
	void OnKillCamStart();
	void ExecuteUbergraph_OutBound();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
