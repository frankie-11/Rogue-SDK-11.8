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

// WidgetBlueprintGeneratedClass WBP_AdditiveImage.WBP_AdditiveImage_C
// 0xFFFFFFFFD13E9900 (0x2BFD9B80 - 0x5ABF0280)
class UWBP_AdditiveImage_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AdditiveImage.WBP_AdditiveImage_C");
		return ptr;
	}


	void SetAdditiveMaterial();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_AdditiveImage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
