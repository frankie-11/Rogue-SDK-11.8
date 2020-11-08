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

// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C
// 0xFFFFFFFFD197B480 (0x2C56FE00 - 0x5ABF4980)
class UWBP_QuickPlay_QueueTypeSection_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C");
		return ptr;
	}


	void SortQueues();
	void ResetQueueButtons();
	void GetQueueButtons();
	void PopulateSection();
	void Construct();
	void HandleOnQueueClicked();
	void HandleOnQueueHovered();
	void HandleOnQueueUnhovered();
	void HandleCustomBtnHovered();
	void HandleCustomBtnUnhovered();
	void HandleCustomBtnClicked();
	void ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection();
	void OnCustomMatchPopulated__DelegateSignature();
	void OnCustomMatchSelected__DelegateSignature();
	void OnQueuePopulated__DelegateSignature();
	void OnQueueUnhovered__DelegateSignature();
	void OnQueueHovered__DelegateSignature();
	void OnQueueSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
