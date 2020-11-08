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

// WidgetBlueprintGeneratedClass ExpElement.ExpElement_C
// 0xFFFFFFFFC8397980 (0x22F87C00 - 0x5ABF0280)
class UExpElement_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExpElement.ExpElement_C");
		return ptr;
	}


	void Construct();
	void WidgetAnimationEvt_SlideIn_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2();
	void HandleAnimFinished();
	void ExecuteUbergraph_ExpElement();
	void OnAnimFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
