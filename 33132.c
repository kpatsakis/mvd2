static void rtl8139_transmit(RTL8139State *s) int descriptor = s -> currTxDesc , txcount = 0 ; if ( rtl8139_transmit_one ( s , descriptor ) )  static int rtl8139_transmit_one(RTL8139State *s, int descriptor) if ( ! rtl8139_transmitter_enabled ( s ) )  static int rtl8139_transmitter_enabled(RTL8139State *s) return s -> bChipCmdState & CmdTxEnb ; if ( s -> TxStatus [ descriptor ] & TxHostOwns )  int txsize = s -> TxStatus [ descriptor ] & 0x1fff ; uint8_t txbuffer [ 0x2000 ] ; s -> TxStatus [ descriptor ] |= TxHostOwns; s -> TxStatus [ descriptor ] |= TxStatOK; rtl8139_transfer_frame ( s , txbuffer , txsize , 0 , NULL ); static void rtl8139_transfer_frame(RTL8139State *s, uint8_t *buf, int int do_interrupt, const uint8_t *dot1q_buf) struct iovec * iov = NULL ; struct iovec vlan_iov [ 3 ] ; if ( ! size )  if ( dot1q_buf && size >= ETHER_ADDR_LEN * 2 )  iov = ( struct iovec [ 3 ] . iov_base = buf , . iov_len = ETHER_ADDR_LEN * 2 . iov_base = ( void * ) dot1q_buf , . iov_len = VLAN_HLEN . iov_base = buf + ETHER_ADDR_LEN * 2 . iov_len = size - ETHER_ADDR_LEN * 2 , memcpy ( vlan_iov , iov , sizeof ( vlan_iov ) ); iov = vlan_iov; if ( TxLoopBack == ( s -> TxConfig & TxLoopBack ) )  size_t buf2_size ; uint8_t * buf2 ; if ( iov )  buf2_size = iov_size ( iov , 3 ); buf2 = g_malloc ( buf2_size ); buf = buf2; rtl8139_do_receive ( qemu_get_queue ( s -> nic ) , buf , size , do_interrupt ); static ssize_t rtl8139_do_receive(NetClientState *nc, const uint8_t *buf, size_t size_, int do_interrupt) RTL8139State * s = qemu_get_nic_opaque ( nc ) ; int size = size_ ; uint8_t buf1 [ MIN_BUF_SIZE + VLAN_HLEN ] ; static const uint8_t broadcast_macaddr [ 6 ] = { 0xff , 0xff , 0xff , 0xff , 0xff , 0xff } ; if ( ! s -> clock_enabled )  if ( ! rtl8139_receiver_enabled ( s ) )  if ( s -> RxConfig & AcceptAllPhys )  if ( ! memcmp ( buf , broadcast_macaddr , 6 ) )  if ( ! ( s -> RxConfig & AcceptBroadcast ) )  if ( buf [ 0 ] & 0x01 )  if ( ! ( s -> RxConfig & AcceptMulticast ) )  int mcast_idx = compute_mcast_idx ( buf ) ; if ( ! ( s -> mult [ mcast_idx >> 3 ] & ( 1 << ( mcast_idx & 7 ) ) ) )  if ( s -> phys [ 0 ] == buf [ 0 ] && s -> phys [ 1 ] == buf [ 1 ] && s -> phys [ 2 ] == buf [ 2 ] && s -> phys [ 3 ] == buf [ 3 ] && s -> phys [ 4 ] == buf [ 4 ] && s -> phys [ 5 ] == buf [ 5 ] )  if ( ! ( s -> RxConfig & AcceptMyPhys ) )  if ( size < MIN_BUF_SIZE + VLAN_HLEN )  memcpy ( buf1 , buf , size ); memset ( buf1 + size , 0 , MIN_BUF_SIZE + VLAN_HLEN - size ); buf = buf1; if ( s -> CpCmd & CPlusRxVLAN && be16_to_cpup ( ( uint16_t * ) & buf [ ETHER_ADDR_LEN * 2 ] ) == ETH_P_8021Q )  dot1q_buf = & buf [ ETHER_ADDR_LEN * 2 ]; rxdw1 |= CP_RX_TAVA | le16_to_cpup ( ( uint16_t * ) & dot1q_buf [ ETHER_TYPE_LEN ] ); DPRINTF ( "C+ Rx mode : extracted vlan tag with tci: " "%u\n" be16_to_cpup ( ( uint16_t * ) & dot1q_buf [ ETHER_TYPE_LEN ] ) ) rxdw1 &= ~CP_RX_TAVA; if ( dot1q_buf )  pci_dma_write ( d , rx_addr , buf , 2 * ETHER_ADDR_LEN ); pci_dma_write ( d , rx_addr + 2 * ETHER_ADDR_LEN , buf + 2 * ETHER_ADDR_LEN + VLAN_HLEN , size - 2 * ETHER_ADDR_LEN ); pci_dma_write ( d , rx_addr , buf , size ); val = cpu_to_le32 ( crc32 ( 0 , buf , size_ ) ); pci_dma_write ( d , rx_addr + size , ( uint8_t * ) & val , 4 ); pci_dma_write ( d , cplus_rx_ring_desc , ( uint8_t * ) & val , 4 ); val = cpu_to_le32 ( rxdw1 ); pci_dma_write ( d , cplus_rx_ring_desc + 4 , ( uint8_t * ) & val , 4 ); rtl8139_write_buffer ( s , buf , size ); val = cpu_to_le32 ( crc32 ( 0 , buf , size ) ); rtl8139_write_buffer ( s , ( uint8_t * ) & val , 4 ); 