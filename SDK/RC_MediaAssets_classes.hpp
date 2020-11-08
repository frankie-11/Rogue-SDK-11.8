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

// Class MediaAssets.MediaSource
// 0x0000
class UMediaSource : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}


	void Validate();
	void SetMediaOptionString();
	void SetMediaOptionInt64();
	void SetMediaOptionFloat();
	void SetMediaOptionBool();
	void GetUrl();
};


// Class MediaAssets.BaseMediaSource
// 0x5B22C480
class UBaseMediaSource : public UMediaSource
{
public:
	unsigned char                                      UnknownData00[0x5B22C480];                                // 0x0000(0x5B22C480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x2A77D80 (0x5DCA4200 - 0x5B22C480)
class UFileMediaSource : public UBaseMediaSource
{
public:
	unsigned char                                      UnknownData00[0x2A77D80];                                 // 0x5B22C480(0x2A77D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}


	void SetFilePath();
};


// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		return ptr;
	}


	void EnumerateWebcamCaptureDevices();
	void EnumerateVideoCaptureDevices();
	void EnumerateAudioCaptureDevices();
};


// Class MediaAssets.MediaComponent
// 0xD0F3E80 (0x5DCA3D00 - 0x50BAFE80)
class UMediaComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD0F3E80];                                 // 0x50BAFE80(0xD0F3E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaComponent");
		return ptr;
	}


	void GetMediaTexture();
	void GetMediaPlayer();
};


// Class MediaAssets.MediaPlayer
// 0x5DCA7480
class UMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCA7480];                                // 0x0000(0x5DCA7480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}


	void SupportsSeeking();
	void SupportsScrubbing();
	void SupportsRate();
	void SetViewRotation();
	void SetViewField();
	void SetVideoTrackFrameRate();
	void SetTrackFormat();
	void SetTimeDelay();
	void SetRate();
	void SetNativeVolume();
	void SetMediaOptions();
	void SetLooping();
	void SetDesiredPlayerName();
	void SetBlockOnTime();
	void SelectTrack();
	void Seek();
	void Rewind();
	void Reopen();
	void Previous();
	void PlayAndSeek();
	void Play();
	void Pause();
	void OpenUrl();
	void OpenSourceWithOptions();
	void OpenSourceLatent();
	void OpenSource();
	void OpenPlaylistIndex();
	void OpenPlaylist();
	void OpenFile();
	void Next();
	void IsReady();
	void IsPreparing();
	void IsPlaying();
	void IsPaused();
	void IsLooping();
	void IsConnecting();
	void IsClosed();
	void IsBuffering();
	void HasError();
	void GetViewRotation();
	void GetVideoTrackType();
	void GetVideoTrackFrameRates();
	void GetVideoTrackFrameRate();
	void GetVideoTrackDimensions();
	void GetVideoTrackAspectRatio();
	void GetVerticalFieldOfView();
	void GetUrl();
	void GetTrackLanguage();
	void GetTrackFormat();
	void GetTrackDisplayName();
	void GetTimeDelay();
	void GetTime();
	void GetSupportedRates();
	void GetSelectedTrack();
	void GetRate();
	void GetPlaylistIndex();
	void GetPlaylist();
	void GetPlayerName();
	void GetNumTracks();
	void GetNumTrackFormats();
	void GetMediaName();
	void GetLastVideoSampleProcessedTime();
	void GetLastAudioSampleProcessedTime();
	void GetHorizontalFieldOfView();
	void GetDuration();
	void GetDesiredPlayerName();
	void GetAudioTrackType();
	void GetAudioTrackSampleRate();
	void GetAudioTrackChannels();
	void Close();
	void CanPlayUrl();
	void CanPlaySource();
	void CanPause();
};


// Class MediaAssets.MediaPlaylist
// 0x5DBED4E0
class UMediaPlaylist : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBED4E0];                                // 0x0000(0x5DBED4E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}


	void Replace();
	void RemoveAt();
	void Remove();
	void Num();
	void Insert();
	void GetRandom();
	void GetPrevious();
	void GetNext();
	void Get();
	void AddUrl();
	void AddFile();
	void Add();
};


// Class MediaAssets.MediaSoundComponent
// 0x2ABBE60 (0x5DBED260 - 0x5B131400)
class UMediaSoundComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x2ABBE60];                                 // 0x5B131400(0x2ABBE60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		return ptr;
	}


	void SetSpectralAnalysisSettings();
	void SetMediaPlayer();
	void SetEnvelopeFollowingsettings();
	void SetEnableSpectralAnalysis();
	void SetEnableEnvelopeFollowing();
	void GetSpectralData();
	void GetMediaPlayer();
	void GetEnvelopeValue();
	void BP_GetAttenuationSettingsToApply();
};


// Class MediaAssets.MediaTexture
// 0xB5000 (0x5DCA9B80 - 0x5DBF4B80)
class UMediaTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xB5000];                                   // 0x5DBF4B80(0xB5000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}


	void SetMediaPlayer();
	void GetWidth();
	void GetMediaPlayer();
	void GetHeight();
	void GetAspectRatio();
};


// Class MediaAssets.PlatformMediaSource
// 0x5DCA9B00
class UPlatformMediaSource : public UMediaSource
{
public:
	unsigned char                                      UnknownData00[0x5DCA9B00];                                // 0x0000(0x5DCA9B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}

};


// Class MediaAssets.StreamMediaSource
// 0x2A7D600 (0x5DCA9A80 - 0x5B22C480)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	unsigned char                                      UnknownData00[0x2A7D600];                                 // 0x5B22C480(0x2A7D600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}

};


// Class MediaAssets.TimeSynchronizableMediaSource
// 0x2A7D480 (0x5DCA9900 - 0x5B22C480)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	unsigned char                                      UnknownData00[0x2A7D480];                                 // 0x5B22C480(0x2A7D480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.TimeSynchronizableMediaSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
