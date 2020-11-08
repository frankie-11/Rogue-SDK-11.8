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

// WidgetBlueprintGeneratedClass DiagramSUV.DiagramSUV_C
// 0xFFFFFFFFCC647B80 (0x2723C500 - 0x5ABF4980)
class UDiagramSUV_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DiagramSUV.DiagramSUV_C");
		return ptr;
	}


	void SetSeating();
	void ExecuteUbergraph_DiagramSUV();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
