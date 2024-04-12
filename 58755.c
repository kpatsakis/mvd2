static int handle_message(struct skinny_req *req, struct skinnysession *s) if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  res = handle_button_template_req_message ( req , s ); static int handle_button_template_req_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; int i ; struct skinny_speeddial * sd ; struct button_definition_template btn [ 42 ] ; int lineInstance = 1 ; int speeddialInstance = 1 ; int buttonCount = 0 ; if ( ! ( req = req_alloc ( sizeof ( struct button_template_res_message ) , BUTTON_TEMPLATE_RES_MESSAGE ) ) )  static struct skinny_req *req_alloc(size_t size, int response_message) struct skinny_req * req ; if ( ! ( req = ast_calloc ( 1 , skinny_header_size + size + 4 ) ) )  return NULL ; req -> len = htolel ( size + 4 ); req -> e = htolel ( response_message ); return req ; memset ( & btn , 0 , sizeof ( btn ) ); for (i=0; i<42; i++) int btnSet = 0 ; switch ( btn [ i ] . buttonDefinition )  req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_NONE; req -> data . buttontemplate . definition [ i ] . instanceNumber = 0; if ( l -> instance == lineInstance )  req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_LINE; req -> data . buttontemplate . definition [ i ] . instanceNumber = lineInstance; lineInstance ++; buttonCount ++; if ( ! btnSet )  if ( sd -> isHint && sd -> instance == lineInstance )  req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_LINE; req -> data . buttontemplate . definition [ i ] . instanceNumber = lineInstance; lineInstance ++; buttonCount ++; req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_NONE; req -> data . buttontemplate . definition [ i ] . instanceNumber = 0; if ( l -> instance == lineInstance )  req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_LINE; req -> data . buttontemplate . definition [ i ] . instanceNumber = lineInstance; lineInstance ++; buttonCount ++; if ( ! btnSet )  if ( sd -> isHint && sd -> instance == lineInstance )  req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_LINE; req -> data . buttontemplate . definition [ i ] . instanceNumber = lineInstance; lineInstance ++; buttonCount ++; if ( ! sd -> isHint && sd -> instance == speeddialInstance )  req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_SPEEDDIAL; req -> data . buttontemplate . definition [ i ] . instanceNumber = speeddialInstance; speeddialInstance ++; buttonCount ++; req -> data . buttontemplate . definition [ i ] . buttonDefinition = htolel ( BT_NONE ); req -> data . buttontemplate . definition [ i ] . instanceNumber = htolel ( 0 ); if ( l -> instance == lineInstance )  req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_LINE; req -> data . buttontemplate . definition [ i ] . instanceNumber = lineInstance; lineInstance ++; buttonCount ++; req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_NONE; req -> data . buttontemplate . definition [ i ] . instanceNumber = 0; if ( ! sd -> isHint && sd -> instance == speeddialInstance )  req -> data . buttontemplate . definition [ i ] . buttonDefinition = BT_SPEEDDIAL; req -> data . buttontemplate . definition [ i ] . instanceNumber = speeddialInstance - 1; speeddialInstance ++; buttonCount ++; req -> data . buttontemplate . definition [ i ] . buttonDefinition = htolel ( btn [ i ] . buttonDefinition ); req -> data . buttontemplate . definition [ i ] . instanceNumber = 0; buttonCount ++; req -> data . buttontemplate . buttonOffset = 0; req -> data . buttontemplate . buttonCount = htolel ( buttonCount ); req -> data . buttontemplate . totalButtonCount = htolel ( buttonCount ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); 