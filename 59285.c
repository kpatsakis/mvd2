static void eepro100_write_command(EEPRO100State * s, uint8_t val) eepro100_cu_command ( s , val & 0xf0 ); static void eepro100_cu_command(EEPRO100State * s, uint8_t val) switch ( val )  s -> cu_offset = e100_read_reg4 ( s , SCBPointer ); action_command ( s ); static void action_command(EEPRO100State *s) bool bit_el ; bool bit_s ; s -> cb_address = s -> cu_base + s -> cu_offset; bit_el = ( ( s -> tx . command & COMMAND_EL ) != 0 ); bit_s = ( ( s -> tx . command & COMMAND_S ) != 0 ); s -> cu_offset = s -> tx . link; switch ( s -> tx . command & COMMAND_CMD )  TRACE ( OTHER , logout ( "configuration: %s\n" , nic_dump ( & s -> configuration [ 16 ] , ARRAY_SIZE ( s -> configuration ) - 16 ) ) ); s -> tx . status = 0; if ( bit_el )  if ( bit_s )  static const char *nic_dump(const uint8_t * buf, unsigned size) static char dump [ 3 * 16 + 1 ] ; char * p = & dump [ 0 ] ; if ( size > 16 )  size = 16; while ( size -- > 0 )  p += sprintf ( p , " %02x" , * buf ++ ); 