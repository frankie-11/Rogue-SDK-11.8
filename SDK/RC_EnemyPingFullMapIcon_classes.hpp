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

// WidgetBlueprintGeneratedClass EnemyPingFullMapIcon.EnemyPingFullMapIcon_C
// 0xFFFFFFFFB4A15180 (0x12558D80 - 0x5DB43C00)
class UEnemyPingFullMapIcon_C : public UKSMapIconWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EnemyPingFullMapIcon.EnemyPingFullMapIcon_C");
		return ptr;
	}


	void GetWorldPosition();
	void GetPingType();
	void Construct();
	void Start_Ping();
	void Re_Ping();
	void ExecuteUbergraph_EnemyPingFullMapIcon();
	void PingExpired__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
