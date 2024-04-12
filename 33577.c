static int CVE_2013_5641_PATCHED_handle_incoming(struct sip_pvt *p, struct sip_request *req, struct ast_sockaddr *addr, int *recount, int *nounlock) const char * cmd ; const char * cseq ; const char * via ; uint32_t seqno ; int len ; int respid ; const char * e ; int error = 0 ; cseq = sip_get_header ( req , "Cseq" ); cmd = REQ_OFFSET_TO_STR ( req , header [ 0 ] ); via = __get_header ( req , "Via" , & via_pos ); if ( ast_strlen_zero ( cmd ) || ast_strlen_zero ( cseq ) || ast_strlen_zero ( via ) )  error = 1; if ( ! error && sscanf ( cseq , "%30u%n" , & seqno , & len ) != 1 )  error = 1; if ( error )  e = ast_skip_blanks ( REQ_OFFSET_TO_STR ( req , rlpart2 ) ); if ( req -> method == SIP_RESPONSE )  if ( ast_strlen_zero ( e ) )  if ( sscanf ( e , "%30d %n" , & respid , & len ) != 1 )  if ( respid <= 0 )  ast_log ( LOG_WARNING , "Invalid SIP response code: '%d'\n" , respid ); 