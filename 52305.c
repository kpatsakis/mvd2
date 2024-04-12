static brcmf_cfg80211_add_key(struct wiphy *wiphy, struct net_device u8 key_idx, bool pairwise, const u8 struct key_params *params) struct brcmf_if * ifp = netdev_priv ( ndev ) ; struct brcmf_wsec_key * key ; u8 keybuf [ 8 ] ; bool ext_key ; if ( ! check_vif_up ( ifp -> vif ) )  static bool check_vif_up(struct brcmf_cfg80211_vif *vif) if ( ! test_bit ( BRCMF_VIF_STATUS_READY , & vif -> sme_state ) )  return false ; return true ; if ( key_idx >= BRCMF_MAX_DEFAULT_KEYS )  if ( params -> key_len == 0 )  if ( params -> key_len > sizeof ( key -> data ) )  ext_key = false; if ( mac_addr && ( params -> cipher != WLAN_CIPHER_SUITE_WEP40 ) && ( params -> cipher != WLAN_CIPHER_SUITE_WEP104 ) )  ext_key = true; key = & ifp -> vif -> profile . key [ key_idx ]; memset ( key , 0 , sizeof ( * key ) ); if ( ( ext_key ) && ( ! is_multicast_ether_addr ( mac_addr ) ) )  memcpy ( ( char * ) & key -> ea , ( void * ) mac_addr , ETH_ALEN ); key -> len = params -> key_len; key -> index = key_idx; memcpy ( key -> data , params -> key , key -> len ); if ( ! ext_key )  key -> flags = BRCMF_PRIMARY_KEY; switch ( params -> cipher )  key -> algo = CRYPTO_ALGO_WEP1; key -> algo = CRYPTO_ALGO_WEP128; if ( ! brcmf_is_apmode ( ifp -> vif ) )  static bool brcmf_is_apmode(struct brcmf_cfg80211_vif *vif) enum nl80211_iftype iftype ; iftype = vif -> wdev . iftype; return iftype == NL80211_IFTYPE_AP || iftype == NL80211_IFTYPE_P2P_GO ; memcpy ( keybuf , & key -> data [ 24 ] , sizeof ( keybuf ) ); memcpy ( & key -> data [ 24 ] , & key -> data [ 16 ] , sizeof ( keybuf ) ); memcpy ( & key -> data [ 16 ] , keybuf , sizeof ( keybuf ) ); key -> algo = CRYPTO_ALGO_TKIP; key -> algo = CRYPTO_ALGO_AES_CCM; key -> algo = CRYPTO_ALGO_AES_CCM; err = send_key_to_dongle ( ifp , key ); static send_key_to_dongle(struct brcmf_if *ifp, struct brcmf_wsec_key *key) convert_key_from_CPU ( key , & key_le ); static void convert_key_from_CPU(struct brcmf_wsec_key struct brcmf_wsec_key_le *key_le) key_le -> index = cpu_to_le32 ( key -> index ); key_le -> len = cpu_to_le32 ( key -> len ); key_le -> algo = cpu_to_le32 ( key -> algo ); key_le -> flags = cpu_to_le32 ( key -> flags ); key_le -> rxiv . hi = cpu_to_le32 ( key -> rxiv . hi ); key_le -> rxiv . lo = cpu_to_le16 ( key -> rxiv . lo ); key_le -> iv_initialized = cpu_to_le32 ( key -> iv_initialized ); memcpy ( key_le -> data , key -> data , sizeof ( key -> data ) ); memcpy ( key_le -> ea , key -> ea , sizeof ( key -> ea ) ); brcmf_netdev_wait_pend8021x ( ifp ); err = brcmf_fil_bsscfg_data_set ( ifp , "wsec_key" , & key_le , sizeof ( key_le ) ); if ( err )  brcmf_err ( "wsec_key error (%d)\n" , err ); return err ; if ( ext_key || err )  if ( err )  brcmf_err ( "get wsec error (%d)\n" , err ); if ( err )  brcmf_err ( "set wsec error (%d)\n" , err ); return err ; 