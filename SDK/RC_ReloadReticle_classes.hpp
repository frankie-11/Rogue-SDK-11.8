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

// WidgetBlueprintGeneratedClass ReloadReticle.ReloadReticle_C
// 0xFFFFFFFFCE86A780 (0x2945AA00 - 0x5ABF0280)
class UReloadReticle_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReloadReticle.ReloadReticle_C");
		return ptr;
	}


	void ColorSet();
	void UpdateShotgunReload();
	void SetReloadTime();
	void Tick();
	void Circle_Progress_Open();
	void Circle_Progress_Close();
	void PreventCircleFill();
	void ShotgunCircleOpen();
	void ShotgunCircleClose();
	void ExecuteUbergraph_ReloadReticle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
