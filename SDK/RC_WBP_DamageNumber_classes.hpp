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

// WidgetBlueprintGeneratedClass WBP_DamageNumber.WBP_DamageNumber_C
// 0xFFFFFFFFC967E700 (0x27237500 - 0x5DBB8E00)
class UWBP_DamageNumber_C : public UDamageNumberDisplayWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DamageNumber.WBP_DamageNumber_C");
		return ptr;
	}


	void UpdateVisuals();
	void Handle_Shielded();
	void Handle_Immune();
	void Handle_Normal();
	void Handle_Lethal();
	void Handle_NonLeathal_Headshot();
	void Handle_Damage_Amount();
	void PlayFlourishAnimation();
	void OnDisplayInformationReset();
	void OnDisplaySpecialDamageInfo();
	void HandleFlourishFinished();
	void ExecuteUbergraph_WBP_DamageNumber();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
