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

// WidgetBlueprintGeneratedClass WatermarkWidget.WatermarkWidget_C
// 0xFFFFFFFFC85D3A80 (0x231C8400 - 0x5ABF4980)
class UWatermarkWidget_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WatermarkWidget.WatermarkWidget_C");
		return ptr;
	}


	void GetNewWatermarkTranslation();
	void Construct();
	void Reposition_Watermark();
	void Fade_In();
	void Fade_Out();
	void Move_Watermark_To_Random_Position();
	void StartPositionChanging();
	void OnResizeViewport();
	void ExecuteUbergraph_WatermarkWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
