static brcmf_notify_connect_status(struct brcmf_if const struct brcmf_event_msg *e, void *data) struct brcmf_cfg80211_info * cfg = ifp -> drvr -> config ; struct net_device * ndev = ifp -> ndev ; if ( brcmf_is_apmode ( ifp -> vif ) )  static bool brcmf_is_apmode(struct brcmf_cfg80211_vif *vif) enum nl80211_iftype iftype ; iftype = vif -> wdev . iftype; return iftype == NL80211_IFTYPE_AP || iftype == NL80211_IFTYPE_P2P_GO ; if ( brcmf_is_linkup ( e ) )  static bool brcmf_is_linkup(const struct brcmf_event_msg *e) u32 event = e -> event_code ; u32 status = e -> status ; if ( event == BRCMF_E_SET_SSID && status == BRCMF_E_STATUS_SUCCESS )  return true ; return false ; if ( brcmf_is_ibssmode ( ifp -> vif ) )  static bool brcmf_is_ibssmode(struct brcmf_cfg80211_vif *vif) return vif -> wdev . iftype == NL80211_IFTYPE_ADHOC ; brcmf_bss_connect_done ( cfg , ndev , e , true ); static brcmf_bss_connect_done(struct brcmf_cfg80211_info struct net_device *ndev, const struct brcmf_event_msg bool completed) struct brcmf_if * ifp = netdev_priv ( ndev ) ; struct brcmf_cfg80211_profile * profile = & ifp -> vif -> profile ; if ( test_and_clear_bit ( BRCMF_VIF_STATUS_CONNECTING , & ifp -> vif -> sme_state ) )  if ( completed )  memcpy ( profile -> bssid , e -> addr , ETH_ALEN ); cfg80211_connect_result ( ndev , ( u8 * ) profile -> bssid , conn_info -> req_ie , conn_info -> req_ie_len , conn_info -> resp_ie , conn_info -> resp_ie_len , completed ? WLAN_STATUS_SUCCESS : WLAN_STATUS_AUTH_TIMEOUT , GFP_KERNEL ); 