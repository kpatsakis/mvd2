static uint64_t eepro100_read(void *opaque, hwaddr unsigned size) EEPRO100State * s = opaque ; switch ( size )  return eepro100_read1 ( s , addr ) ; static uint8_t eepro100_read1(EEPRO100State * s, uint32_t addr) uint8_t val = 0 ; if ( addr <= sizeof ( s -> mem ) - sizeof ( val ) )  val = s -> mem [ addr ]; switch ( addr )  val = eepro100_read_command ( s ); val = eepro100_read_eeprom ( s ); val = ( uint8_t ) ( eepro100_read_mdi ( s ) >> ( 8 * ( addr & 3 ) ) ); val = 0; val = 0x07; logout ( "addr=%s val=0x%02x\n" , regname ( addr ) , val ); static char *regname(uint32_t addr) static char buf [ 32 ] ; if ( addr < PCI_IO_SIZE )  const char * r = e100_reg [ addr / 4 ] ; if ( r != 0 )  snprintf ( buf , sizeof ( buf ) , "%s+%u" , r , addr % 4 ); 