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

// Class MovieScene.MovieSceneSignedObject
// 0x5B1A9D00
class UMovieSceneSignedObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A9D00];                                // 0x0000(0x5B1A9D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x1100 (0x5B1AAE00 - 0x5B1A9D00)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	unsigned char                                      UnknownData00[0x1100];                                    // 0x5B1A9D00(0x1100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}


	void SetRowIndex();
	void SetPreRollFrames();
	void SetPostRollFrames();
	void SetOverlapPriority();
	void SetIsLocked();
	void SetIsActive();
	void SetCompletionMode();
	void SetBlendType();
	void IsLocked();
	void IsActive();
	void GetRowIndex();
	void GetPreRollFrames();
	void GetPostRollFrames();
	void GetOverlapPriority();
	void GetCompletionMode();
	void GetBlendType();
};


// Class MovieScene.MovieSceneTrack
// 0x0C80 (0x5B1AA980 - 0x5B1A9D00)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	unsigned char                                      UnknownData00[0xC80];                                     // 0x5B1A9D00(0x0C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0xFFFFFFFFA4E55680 (0x0000 - 0x5B1AA980)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x82D00 (0x5B22CA00 - 0x5B1A9D00)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	unsigned char                                      UnknownData00[0x82D00];                                   // 0x5B1A9D00(0x82D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}


	void FindBindingsByTag();
	void FindBindingByTag();
};


// Class MovieScene.MovieSceneSequencePlayer
// 0x5B22EA00
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B22EA00];                                // 0x0000(0x5B22EA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}


	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange();
	void SetPlayRate();
	void SetPlaybackRange();
	void SetPlaybackPosition();
	void SetFrameRate();
	void SetFrameRange();
	void SetDisableCameraCuts();
	void ScrubToSeconds();
	void ScrubToMarkedFrame();
	void ScrubToFrame();
	void Scrub();
	void RPC_OnStopEvent();
	void RPC_ExplicitServerUpdateEvent();
	void PlayToSeconds();
	void PlayToMarkedFrame();
	void PlayToFrame();
	void PlayReverse();
	void PlayLooping();
	void Play();
	void Pause();
	void JumpToSeconds();
	void JumpToPosition();
	void JumpToMarkedFrame();
	void JumpToFrame();
	void IsReversed();
	void IsPlaying();
	void IsPaused();
	void GoToEndAndStop();
	void GetStartTime();
	void GetPlayRate();
	void GetPlaybackStart();
	void GetPlaybackPosition();
	void GetPlaybackEnd();
	void GetObjectBindings();
	void GetLength();
	void GetFrameRate();
	void GetFrameDuration();
	void GetEndTime();
	void GetDuration();
	void GetDisableCameraCuts();
	void GetCurrentTime();
	void GetBoundObjects();
	void ChangePlaybackDirection();
};


// Class MovieScene.MovieSceneSubSection
// 0x95F80 (0x5B240D80 - 0x5B1AAE00)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x95F80];                                   // 0x5B1AAE00(0x95F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}


	void SetSequence();
	void GetSequence();
};


// Class MovieScene.MovieSceneSubTrack
// 0x5B233260
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x5B233260];                                // 0x0000(0x5B233260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneCustomClockSource
// 0x0000
class UMovieSceneCustomClockSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneCustomClockSource");
		return ptr;
	}


	void OnTick();
	void OnStopPlaying();
	void OnStartPlaying();
	void OnRequestCurrentTime();
};


// Class MovieScene.MovieScenePlaybackClient
// 0x0000
class UMovieScenePlaybackClient : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x2A3BE00 (0x5DBE5B00 - 0x5B1A9D00)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	unsigned char                                      UnknownData00[0x2A3BE00];                                 // 0x5B1A9D00(0x2A3BE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x5DBE5A60
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBE5A60];                                // 0x0000(0x5DBE5A60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x5DBE59C0
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBE59C0];                                // 0x0000(0x5DBE59C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingExternalCurve
// 0x5DC1F300
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC1F300];                                // 0x0000(0x5DC1F300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingFunction
// 0x0000
class UMovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}


	void OnEvaluate();
};


// Class MovieScene.MovieSceneFolder
// 0x5DC1F000
class UMovieSceneFolder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC1F000];                                // 0x0000(0x5DC1F000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}

};


// Class MovieScene.MovieSceneKeyProxy
// 0x0000
class UMovieSceneKeyProxy : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneTrack
// 0x2A74580 (0x5DC1EF00 - 0x5B1AA980)
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x2A74580];                                 // 0x5B1AA980(0x2A74580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSection
// 0xFFFFFFFFA4E55200 (0x0000 - 0x5B1AAE00)
class UTestMovieSceneSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSequence
// 0x29F2480 (0x5DC1EE80 - 0x5B22CA00)
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x29F2480];                                 // 0x5B22CA00(0x29F2480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSubTrack
// 0x29B2440 (0x5DBE56A0 - 0x5B233260)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	unsigned char                                      UnknownData00[0x29B2440];                                 // 0x5B233260(0x29B2440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubTrack");
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSubSection
// 0xFFFFFFFFA4DBF280 (0x0000 - 0x5B240D80)
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubSection");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
