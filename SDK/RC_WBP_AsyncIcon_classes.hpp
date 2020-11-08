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

// WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C
// 0xFFFFFFFFD06BA380 (0x2B2AED00 - 0x5ABF4980)
class UWBP_AsyncIcon_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C");
		return ptr;
	}


	void Set_Brush_from_Texture_on_Item();
	void Get_Material();
	void SetMaterialToUse();
	void ApplyDefaultBrush();
	void SetBrushFromSoftTexture();
	void SetBrushFromTexture();
	void SetBrushFromItemIcon();
	void PreConstruct();
	void Construct();
	void OnStartLoad();
	void OnFinishLoad();
	void ExecuteUbergraph_WBP_AsyncIcon();
	void OnIconUpdated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
