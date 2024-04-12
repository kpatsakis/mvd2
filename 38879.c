static int xc2028_set_analog_freq(struct dvb_frontend struct analog_parameters *p) struct xc2028_data * priv = fe -> tuner_priv ; unsigned int type = 0 ; if ( p -> mode == V4L2_TUNER_RADIO )  type |= FM; if ( priv -> ctrl . input1 )  type |= INPUT1; return generic_set_freq ( fe , ( 625l * p -> frequency ) / 10 , V4L2_TUNER_RADIO , type , 0 , 0 ) ; static int generic_set_freq(struct dvb_frontend *fe, u32 freq /* in HZ enum v4l2_tuner_type unsigned int v4l2_std_id u16 int_freq) if ( check_firmware ( fe , type , std , int_freq ) < 0 )  static int check_firmware(struct dvb_frontend *fe, unsigned int v4l2_std_id std, __u16 int_freq) struct xc2028_data * priv = fe -> tuner_priv ; struct firmware_properties new_fw ; int rc , retry_count = 0 ; u16 version , hwmodel ; v4l2_std_id std0 ; rc = check_device_status ( priv ); if ( rc < 0 )  if ( priv -> ctrl . mts && ! ( type & FM ) )  type |= MTS; new_fw . type = type; new_fw . id = std; new_fw . std_req = std; new_fw . scode_table = SCODE | priv -> ctrl . scode_table; new_fw . scode_nr = 0; new_fw . int_freq = int_freq; dump_firm_type ( new_fw . type ); printk ( "(%x), id %016llx, " , new_fw . type , ( unsigned long long ) new_fw . std_req ); dump_firm_type ( priv -> ctrl . scode_table ); printk ( "(%x), " , priv -> ctrl . scode_table ); printk ( "int_freq %d, " , new_fw . int_freq ); printk ( "scode_nr %d\n" , new_fw . scode_nr ); if ( ( priv -> state == XC2028_ACTIVE ) && ( ( ( BASE | new_fw . type ) & BASE_TYPES ) == ( priv -> cur_fw . type & BASE_TYPES ) ) )  memset ( & priv -> cur_fw , 0 , sizeof ( priv -> cur_fw ) ); rc = do_tuner_callback ( fe , XC2028_TUNER_RESET , 0 ); if ( rc < 0 )  std0 = 0; rc = load_firmware ( fe , BASE | new_fw . type , & std0 ); if ( rc < 0 )  tuner_err ( "Error %d while loading base firmware\n" , rc ); rc = load_firmware ( fe , BASE | INIT1 | new_fw . type , & std0 ); if ( rc == - ENOENT )  rc = load_firmware ( fe , ( BASE | INIT1 | new_fw . type ) & ~F8MHZ , & std0 ); if ( rc < 0 && rc != - ENOENT )  tuner_err ( "Error %d while loading init1 firmware\n" , rc ); if ( priv -> cur_fw . type == ( BASE | new_fw . type ) && priv -> cur_fw . std_req == std )  priv -> cur_fw . scode_table = 0; rc = load_firmware ( fe , new_fw . type , & new_fw . id ); if ( rc == - ENOENT )  rc = load_firmware ( fe , new_fw . type & ~F8MHZ , & new_fw . id ); if ( rc < 0 )  if ( priv -> cur_fw . scode_table == new_fw . scode_table && priv -> cur_fw . scode_nr == new_fw . scode_nr )  if ( new_fw . type & FM )  tuner_dbg ( "Trying to load scode %d\n" , new_fw . scode_nr ); rc = load_scode ( fe , new_fw . type | new_fw . scode_table , & new_fw . id , new_fw . int_freq , new_fw . scode_nr ); if ( xc2028_get_reg ( priv , 0x0004 , & version ) < 0 || xc2028_get_reg ( priv , 0x0008 , & hwmodel ) < 0 )  if ( priv -> ctrl . read_not_reliable )  if ( priv -> firm_version != ( ( version & 0xf0 ) << 4 | ( version & 0x0f ) ) )  if ( ! priv -> ctrl . read_not_reliable )  hwmodel = 3028; if ( priv -> hwmodel == 0 && ( hwmodel == 2028 || hwmodel == 3028 ) )  priv -> hwmodel = hwmodel; priv -> hwvers = version & 0xff00; if ( priv -> hwmodel == 0 || priv -> hwmodel != hwmodel || priv -> hwvers != ( version & 0xff00 ) )  priv -> cur_fw = new_fw; priv -> cur_fw . type |= BASE; priv -> state = XC2028_ACTIVE; priv -> state = XC2028_NO_FIRMWARE; memset ( & priv -> cur_fw , 0 , sizeof ( priv -> cur_fw ) ); if ( retry_count < 8 )  retry_count ++; if ( rc == - ENOENT )  return rc ; 