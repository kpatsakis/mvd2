static void parent_lance_reset(void *opaque, int irq, int level) if ( level )  pcnet_h_reset ( opaque ); static void pcnet_h_reset(void *opaque) PCNetState * s = opaque ; if ( s -> nd )  memcpy ( s -> prom , s -> nd -> macaddr , 6 ); s -> prom [ 12 ] = s -> prom [ 13 ] = 0x00; s -> prom [ 14 ] = s -> prom [ 15 ] = 0x57; checksum += s -> prom [ i ]; * ( uint16_t * ) & s -> prom [ 12 ] = cpu_to_le16 ( checksum ); s -> bcr [ BCR_MSRDA ] = 0x0005; s -> bcr [ BCR_MSWRA ] = 0x0005; s -> bcr [ BCR_MC ] = 0x0002; s -> bcr [ BCR_LNKST ] = 0x00c0; s -> bcr [ BCR_LED1 ] = 0x0084; s -> bcr [ BCR_LED2 ] = 0x0088; s -> bcr [ BCR_LED3 ] = 0x0090; s -> bcr [ BCR_FDC ] = 0x0000; s -> bcr [ BCR_BSBC ] = 0x9001; s -> bcr [ BCR_EECAS ] = 0x0002; s -> bcr [ BCR_SWS ] = 0x0200; s -> bcr [ BCR_PLAT ] = 0xff06; pcnet_s_reset ( s ); static void pcnet_s_reset(PCNetState *s) s -> lnkst = 0x40; s -> rdra = 0; s -> tdra = 0; s -> rap = 0; s -> bcr [ BCR_BSBC ] &= ~0x0080; s -> csr [ 0 ] = 0x0004; s -> csr [ 3 ] = 0x0000; s -> csr [ 4 ] = 0x0115; s -> csr [ 5 ] = 0x0000; s -> csr [ 6 ] = 0x0000; s -> csr [ 8 ] = 0; s -> csr [ 9 ] = 0; s -> csr [ 10 ] = 0; s -> csr [ 11 ] = 0; s -> csr [ 12 ] = le16_to_cpu ( ( ( uint16_t * ) & s -> prom [ 0 ] ) [ 0 ] ); s -> csr [ 13 ] = le16_to_cpu ( ( ( uint16_t * ) & s -> prom [ 0 ] ) [ 1 ] ); s -> csr [ 14 ] = le16_to_cpu ( ( ( uint16_t * ) & s -> prom [ 0 ] ) [ 2 ] ); s -> csr [ 15 ] &= 0x21c4; s -> csr [ 72 ] = 1; s -> csr [ 74 ] = 1; s -> csr [ 76 ] = 1; s -> csr [ 78 ] = 1; s -> csr [ 80 ] = 0x1410; s -> csr [ 88 ] = 0x1003; s -> csr [ 89 ] = 0x0262; s -> csr [ 94 ] = 0x0000; s -> csr [ 100 ] = 0x0200; s -> csr [ 103 ] = 0x0105; s -> csr [ 103 ] = 0x0105; s -> csr [ 112 ] = 0x0000; s -> csr [ 114 ] = 0x0000; s -> csr [ 122 ] = 0x0000; s -> csr [ 124 ] = 0x0000; s -> tx_busy = 0; 