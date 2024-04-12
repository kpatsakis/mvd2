int CVE_2013_4514_VULN_wvlan_uil_put_info(struct uilreq *urq, struct wl_private *lp) ltv_t * pLtv ; if ( urq -> hcfCtx == & ( lp -> hcfCtx ) )  if ( capable ( CAP_NET_ADMIN ) )  if ( ( urq -> data != NULL ) && ( urq -> len != 0 ) )  if ( urq -> len < ( sizeof ( hcf_16 ) * 2 ) )  urq -> len = sizeof ( lp -> ltvRecord ); urq -> result = UIL_ERR_LEN; result = verify_area ( VERIFY_READ , urq -> data , urq -> len ); if ( result != 0 )  urq -> result = UIL_FAILURE; if ( ( ( lp -> ltvRecord . len + 1 ) * sizeof ( hcf_16 ) ) > urq -> len )  urq -> len = sizeof ( lp -> ltvRecord ); urq -> result = UIL_ERR_LEN; if ( urq -> len > sizeof ( lp -> ltvRecord ) )  pLtv = kmalloc ( urq -> len , GFP_KERNEL ); if ( pLtv != NULL )  pLtv = & ( lp -> ltvRecord ); switch ( pLtv -> typ )  lp -> PortType = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> Channel = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> atimWindow = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> DistanceBetweenAPs = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> PMEnabled = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> MulticastReceive = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> MaxSleepDuration = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> holdoverDuration = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); memset ( lp -> StationName , 0 , sizeof ( lp -> StationName ) ); memcpy ( ( void * ) lp -> StationName , ( void * ) & pLtv -> u . u8 [ 2 ] , ( size_t ) pLtv -> u . u16 [ 0 ] ); lp -> loadBalancing = pLtv -> u . u16 [ 0 ]; lp -> mediumDistribution = pLtv -> u . u16 [ 0 ]; lp -> txPowLevel = pLtv -> u . u16 [ 0 ]; lp -> srsc [ 0 ] = pLtv -> u . u16 [ 0 ]; lp -> srsc [ 1 ] = pLtv -> u . u16 [ 1 ]; lp -> brsc [ 0 ] = pLtv -> u . u16 [ 0 ]; lp -> brsc [ 1 ] = pLtv -> u . u16 [ 1 ]; lp -> connectionControl = pLtv -> u . u16 [ 0 ]; lp -> DTIMPeriod = pLtv -> u . u16 [ 0 ]; lp -> ownBeaconInterval = pLtv -> u . u16 [ 0 ]; lp -> coexistence = pLtv -> u . u16 [ 0 ]; memcpy ( & lp -> wds_port [ 0 ] . wdsAddress , & pLtv -> u . u8 [ 0 ] , ETH_ALEN ); memcpy ( & lp -> wds_port [ 1 ] . wdsAddress , & pLtv -> u . u8 [ 0 ] , ETH_ALEN ); memcpy ( & lp -> wds_port [ 2 ] . wdsAddress , & pLtv -> u . u8 [ 0 ] , ETH_ALEN ); memcpy ( & lp -> wds_port [ 3 ] . wdsAddress , & pLtv -> u . u8 [ 0 ] , ETH_ALEN ); memcpy ( & lp -> wds_port [ 4 ] . wdsAddress , & pLtv -> u . u8 [ 0 ] , ETH_ALEN ); memcpy ( & lp -> wds_port [ 5 ] . wdsAddress , & pLtv -> u . u8 [ 0 ] , ETH_ALEN ); lp -> multicastPMBuffering = pLtv -> u . u16 [ 0 ]; lp -> RejectAny = pLtv -> u . u16 [ 0 ]; if ( lp -> driverEnable )  