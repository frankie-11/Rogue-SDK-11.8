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

// Class OnlineSubsystemUtils.IpConnection
// 0x6E1C0 (0x5B107C80 - 0x5B099AC0)
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x6E1C0];                                   // 0x5B099AC0(0x6E1C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}


	void GetCachedAchievementProgress();
	void GetCachedAchievementDescription();
};


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x5B108A00
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B108A00];                                // 0x0000(0x5B108A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}


	void CacheAchievements();
	void CacheAchievementDescriptions();
};


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x5B108600
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B108600];                                // 0x0000(0x5B108600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}


	void WriteAchievementProgress();
};


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x5B10A480
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B10A480];                                // 0x0000(0x5B10A480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}


	void ConnectToService();
};


// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x5B10A100
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B10A100];                                // 0x0000(0x5B10A100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}


	void CreateSession();
};


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x5B109E80
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B109E80];                                // 0x0000(0x5B109E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}


	void DestroySession();
};


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x5B109A00
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B109A00];                                // 0x0000(0x5B109A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}


	void EndMatch();
};


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x5B109680
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B109680];                                // 0x0000(0x5B109680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}


	void EndTurn();
};


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x5B10B000
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B10B000];                                // 0x0000(0x5B10B000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}


	void GetServerName();
	void GetPingInMs();
	void GetMaxPlayers();
	void GetCurrentPlayers();
	void FindSessions();
};


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x5B10AB00
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B10AB00];                                // 0x0000(0x5B10AB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}


	void FindTurnBasedMatch();
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x5B10A880
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10A880];                                // 0x0000(0x5B10A880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}


	void CreateProxyObjectForInAppPurchase();
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// 0x5B10C500
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10C500];                                // 0x0000(0x5B10C500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2");
		return ptr;
	}


	void CreateProxyObjectForInAppPurchaseUnprocessedPurchases();
	void CreateProxyObjectForInAppPurchaseQueryOwned();
	void CreateProxyObjectForInAppPurchase();
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x5B10C280
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10C280];                                // 0x0000(0x5B10C280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}


	void CreateProxyObjectForInAppPurchaseQuery();
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// 0x5B10C000
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10C000];                                // 0x0000(0x5B10C000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2");
		return ptr;
	}


	void CreateProxyObjectForInAppPurchaseQuery();
};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x5B10BD80
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10BD80];                                // 0x0000(0x5B10BD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}


	void CreateProxyObjectForInAppPurchaseRestore();
};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// 0x5B10BB00
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10BB00];                                // 0x0000(0x5B10BB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2");
		return ptr;
	}


	void CreateProxyObjectForInAppPurchaseRestore();
};


// Class OnlineSubsystemUtils.IpNetDriver
// 0xFFFFFFFFFFFFFB00 (0x5B10C880 - 0x5B10CD80)
class UIpNetDriver : public UNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x5B10E680
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B10E680];                                // 0x0000(0x5B10E680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}


	void JoinSession();
};


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}


	void WriteLeaderboardInteger();
};


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x5B10E200
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10E200];                                // 0x0000(0x5B10E200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}


	void CreateProxyObjectForFlush();
};


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x5B10DF80
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10DF80];                                // 0x0000(0x5B10DF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}


	void CreateProxyObjectForIntQuery();
};


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x5B10DD00
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x5B10DD00];                                // 0x0000(0x5B10DD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}


	void Logout();
};


// Class OnlineSubsystemUtils.OnlineBeacon
// 0x16FB80 (0x5B10DB80 - 0x5AF9E000)
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x16FB80];                                  // 0x5AF9E000(0x16FB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0xFFFFFFFFFFFFFE80 (0x5B10DA00 - 0x5B10DB80)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}


	void ClientOnConnected();
};


// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0xFFFFFFFFFFFFFD80 (0x5B10D900 - 0x5B10DB80)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x16F800 (0x5B10D800 - 0x5AF9E000)
class AOnlineBeaconHostObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0x16F800];                                  // 0x5AF9E000(0x16F800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x5B10D780
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	unsigned char                                      UnknownData00[0x5B10D780];                                // 0x0000(0x5B10D780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x5B10F780
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5B10F780];                                // 0x0000(0x5B10F780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x5B10F680
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData00[0x5B10F680];                                // 0x0000(0x5B10F680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x1500 (0x5B10EF00 - 0x5B10DA00)
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x1500];                                    // 0x5B10DA00(0x1500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}


	void ServerUpdateReservationRequest();
	void ServerReservationRequest();
	void ServerRemoveMemberFromReservationRequest();
	void ServerCancelReservationRequest();
	void ClientSendReservationUpdates();
	void ClientSendReservationFull();
	void ClientReservationResponse();
	void ClientCancelReservationResponse();
};


// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x1500 (0x5B10ED00 - 0x5B10D800)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x1500];                                    // 0x5B10D800(0x1500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconState
// 0x5B10E780
class UPartyBeaconState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10E780];                                // 0x0000(0x5B10E780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x5B10FC00
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5B10FC00];                                // 0x0000(0x5B10FC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}


	void QuitMatch();
};


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x5B10F980
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x5B10F980];                                // 0x0000(0x5B10F980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}


	void ShowExternalLoginUI();
};


// Class OnlineSubsystemUtils.SpectatorBeaconClient
// 0x23300 (0x5B130D00 - 0x5B10DA00)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x23300];                                   // 0x5B10DA00(0x23300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconClient");
		return ptr;
	}


	void ServerReservationRequest();
	void ServerCancelReservationRequest();
	void ClientSendReservationUpdates();
	void ClientSendReservationFull();
	void ClientReservationResponse();
	void ClientCancelReservationResponse();
};


// Class OnlineSubsystemUtils.SpectatorBeaconHost
// 0x23300 (0x5B130B00 - 0x5B10D800)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x23300];                                   // 0x5B10D800(0x23300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.SpectatorBeaconState
// 0x5B130880
class USpectatorBeaconState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B130880];                                // 0x0000(0x5B130880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconState");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.TestBeaconClient
// 0xFFFFFFFFA4EF2600 (0x0000 - 0x5B10DA00)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}


	void ServerPong();
	void ClientPing();
};


// Class OnlineSubsystemUtils.TestBeaconHost
// 0xFFFFFFFFA4EF2800 (0x0000 - 0x5B10D800)
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}


	void RegisterTurnBasedMatchInterfaceObject();
	void GetPlayerDisplayName();
	void GetMyPlayerIndex();
	void GetIsMyTurn();
};


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0xFFFFFFFFA4ECEC00 (0x0000 - 0x5B131400)
class UVoipListenerSynthComponent : public USynthComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		return ptr;
	}


	void IsIdling();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
