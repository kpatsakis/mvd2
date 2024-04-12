static brcmf_cfg80211_start_ap(struct wiphy *wiphy, struct net_device struct cfg80211_ap_settings *settings) s32 ie_offset ; struct brcmf_if * ifp = netdev_priv ( ndev ) ; const struct brcmf_tlv * ssid_ie ; const struct brcmf_tlv * rsn_ie ; const struct brcmf_vs_tlv * wpa_ie ; if ( settings -> ssid == NULL || settings -> ssid_len == 0 )  ie_offset = DOT11_MGMT_HDR_LEN + DOT11_BCN_PRB_FIXED_LEN; ssid_ie = brcmf_parse_tlvs ( ( u8 * ) & settings -> beacon . head [ ie_offset ] , settings -> beacon . head_len - ie_offset , WLAN_EID_SSID ); const struct brcmf_tlv brcmf_parse_tlvs(const void *buf, int buflen, uint key) const struct brcmf_tlv * elt = buf ; int totlen = buflen ; while ( totlen >= TLV_HDR_LEN )  int len = elt -> len ; if ( ( elt -> id == key ) && ( totlen >= ( len + TLV_HDR_LEN ) ) )  return elt ; elt = ( struct brcmf_tlv * ) ( ( u8 * ) elt + ( len + TLV_HDR_LEN ) ); totlen -= ( len + TLV_HDR_LEN ); return NULL ; if ( ! ssid_ie )  rsn_ie = brcmf_parse_tlvs ( ( u8 * ) settings -> beacon . tail , settings -> beacon . tail_len , WLAN_EID_RSN ); const struct brcmf_tlv brcmf_parse_tlvs(const void *buf, int buflen, uint key) const struct brcmf_tlv * elt = buf ; int totlen = buflen ; while ( totlen >= TLV_HDR_LEN )  int len = elt -> len ; if ( ( elt -> id == key ) && ( totlen >= ( len + TLV_HDR_LEN ) ) )  return elt ; elt = ( struct brcmf_tlv * ) ( ( u8 * ) elt + ( len + TLV_HDR_LEN ) ); totlen -= ( len + TLV_HDR_LEN ); return NULL ; wpa_ie = brcmf_find_wpaie ( ( u8 * ) settings -> beacon . tail , settings -> beacon . tail_len ); static struct brcmf_vs_tlv brcmf_find_wpaie(const u8 *parse, u32 len) const struct brcmf_tlv * ie ; while ( ie = brcmf_parse_tlvs ( parse , len , WLAN_EID_VENDOR_SPECIFIC ) )  const struct brcmf_tlv brcmf_parse_tlvs(const void *buf, int buflen, uint key) const struct brcmf_tlv * elt = buf ; int totlen = buflen ; while ( totlen >= TLV_HDR_LEN )  int len = elt -> len ; if ( ( elt -> id == key ) && ( totlen >= ( len + TLV_HDR_LEN ) ) )  return elt ; elt = ( struct brcmf_tlv * ) ( ( u8 * ) elt + ( len + TLV_HDR_LEN ) ); totlen -= ( len + TLV_HDR_LEN ); return NULL ; if ( brcmf_tlv_has_ie ( ( const u8 * ) ie , & parse , & len , WPA_OUI , TLV_OUI_LEN , WPA_OUI_TYPE ) )  static brcmf_tlv_has_ie(const u8 *ie, const u8 **tlvs, u32 const u8 *oui, u32 oui_len, u8 type) if ( ie [ TLV_LEN_OFF ] >= oui_len + 1 && ! memcmp ( & ie [ TLV_BODY_OFF ] , oui , oui_len ) && type == ie [ TLV_BODY_OFF + oui_len ] )  return true ; if ( tlvs == NULL )  return false ; return false ; return ( struct brcmf_vs_tlv * ) ie ; return NULL ; if ( wpa_ie != NULL || rsn_ie != NULL )  if ( wpa_ie != NULL )  err = brcmf_configure_wpaie ( ifp , wpa_ie , false ); static brcmf_configure_wpaie(struct brcmf_if const struct brcmf_vs_tlv bool is_rsn_ie) u32 auth = 0 ; u16 count ; s32 err = 0 ; s32 len ; u32 i ; u32 wsec ; u32 pval = 0 ; u32 wpa_auth = 0 ; u32 offset ; u8 * data ; u16 rsn_cap ; u32 wme_bss_disable ; u32 mfp ; if ( wpa_ie == NULL )  len = wpa_ie -> len + TLV_HDR_LEN; data = ( u8 * ) wpa_ie; offset = TLV_HDR_LEN; if ( ! is_rsn_ie )  offset += VS_IE_FIXED_HDR_LEN; offset += WPA_IE_VERSION_LEN; if ( offset + WPA_IE_MIN_OUI_LEN > len )  err = - EINVAL; if ( ! brcmf_valid_wpa_oui ( & data [ offset ] , is_rsn_ie ) )  static bool brcmf_valid_wpa_oui(u8 *oui, bool is_rsn_ie) if ( is_rsn_ie )  return ( memcmp ( oui , RSN_OUI , TLV_OUI_LEN ) == 0 ) ; return ( memcmp ( oui , WPA_OUI , TLV_OUI_LEN ) == 0 ) ; err = - EINVAL; offset += TLV_OUI_LEN; switch ( data [ offset ] )  gval = 0; gval = WEP_ENABLED; gval = TKIP_ENABLED; gval = AES_ENABLED; err = - EINVAL; offset ++; count = data [ offset ] + ( data [ offset + 1 ] << 8 ); offset += WPA_IE_SUITE_COUNT_LEN; if ( offset + ( WPA_IE_MIN_OUI_LEN * count ) > len )  err = - EINVAL; for (i = 0; i < count; i++) if ( ! brcmf_valid_wpa_oui ( & data [ offset ] , is_rsn_ie ) )  static bool brcmf_valid_wpa_oui(u8 *oui, bool is_rsn_ie) if ( is_rsn_ie )  return ( memcmp ( oui , RSN_OUI , TLV_OUI_LEN ) == 0 ) ; return ( memcmp ( oui , WPA_OUI , TLV_OUI_LEN ) == 0 ) ; err = - EINVAL; offset += TLV_OUI_LEN; switch ( data [ offset ] )  pval |= WEP_ENABLED; pval |= TKIP_ENABLED; pval |= AES_ENABLED; offset ++; count = data [ offset ] + ( data [ offset + 1 ] << 8 ); offset += WPA_IE_SUITE_COUNT_LEN; if ( offset + ( WPA_IE_MIN_OUI_LEN * count ) > len )  err = - EINVAL; for (i = 0; i < count; i++) if ( ! brcmf_valid_wpa_oui ( & data [ offset ] , is_rsn_ie ) )  static bool brcmf_valid_wpa_oui(u8 *oui, bool is_rsn_ie) if ( is_rsn_ie )  return ( memcmp ( oui , RSN_OUI , TLV_OUI_LEN ) == 0 ) ; return ( memcmp ( oui , WPA_OUI , TLV_OUI_LEN ) == 0 ) ; err = - EINVAL; offset += TLV_OUI_LEN; switch ( data [ offset ] )  wpa_auth |= WPA_AUTH_NONE; is_rsn_ie ? ( wpa_auth |= WPA2_AUTH_UNSPECIFIED ) : ( wpa_auth |= WPA_AUTH_UNSPECIFIED ); is_rsn_ie ? ( wpa_auth |= WPA2_AUTH_PSK ) : ( wpa_auth |= WPA_AUTH_PSK ); wpa_auth |= WPA2_AUTH_PSK_SHA256; wpa_auth |= WPA2_AUTH_1X_SHA256; offset ++; mfp = BRCMF_MFP_NONE; if ( is_rsn_ie )  wme_bss_disable = 1; if ( ( offset + RSN_CAP_LEN ) <= len )  rsn_cap = data [ offset ] + ( data [ offset + 1 ] << 8 ); if ( rsn_cap & RSN_CAP_PTK_REPLAY_CNTR_MASK )  wme_bss_disable = 0; if ( rsn_cap & RSN_CAP_MFPR_MASK )  mfp = BRCMF_MFP_REQUIRED; if ( ! ( wpa_auth & ( WPA2_AUTH_PSK_SHA256 | WPA2_AUTH_1X_SHA256 ) ) )  err = - EINVAL; if ( wpa_auth & WPA2_AUTH_PSK_SHA256 )  wpa_auth |= WPA2_AUTH_PSK; if ( wpa_auth & WPA2_AUTH_1X_SHA256 )  wpa_auth |= WPA2_AUTH_UNSPECIFIED; if ( rsn_cap & RSN_CAP_MFPC_MASK )  mfp = BRCMF_MFP_CAPABLE; offset += RSN_CAP_LEN; err = brcmf_fil_bsscfg_int_set ( ifp , "wme_bss_disable" , wme_bss_disable ); if ( err < 0 )  offset += RSN_PMKID_COUNT_LEN; if ( brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_MFP ) && ( ( offset + WPA_IE_MIN_OUI_LEN ) <= len ) )  err = brcmf_fil_bsscfg_data_set ( ifp , "bip" , & data [ offset ] , WPA_IE_MIN_OUI_LEN ); if ( err < 0 )  wsec = ( pval | gval | SES_OW_ENABLED ); err = brcmf_fil_bsscfg_int_set ( ifp , "auth" , auth ); if ( err < 0 )  err = brcmf_fil_bsscfg_int_set ( ifp , "wsec" , wsec ); if ( err < 0 )  if ( brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_MFP ) )  err = brcmf_fil_bsscfg_int_set ( ifp , "mfp" , mfp ); if ( err < 0 )  err = brcmf_fil_bsscfg_int_set ( ifp , "wpa_auth" , wpa_auth ); return err ; if ( err < 0 )  struct brcmf_vs_tlv * tmp_ie ; tmp_ie = ( struct brcmf_vs_tlv * ) rsn_ie; err = brcmf_configure_wpaie ( ifp , tmp_ie , true ); static brcmf_configure_wpaie(struct brcmf_if const struct brcmf_vs_tlv bool is_rsn_ie) u32 auth = 0 ; u16 count ; s32 err = 0 ; s32 len ; u32 i ; u32 wsec ; u32 pval = 0 ; u32 wpa_auth = 0 ; u32 offset ; u8 * data ; u16 rsn_cap ; u32 wme_bss_disable ; u32 mfp ; if ( wpa_ie == NULL )  len = wpa_ie -> len + TLV_HDR_LEN; data = ( u8 * ) wpa_ie; offset = TLV_HDR_LEN; if ( ! is_rsn_ie )  offset += VS_IE_FIXED_HDR_LEN; offset += WPA_IE_VERSION_LEN; if ( offset + WPA_IE_MIN_OUI_LEN > len )  err = - EINVAL; if ( ! brcmf_valid_wpa_oui ( & data [ offset ] , is_rsn_ie ) )  err = - EINVAL; offset += TLV_OUI_LEN; switch ( data [ offset ] )  gval = 0; gval = WEP_ENABLED; gval = TKIP_ENABLED; gval = AES_ENABLED; err = - EINVAL; offset ++; count = data [ offset ] + ( data [ offset + 1 ] << 8 ); offset += WPA_IE_SUITE_COUNT_LEN; if ( offset + ( WPA_IE_MIN_OUI_LEN * count ) > len )  err = - EINVAL; if ( ! brcmf_valid_wpa_oui ( & data [ offset ] , is_rsn_ie ) )  err = - EINVAL; offset += TLV_OUI_LEN; switch ( data [ offset ] )  pval |= WEP_ENABLED; pval |= TKIP_ENABLED; pval |= AES_ENABLED; offset ++; count = data [ offset ] + ( data [ offset + 1 ] << 8 ); offset += WPA_IE_SUITE_COUNT_LEN; if ( offset + ( WPA_IE_MIN_OUI_LEN * count ) > len )  err = - EINVAL; if ( ! brcmf_valid_wpa_oui ( & data [ offset ] , is_rsn_ie ) )  err = - EINVAL; offset += TLV_OUI_LEN; switch ( data [ offset ] )  wpa_auth |= WPA_AUTH_NONE; is_rsn_ie ? ( wpa_auth |= WPA2_AUTH_UNSPECIFIED ) : ( wpa_auth |= WPA_AUTH_UNSPECIFIED ); is_rsn_ie ? ( wpa_auth |= WPA2_AUTH_PSK ) : ( wpa_auth |= WPA_AUTH_PSK ); wpa_auth |= WPA2_AUTH_PSK_SHA256; wpa_auth |= WPA2_AUTH_1X_SHA256; offset ++; mfp = BRCMF_MFP_NONE; if ( is_rsn_ie )  wme_bss_disable = 1; if ( ( offset + RSN_CAP_LEN ) <= len )  rsn_cap = data [ offset ] + ( data [ offset + 1 ] << 8 ); if ( rsn_cap & RSN_CAP_PTK_REPLAY_CNTR_MASK )  wme_bss_disable = 0; if ( rsn_cap & RSN_CAP_MFPR_MASK )  mfp = BRCMF_MFP_REQUIRED; if ( ! ( wpa_auth & ( WPA2_AUTH_PSK_SHA256 | WPA2_AUTH_1X_SHA256 ) ) )  err = - EINVAL; if ( wpa_auth & WPA2_AUTH_PSK_SHA256 )  wpa_auth |= WPA2_AUTH_PSK; if ( wpa_auth & WPA2_AUTH_1X_SHA256 )  wpa_auth |= WPA2_AUTH_UNSPECIFIED; if ( rsn_cap & RSN_CAP_MFPC_MASK )  mfp = BRCMF_MFP_CAPABLE; offset += RSN_CAP_LEN; err = brcmf_fil_bsscfg_int_set ( ifp , "wme_bss_disable" , wme_bss_disable ); if ( err < 0 )  offset += RSN_PMKID_COUNT_LEN; if ( brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_MFP ) && ( ( offset + WPA_IE_MIN_OUI_LEN ) <= len ) )  err = brcmf_fil_bsscfg_data_set ( ifp , "bip" , & data [ offset ] , WPA_IE_MIN_OUI_LEN ); if ( err < 0 )  wsec = ( pval | gval | SES_OW_ENABLED ); err = brcmf_fil_bsscfg_int_set ( ifp , "auth" , auth ); if ( err < 0 )  err = brcmf_fil_bsscfg_int_set ( ifp , "wsec" , wsec ); if ( err < 0 )  if ( brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_MFP ) )  err = brcmf_fil_bsscfg_int_set ( ifp , "mfp" , mfp ); if ( err < 0 )  err = brcmf_fil_bsscfg_int_set ( ifp , "wpa_auth" , wpa_auth ); return err ; if ( err < 0 )  brcmf_config_ap_mgmt_ie ( ifp -> vif , & settings -> beacon ); static brcmf_config_ap_mgmt_ie(struct brcmf_cfg80211_vif struct cfg80211_beacon_data *beacon) s32 err ; err = brcmf_vif_set_mgmt_ie ( vif , BRCMF_VNDR_IE_BEACON_FLAG , beacon -> tail , beacon -> tail_len ); s32 brcmf_vif_set_mgmt_ie(struct brcmf_cfg80211_vif *vif, s32 const u8 *vndr_ie_buf, u32 vndr_ie_len) struct vif_saved_ie * saved_ie ; u8 * iovar_ie_buf ; u8 * curr_ie_buf ; int mgmt_ie_buf_len ; u32 * mgmt_ie_len ; u32 parsed_ie_buf_len = 0 ; struct parsed_vndr_ies old_vndr_ies ; struct parsed_vndr_ies new_vndr_ies ; struct parsed_vndr_ie_info * vndrie_info ; s32 i ; int remained_buf_len ; if ( ! vif )  saved_ie = & vif -> saved_ie; iovar_ie_buf = kzalloc ( WL_EXTRA_BUF_MAX , GFP_KERNEL ); if ( ! iovar_ie_buf )  curr_ie_buf = iovar_ie_buf; switch ( pktflag )  mgmt_ie_buf = saved_ie -> probe_req_ie; mgmt_ie_len = & saved_ie -> probe_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_req_ie ); mgmt_ie_buf = saved_ie -> probe_res_ie; mgmt_ie_len = & saved_ie -> probe_res_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_res_ie ); mgmt_ie_buf = saved_ie -> beacon_ie; mgmt_ie_len = & saved_ie -> beacon_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> beacon_ie ); mgmt_ie_buf = saved_ie -> assoc_req_ie; mgmt_ie_len = & saved_ie -> assoc_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> assoc_req_ie ); if ( vndr_ie_len > mgmt_ie_buf_len )  if ( vndr_ie_buf && vndr_ie_len && curr_ie_buf )  for (i = 0; i < new_vndr_ies.count; i++) vndrie_info = & new_vndr_ies . ie_info [ i ]; parsed_ie_buf_len += vndrie_info -> ie_len; if ( mgmt_ie_buf && * mgmt_ie_len )  if ( parsed_ie_buf_len && ( parsed_ie_buf_len == * mgmt_ie_len ) && ( memcmp ( mgmt_ie_buf , curr_ie_buf , parsed_ie_buf_len ) == 0 ) )  for (i = 0; i < old_vndr_ies.count; i++) vndrie_info = & old_vndr_ies . ie_info [ i ]; del_add_ie_buf_len = brcmf_vndr_ie ( curr_ie_buf , pktflag , vndrie_info -> ie_ptr , vndrie_info -> ie_len , "del" ); curr_ie_buf += del_add_ie_buf_len; if ( mgmt_ie_buf && parsed_ie_buf_len )  remained_buf_len = mgmt_ie_buf_len; for (i = 0; i < new_vndr_ies.count; i++) vndrie_info = & new_vndr_ies . ie_info [ i ]; if ( remained_buf_len < ( vndrie_info -> vndrie . len + VNDR_IE_VSIE_OFFSET ) )  remained_buf_len -= ( vndrie_info -> ie_len + VNDR_IE_VSIE_OFFSET ); del_add_ie_buf_len = brcmf_vndr_ie ( curr_ie_buf , pktflag , vndrie_info -> ie_ptr , vndrie_info -> ie_len , "add" ); curr_ie_buf += del_add_ie_buf_len; static brcmf_vndr_ie(u8 *iebuf, s32 pktflag, u8 *ie_ptr, u32 ie_len, s8 *add_del_cmd) strncpy ( iebuf , add_del_cmd , VNDR_IE_CMD_LEN - 1 ); iebuf [ VNDR_IE_CMD_LEN - 1 ] = '\0'; put_unaligned_le32 ( 1 , & iebuf [ VNDR_IE_COUNT_OFFSET ] ); put_unaligned_le32 ( pktflag , & iebuf [ VNDR_IE_PKTFLAG_OFFSET ] ); memcpy ( & iebuf [ VNDR_IE_VSIE_OFFSET ] , ie_ptr , ie_len ); 