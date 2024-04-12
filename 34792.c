static int CVE_2013_5642_VULN_process_sdp(struct sip_pvt *p, struct sip_request *req, int t38action) int start = req -> sdp_start ; int next = start ; const char * value = NULL ; struct ast_format_cap * peercapability = ast_format_cap_alloc_nolock ( ) ; struct ast_format_cap * vpeercapability = ast_format_cap_alloc_nolock ( ) ; struct ast_format_cap * tpeercapability = ast_format_cap_alloc_nolock ( ) ; struct ast_rtp_codecs newaudiortp , newvideortp , newtextrtp ; struct ast_format_cap * newjointcapability = ast_format_cap_alloc_nolock ( ) ; struct ast_format_cap * newpeercapability = ast_format_cap_alloc_nolock ( ) ; const char * codecs ; int codec ; int secure_audio = FALSE ; int secure_video = FALSE ; int numberofports ; int numberofmediastreams = 0 ; int red_data_pt [ 10 ] ; char red_fmtp [ 100 ] = "empty" ; if ( ! p -> rtp )  if ( ! peercapability || ! vpeercapability || ! tpeercapability || ! newpeercapability || ! newjointcapability )  nextm = get_sdp_iterate ( & next , req , "m" ); if ( ast_strlen_zero ( nextm ) )  while ( ( type = get_sdp_line ( & iterator , next - 1 , req , & value ) ) != '\0' )  switch ( type )  if ( ! process_sdp_o ( value , p ) )  p -> novideo = TRUE; p -> notext = TRUE; while ( ! ast_strlen_zero ( nextm ) )  int audio = FALSE ; int video = FALSE ; int text = FALSE ; int processed_crypto = FALSE ; char protocol [ 5 ] = 0 , int x ; numberofports = 0; len = - 1; m = nextm; nextm = get_sdp_iterate ( & next , req , "m" ); if ( strncmp ( m , "audio " , 6 ) == 0 )  if ( ( sscanf ( m , "audio %30u/%30u RTP/%4s %n" , & x , & numberofports , protocol , & len ) == 3 && len > 0 ) || ( sscanf ( m , "audio %30u RTP/%4s %n" , & x , protocol , & len ) == 2 && len > 0 ) )  if ( x == 0 )  if ( ! strcmp ( protocol , "SAVP" ) )  secure_audio = 1; if ( strcmp ( protocol , "AVP" ) )  if ( p -> offered_media [ SDP_AUDIO ] . order_offered )  audio = TRUE; p -> offered_media [ SDP_AUDIO ] . order_offered = ++ numberofmediastreams; codecs = m + len; for (; !ast_strlen_zero(codecs); codecs = ast_skip_blanks(codecs + len)) if ( sscanf ( codecs , "%30u%n" , & codec , & len ) != 1 )  if ( strncmp ( m , "video " , 6 ) == 0 )  if ( ( sscanf ( m , "video %30u/%30u RTP/%4s %n" , & x , & numberofports , protocol , & len ) == 3 && len > 0 ) || ( sscanf ( m , "video %30u RTP/%4s %n" , & x , protocol , & len ) == 2 && len > 0 ) )  if ( x == 0 )  if ( ! strcmp ( protocol , "SAVP" ) )  secure_video = 1; if ( strcmp ( protocol , "AVP" ) )  if ( p -> offered_media [ SDP_VIDEO ] . order_offered )  video = TRUE; p -> novideo = FALSE; p -> offered_media [ SDP_VIDEO ] . order_offered = ++ numberofmediastreams; codecs = m + len; for (; !ast_strlen_zero(codecs); codecs = ast_skip_blanks(codecs + len)) if ( sscanf ( codecs , "%30u%n" , & codec , & len ) != 1 )  if ( strncmp ( m , "text " , 5 ) == 0 )  if ( ( sscanf ( m , "text %30u/%30u RTP/AVP %n" , & x , & numberofports , & len ) == 2 && len > 0 ) || ( sscanf ( m , "text %30u RTP/AVP %n" , & x , & len ) == 1 && len > 0 ) )  if ( x == 0 )  if ( p -> offered_media [ SDP_TEXT ] . order_offered )  text = TRUE; p -> notext = FALSE; p -> offered_media [ SDP_TEXT ] . order_offered = ++ numberofmediastreams; codecs = m + len; for (; !ast_strlen_zero(codecs); codecs = ast_skip_blanks(codecs + len)) if ( sscanf ( codecs , "%30u%n" , & codec , & len ) != 1 )  if ( strncmp ( m , "image " , 6 ) == 0 )  if ( ( sscanf ( m , "image %30u udptl t38%n" , & x , & len ) == 1 && len > 0 ) || ( sscanf ( m , "image %30u UDPTL t38%n" , & x , & len ) == 1 && len > 0 ) )  if ( x == 0 )  if ( initialize_udptl ( p ) )  if ( p -> offered_media [ SDP_IMAGE ] . order_offered )  p -> offered_media [ SDP_IMAGE ] . order_offered = ++ numberofmediastreams; if ( p -> t38 . state != T38_ENABLED )  memset ( & p -> t38 . their_parms , 0 , sizeof ( p -> t38 . their_parms ) ); while ( ( type = get_sdp_line ( & iterator , next - 1 , req , & value ) ) != '\0' )  switch ( type )  if ( audio )  if ( process_sdp_a_sendonly ( value , & sendonly ) )  if ( ! processed_crypto && process_crypto ( p , p -> rtp , & p -> srtp , value ) )  processed_crypto = TRUE; if ( video )  if ( ! processed_crypto && process_crypto ( p , p -> vrtp , & p -> vsrtp , value ) )  processed_crypto = TRUE; if ( text )  if ( process_sdp_a_text ( value , p , & newtextrtp , red_fmtp , & red_num_gen , red_data_pt , & last_rtpmap_codec ) )  if ( ! processed_crypto && process_crypto ( p , p -> trtp , & p -> tsrtp , value ) )  processed_crypto = TRUE; if ( audio && secure_audio && ! processed_crypto )  if ( video && secure_video && ! processed_crypto )  if ( ( t38action == SDP_T38_ACCEPT ) && ( p -> t38 . state == T38_LOCAL_REINVITE ) )  if ( ( portno == - 1 ) && ( p -> t38 . state != T38_DISABLED ) && ( p -> t38 . state != T38_REJECTED ) )  