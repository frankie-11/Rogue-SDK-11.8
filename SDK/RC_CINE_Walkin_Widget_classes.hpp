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

// WidgetBlueprintGeneratedClass CINE_Walkin_Widget.CINE_Walkin_Widget_C
// 0xFFFFFFFFC98A4A00 (0x24494C80 - 0x5ABF0280)
class UCINE_Walkin_Widget_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CINE_Walkin_Widget.CINE_Walkin_Widget_C");
		return ptr;
	}


	void GetAsText();
	void Set_Player_Blueprint_References();
	void Char04_Name();
	void Char03_Name();
	void Char02_Name();
	void Char01_Name();
	void Player01_Name();
	void Player04_Name();
	void Player02_Name();
	void Player03_Name();
	void Construct();
	void Anim_Player01();
	void Anim_Player02();
	void Anim_Player03();
	void Anim_Player04();
	void ExecuteUbergraph_CINE_Walkin_Widget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
