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

// WidgetBlueprintGeneratedClass WBP_news_screen.WBP_news_screen_C
// 0x2A62C500
class UWBP_news_screen_C : public UKSWhatsNewModal
{
public:
	unsigned char                                      UnknownData00[0x2A62C500];                                // 0x0000(0x2A62C500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_news_screen.WBP_news_screen_C");
		return ptr;
	}


	void GoBack();
	void HandleInputModeChanged();
	void PopulateNewsCards();
	void PreConstruct();
	void InitializeWidget();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void HandleCloseHovered();
	void HandleCLoseUnhovered();
	void InitializeWidgetNavigation();
	void OnJsonChanged();
	void HandleLoginStateChange();
	void OnShown();
	void OnHide();
	void Destruct();
	void ExecuteUbergraph_WBP_news_screen();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
