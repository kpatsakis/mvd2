 nestegg_sniff(unsigned char const * buffer, size_t length) nestegg_io io ; struct sniff_buffer userdata ; userdata . buffer = buffer; userdata . length = length; userdata . offset = 0; io . read = ne_buffer_read; io . seek = ne_buffer_seek; io . tell = ne_buffer_tell; io . userdata = & userdata; return ne_match_webm ( io , length ) ; static ne_match_webm(nestegg_io io, int64_t max_offset) int r ; uint64_t id ; char * doctype ; nestegg * ctx ; if ( ! ( io . read && io . seek && io . tell ) )  ctx = ne_alloc ( sizeof ( * ctx ) ); static void ne_alloc(size_t size) return calloc ( 1 , size ) ; if ( ! ctx )  ctx -> io = ne_alloc ( sizeof ( * ctx -> io ) ); static void ne_alloc(size_t size) return calloc ( 1 , size ) ; if ( ! ctx -> io )  * ctx -> io = io; ctx -> alloc_pool = ne_pool_init ( ); static struct pool_ctx ne_pool_init(void) return h_malloc ( sizeof ( struct pool_ctx ) ) ; if ( ! ctx -> alloc_pool )  ctx -> log = ne_null_log_callback; r = ne_peek_element ( ctx , & id , NULL ); static ne_peek_element(nestegg * ctx, uint64_t * id, uint64_t * size) int r ; if ( ctx -> last_valid )  return 1 ; r = ne_read_id ( ctx -> io , & ctx -> last_id , NULL ); if ( r != 1 )  return r ; r = ne_read_vint ( ctx -> io , & ctx -> last_size , NULL ); if ( r != 1 )  return r ; return 1 ; if ( r != 1 )  if ( id != ID_EBML )  if ( ne_get_string ( ctx -> ebml . doctype , & doctype ) != 0 || strcmp ( doctype , "webm" ) != 0 )  static ne_get_string(struct ebml_type type, char ** value) if ( ! type . read )  assert ( type . type == TYPE_STRING ); 