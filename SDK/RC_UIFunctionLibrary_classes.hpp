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

// BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C
// 0x0000
class UUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C");
		return ptr;
	}


	void GetDefaultAccountItemForSlot();
	void GetInputTypeIcon();
	void GetPlatformIcon();
	void GetDamageTypeResistIcon();
	void GetRarityFormatByTag();
	void GetFontByName();
	void GetColorByName();
	void GetRarityHighlightColorByTag();
	void GetColorPalette_v2();
	void GetWeaponTypeAsText();
	void GetItemType();
	void UpdateScrollBoxOffset();
	void GetMercMasteryTypeDetails();
	void GetFormattedTimeSpan();
	void IsMatchTimerAtLeastThisUrgent();
	void GetMatchTimerVisualUrgency();
	void GetRarityValueByTag();
	void GetRarityNameByTag();
	void GetRarityColorByTag();
	void GetPlatformViewProfileText();
	void GetSelfColor();
	void GetEnemyColor();
	void GetFriendlyColor();
	void GetTextChatChannelName();
	void SetTextChatWidgetColor();
	void GetCrossplayIcon();
	void GetCashColor();
	void FormatSecondsToTimerText();
	void GetSoundLibraries();
	void GetColorForLoadoutBundle();
	void GetTextForSpecialtyCategory();
	void GetColorForSpecialtyCategory();
	void GetColorPalette();
	void GetSlateFontInfo();
	void GetMedColor();
	void GetHideAnimDefaultTime();
	void GetShowAnimDefaultTime();
	void CurrencyTypeToCurrencyIcon();
	void CurrencyIdToCurrencyIcon();
	void Get_Opposing_Team_Num();
	void GetAlignmentColors();
	void InvertColor();
	void GetIconForGamepadButton();
	void DrawCircle();
	void GetTeamName();
	void GetLargeTeamIcons();
	void GetTeamColor();
	void GetRarityColors();
	void GridIndexChecker();
	void SetUpGridNavigation();
	void LinearIndexChecker();
	void SetUpLinearNavigation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
