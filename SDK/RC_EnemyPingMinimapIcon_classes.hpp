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

// WidgetBlueprintGeneratedClass EnemyPingMinimapIcon.EnemyPingMinimapIcon_C
// 0xFFFFFFFFB4A14600 (0x12558200 - 0x5DB43C00)
class UEnemyPingMinimapIcon_C : public UKSMapIconWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EnemyPingMinimapIcon.EnemyPingMinimapIcon_C");
		return ptr;
	}


	void GetWorldPosition();
	void Construct();
	void Re_Ping();
	void UpdateMeetsHeightThreshold();
	void ExecuteUbergraph_EnemyPingMinimapIcon();
	void PingExpired__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
