static void rtl8139_cplus_transmit(RTL8139State *s) while ( rtl8139_cplus_transmit_one ( s ) )  static int rtl8139_cplus_transmit_one(RTL8139State *s) if ( ! rtl8139_transmitter_enabled ( s ) )  if ( ! rtl8139_cp_transmitter_enabled ( s ) )  uint32_t val , txdw0 , txdw1 , txbufLO , txbufHI ; txdw0 = le32_to_cpu ( val ); txdw1 = le32_to_cpu ( val ); if ( ! ( txdw0 & CP_TX_OWN ) )  if ( txdw0 & CP_TX_FS )  s -> cplus_txbuffer_offset = 0; int txsize = txdw0 & CP_TX_BUFFER_SIZE_MASK ; if ( ! s -> cplus_txbuffer )  s -> cplus_txbuffer_len = CP_TX_BUFFER_SIZE; s -> cplus_txbuffer = g_malloc ( s -> cplus_txbuffer_len ); s -> cplus_txbuffer_offset = 0; if ( s -> cplus_txbuffer_offset + txsize >= s -> cplus_txbuffer_len )  txsize = s -> cplus_txbuffer_len - s -> cplus_txbuffer_offset; s -> cplus_txbuffer_offset += txsize; if ( txdw0 & CP_TX_EOR )  s -> currCPlusTxDesc = 0; if ( s -> currCPlusTxDesc >= 64 )  s -> currCPlusTxDesc = 0; txdw0 &= ~CP_RX_OWN; txdw0 &= ~CP_TX_STATUS_UNF; txdw0 &= ~CP_TX_STATUS_TES; txdw0 &= ~CP_TX_STATUS_OWC; txdw0 &= ~CP_TX_STATUS_LNKF; txdw0 &= ~CP_TX_STATUS_EXC; if ( txdw0 & CP_TX_LS )  uint8_t dot1q_buffer_space [ VLAN_HLEN ] ; uint16_t * dot1q_buffer ; uint8_t * saved_buffer = s -> cplus_txbuffer ; int saved_size = s -> cplus_txbuffer_offset ; if ( txdw1 & CP_TX_TAGC )  dot1q_buffer = ( uint16_t * ) dot1q_buffer_space; dot1q_buffer [ 0 ] = cpu_to_be16 ( ETH_P_8021Q ); dot1q_buffer [ 1 ] = cpu_to_le16 ( txdw1 & CP_TX_VLAN_TAG_MASK ); dot1q_buffer = NULL; s -> cplus_txbuffer = NULL; s -> cplus_txbuffer_offset = 0; s -> cplus_txbuffer_len = 0; if ( txdw0 & ( CP_TX_IPCS | CP_TX_UDPCS | CP_TX_TCPCS | CP_TX_LGSEN ) )  ip_header * ip = NULL ; uint8_t ip_protocol = 0 ; int proto = be16_to_cpu ( * ( uint16_t * ) ( saved_buffer + 12 ) ) ; if ( proto == ETH_P_IP )  eth_payload_data = saved_buffer + ETH_HLEN; ip = ( ip_header * ) eth_payload_data; if ( IP_HEADER_VERSION ( ip ) != IP_HEADER_VERSION_4 )  ip = NULL; ip_protocol = ip -> ip_p; if ( ip )  if ( ( txdw0 & CP_TX_LGSEN ) && ip_protocol == IP_PROTO_TCP )  saved_size = 0; rtl8139_transfer_frame ( s , saved_buffer , saved_size , 1 , ( uint8_t * ) dot1q_buffer ); static void rtl8139_transfer_frame(RTL8139State *s, uint8_t *buf, int int do_interrupt, const uint8_t *dot1q_buf) struct iovec * iov = NULL ; struct iovec vlan_iov [ 3 ] ; if ( ! size )  if ( dot1q_buf && size >= ETHER_ADDR_LEN * 2 )  iov = ( struct iovec [ 3 ] . iov_base = buf , . iov_len = ETHER_ADDR_LEN * 2 . iov_base = ( void * ) dot1q_buf , . iov_len = VLAN_HLEN . iov_base = buf + ETHER_ADDR_LEN * 2 . iov_len = size - ETHER_ADDR_LEN * 2 , memcpy ( vlan_iov , iov , sizeof ( vlan_iov ) ); iov = vlan_iov; if ( TxLoopBack == ( s -> TxConfig & TxLoopBack ) )  size_t buf2_size ; uint8_t * buf2 ; if ( iov )  buf2_size = iov_size ( iov , 3 ); buf2 = g_malloc ( buf2_size ); buf = buf2; rtl8139_do_receive ( qemu_get_queue ( s -> nic ) , buf , size , do_interrupt ); static ssize_t rtl8139_do_receive(NetClientState *nc, const uint8_t *buf, size_t size_, int do_interrupt) RTL8139State * s = qemu_get_nic_opaque ( nc ) ; static const uint8_t broadcast_macaddr [ 6 ] = { 0xff , 0xff , 0xff , 0xff , 0xff , 0xff } ; if ( ! s -> clock_enabled )  if ( ! rtl8139_receiver_enabled ( s ) )  if ( s -> RxConfig & AcceptAllPhys )  if ( ! memcmp ( buf , broadcast_macaddr , 6 ) )  