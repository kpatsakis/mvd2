static int handle_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  transmit_softkeysetres ( d ); static void transmit_softkeysetres(struct skinny_device *d) struct skinny_req * req ; int i ; int x ; int y ; const struct soft_key_definitions * softkeymode = soft_key_default_definitions ; if ( ! ( req = req_alloc ( sizeof ( struct soft_key_set_res_message ) , SOFT_KEY_SET_RES_MESSAGE ) ) )  static struct skinny_req *req_alloc(size_t size, int response_message) struct skinny_req * req ; if ( ! ( req = ast_calloc ( 1 , skinny_header_size + size + 4 ) ) )  return NULL ; req -> len = htolel ( size + 4 ); req -> e = htolel ( response_message ); return req ; req -> data . softkeysets . softKeySetOffset = htolel ( 0 ); req -> data . softkeysets . softKeySetCount = htolel ( 13 ); req -> data . softkeysets . totalSoftKeySetCount = htolel ( 13 ); for (x = 0; x < sizeof(soft_key_default_definitions) / sizeof(struct soft_key_definitions); x++) const uint8_t * defaults = softkeymode -> defaults ; for (y = 0; y < softkeymode->count; y++) for (i = 0; i < (sizeof(soft_key_template_default) / sizeof(struct soft_key_template_definition)); i++) if ( defaults [ y ] == i + 1 )  req -> data . softkeysets . softKeySetDefinition [ softkeymode -> mode ] . softKeyTemplateIndex [ y ] = ( i + 1 ); req -> data . softkeysets . softKeySetDefinition [ softkeymode -> mode ] . softKeyInfoIndex [ y ] = htoles ( i + 301 ); softkeymode ++; transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); 