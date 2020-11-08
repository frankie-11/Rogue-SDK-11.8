#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass = 0,
	ESubLevelStripMode__IsChildOf  = 1,
	ESubLevelStripMode__ESubLevelStripMode_MAX = 2
};


// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid = 0,
	EFourPlayerSplitScreenType__Vertical = 1,
	EFourPlayerSplitScreenType__Horizontal = 2,
	EFourPlayerSplitScreenType__EFourPlayerSplitScreenType_MAX = 3
};


// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop = 0,
	EThreePlayerSplitScreenType__FavorBottom = 1,
	EThreePlayerSplitScreenType__Vertical = 2,
	EThreePlayerSplitScreenType__Horizontal = 3,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX = 4
};


// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal = 0,
	ETwoPlayerSplitScreenType__Vertical = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x5AFFAC80
struct FAutoCompleteCommand
{
	unsigned char                                      UnknownData00[0x5AFFAC80];                                // 0x0000(0x5AFFAC80) MISSED OFFSET
};

// ScriptStruct EngineSettings.GameModeName
// 0x5AFFAB80
struct FGameModeName
{
	unsigned char                                      UnknownData00[0x5AFFAB80];                                // 0x0000(0x5AFFAB80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
