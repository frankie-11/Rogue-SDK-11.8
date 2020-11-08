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

// WidgetBlueprintGeneratedClass DebugBaseCommandHeader.DebugBaseCommandHeader_C
// 0xFFFFFFFFD0BF6200 (0x2B7E6480 - 0x5ABF0280)
class UDebugBaseCommandHeader_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugBaseCommandHeader.DebugBaseCommandHeader_C");
		return ptr;
	}


	void Construct();
	void EstablishIndex();
	void ExecuteUbergraph_DebugBaseCommandHeader();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
