static dissect_catapult_dct2000(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree) gint offset = 0 ; gint context_length ; gint timestamp_length ; const char * protocol_name ; offset += context_length; offset ++; offset += timestamp_length; protocol_name = tvb_get_const_stringz ( tvb , offset , & protocol_length ); if ( ( strcmp ( protocol_name , "fp" ) == 0 ) || ( strncmp ( protocol_name , "fp_r" , 4 ) == 0 ) || ( strcmp ( protocol_name , "fpiur_r5" ) == 0 ) )  if ( ( strcmp ( protocol_name , "rlc" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r4" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r5" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r6" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r7" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r8" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r9" ) == 0 ) )  if ( ( strcmp ( protocol_name , "mac_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "mac_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "mac_r10_lte" ) == 0 ) )  if ( ( strcmp ( protocol_name , "rlc_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "rlc_r10_lte" ) == 0 ) )  if ( ( strcmp ( protocol_name , "pdcp_r8_lte" ) == 0 ) || ( strcmp ( protocol_name , "pdcp_r9_lte" ) == 0 ) || ( strcmp ( protocol_name , "pdcp_r10_lte" ) == 0 ) )  