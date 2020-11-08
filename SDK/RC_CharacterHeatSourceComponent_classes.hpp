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

// DynamicClass CharacterHeatSourceComponent.CharacterHeatSourceComponent_C
// 0xD812380 (0x6B1DE080 - 0x5D9CBD00)
class UCharacterHeatSourceComponent_C : public UKSHeatSourceComponent
{
public:
	unsigned char                                      UnknownData00[0xD812380];                                 // 0x5D9CBD00(0xD812380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass CharacterHeatSourceComponent.CharacterHeatSourceComponent_C");
		return ptr;
	}


	void ReceiveEndPlay();
	void OnThermalVisionStateChanged();
	void OnTemperatureChanged_Event_1();
	void OnOwnerInfoUpdateNotify();
	void ExecuteUbergraph_CharacterHeatSourceComponent_2();
	void Apply_Temperature();
	void OnTempChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
