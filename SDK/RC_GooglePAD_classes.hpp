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

// Class GooglePAD.GooglePADFunctionLibrary
// 0x0000
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GooglePAD.GooglePADFunctionLibrary");
		return ptr;
	}


	void ShowCellularDataConfirmation();
	void RequestRemoval();
	void RequestInfo();
	void RequestDownload();
	void ReleaseDownloadState();
	void ReleaseAssetPackLocation();
	void GetTotalBytesToDownload();
	void GetStorageMethod();
	void GetShowCellularDataConfirmationStatus();
	void GetDownloadStatus();
	void GetDownloadState();
	void GetBytesDownloaded();
	void GetAssetsPath();
	void GetAssetPackLocation();
	void CancelDownload();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
