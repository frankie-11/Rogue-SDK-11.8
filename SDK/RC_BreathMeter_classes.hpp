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

// WidgetBlueprintGeneratedClass BreathMeter.BreathMeter_C
// 0xFFFFFFFFC85D4880 (0x231C4B00 - 0x5ABF0280)
class UBreathMeter_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BreathMeter.BreathMeter_C");
		return ptr;
	}


	void Tick();
	void OpenGate();
	void CloseGate();
	void Construct();
	void UpdateCharacter();
	void UnbindCharacter();
	void UpdateBreath();
	void ExecuteUbergraph_BreathMeter();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
