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

// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C
// 0xFFFFFFFFCE892780 (0x29487100 - 0x5ABF4980)
class UWBP_PlayerIdentity_Full_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C");
		return ptr;
	}


	void Update_Title();
	void Set_From_Player_Info();
	void Update_Border();
	void Update_Banner();
	void Update_Avatar();
	void Update_Level();
	void Update_Current_Name();
	void Set_From_Player_State();
	void Apply_Layout_Type();
	void SetInitialView();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_PlayerIdentity_Full();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
