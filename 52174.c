static void eepro100_write(void *opaque, hwaddr uint64_t data, unsigned size) EEPRO100State * s = opaque ; switch ( size )  eepro100_write1 ( s , addr , data ); static void eepro100_write1(EEPRO100State * s, uint32_t addr, uint8_t val) if ( addr > SCBStatus && addr <= sizeof ( s -> mem ) - sizeof ( val ) )  s -> mem [ addr ] = val; switch ( addr )  eepro100_write_command ( s , val ); static void eepro100_write_command(EEPRO100State * s, uint8_t val) eepro100_cu_command ( s , val & 0xf0 ); static void eepro100_cu_command(EEPRO100State * s, uint8_t val) switch ( val )  s -> cu_offset = e100_read_reg4 ( s , SCBPointer ); static uint32_t e100_read_reg4(EEPRO100State *s, E100RegisterOffset addr) return le32_to_cpup ( ( uint32_t * ) & s -> mem [ addr ] ) ; s -> statsaddr = e100_read_reg4 ( s , SCBPointer ); static uint32_t e100_read_reg4(EEPRO100State *s, E100RegisterOffset addr) return le32_to_cpup ( ( uint32_t * ) & s -> mem [ addr ] ) ; if ( s -> statsaddr & 3 )  s -> statsaddr &= ~3; s -> cu_base = e100_read_reg4 ( s , SCBPointer ); static uint32_t e100_read_reg4(EEPRO100State *s, E100RegisterOffset addr) return le32_to_cpup ( ( uint32_t * ) & s -> mem [ addr ] ) ; memset ( & s -> statistics , 0 , sizeof ( s -> statistics ) ); 