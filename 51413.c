static int handle_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  transmit_versionres ( d ); static void transmit_versionres(struct skinny_device *d) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct version_res_message ) , VERSION_RES_MESSAGE ) ) )  static struct skinny_req *req_alloc(size_t size, int response_message) struct skinny_req * req ; if ( ! ( req = ast_calloc ( 1 , skinny_header_size + size + 4 ) ) )  return NULL ; req -> len = htolel ( size + 4 ); req -> e = htolel ( response_message ); return req ; transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  skinny_unregister ( NULL , s ); ast_mutex_unlock ( & s -> lock ); 