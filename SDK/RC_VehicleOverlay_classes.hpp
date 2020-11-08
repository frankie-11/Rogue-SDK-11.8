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

// WidgetBlueprintGeneratedClass VehicleOverlay.VehicleOverlay_C
// 0x219FD600
class UVehicleOverlay_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x219FD600];                                // 0x0000(0x219FD600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VehicleOverlay.VehicleOverlay_C");
		return ptr;
	}


	void UpdateRevealConeReticle();
	void SetVehicle();
	void UnsetVehicle();
	void Tick();
	void InitializeWidget();
	void ModeChange();
	void PostSetPawn();
	void PreClearPawn();
	void Handle_Vehicle_State_Changed();
	void HandleVehicleHealthChanged();
	void HandleVehicleSeatingChanged();
	void ExecuteUbergraph_VehicleOverlay();
	void Vehicle_State_Changed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
