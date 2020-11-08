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

// WidgetBlueprintGeneratedClass EscapeTeammatesStatus.EscapeTeammatesStatus_C
// 0xFFFFFFFFB7974880 (0x12569200 - 0x5ABF4980)
class UEscapeTeammatesStatus_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EscapeTeammatesStatus.EscapeTeammatesStatus_C");
		return ptr;
	}


	void Refresh();
	void Handle_Player_Downed_Changed();
	void Handle_Player_Death();
	void Handle_Escape_Point_Changed();
	void InitializeWidget();
	void Handle_Round_Start();
	void ExecuteUbergraph_EscapeTeammatesStatus();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
