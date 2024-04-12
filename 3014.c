static dissect_catapult_dct2000(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree) gint offset = 0 ; gint context_length ; gint protocol_length ; gint timestamp_length ; gint variant_length ; gint outhdr_length ; int encap ; const char * protocol_name ; offset += context_length; offset ++; offset += timestamp_length; protocol_name = tvb_get_const_stringz ( tvb , offset , & protocol_length ); offset += protocol_length; offset += variant_length; offset += outhdr_length; offset ++; encap = tvb_get_guint8 ( tvb , offset ); switch ( encap )  if ( ( strcmp ( protocol_name , "rlc" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r4" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r5" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r6" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r7" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r8" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r9" ) == 0 ) )  if ( ( strcmp ( protocol_name , "mac_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "mac_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "mac_r10_lte" ) == 0 ) )  if ( ( strcmp ( protocol_name , "rlc_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r10_lte" ) == 0 ) )  if ( ( strcmp ( protocol_name , "pdcp_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "pdcp_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "pdcp_r10_lte" ) == 0 ) )  