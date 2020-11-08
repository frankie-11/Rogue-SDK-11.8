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

// BlueprintGeneratedClass MinimapRenderer.MinimapRenderer_C
// 0x2B7E8F80
class AMinimapRenderer_C : public AKSMinimapRendererBase
{
public:
	unsigned char                                      UnknownData00[0x2B7E8F80];                                // 0x0000(0x2B7E8F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinimapRenderer.MinimapRenderer_C");
		return ptr;
	}


	void GetMinimapWidth();
	void UserConstructionScript();
	void OnLoaded_1F80951A45CA8E54458A18AA362E670C();
	void _3_CaptureMinimap();
	void _1_LoadMinimapTexture();
	void _5_ResetVRAM();
	void _4_SaveToTexture();
	void _2_PrepareRenderTarget();
	void ExecuteUbergraph_MinimapRenderer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
