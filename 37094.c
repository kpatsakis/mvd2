 nestegg_get_cue_point(nestegg * ctx, unsigned int cluster_num, int64_t int64_t * start_pos, int64_t * end_pos, uint64_t * tstamp) struct ebml_list_node * cues_node = ctx -> segment . cues . cue_point . head ; if ( ! start_pos || ! end_pos || ! tstamp )  if ( ! cues_node )  ne_init_cue_points ( ctx , max_offset ); static ne_init_cue_points(nestegg * ctx, int64_t max_offset) int r ; struct ebml_list_node * node = ctx -> segment . cues . cue_point . head ; struct seek * found ; uint64_t seek_pos , id ; if ( ! node )  found = ne_find_seek_for_id ( ctx -> segment . seek_head . head , ID_CUES ); static struct seek ne_find_seek_for_id(struct ebml_list_node * seek_head, uint64_t id) struct ebml_list * head ; struct ebml_list_node * seek ; struct ebml_binary binary_id ; struct seek * s ; while ( seek_head )  head = seek_head -> data; seek = head -> head; while ( seek )  s = seek -> data; if ( ne_get_binary ( s -> id , & binary_id ) == 0 && ne_buf_read_id ( binary_id . data , binary_id . length ) == id )  static ne_buf_read_id(unsigned char const * p, size_t length) uint64_t id = 0 ; while ( length -- )  id <<= 8; id |= * p ++; return id ; static ne_get_binary(struct ebml_type type, struct ebml_binary * value) if ( ! type . read )  return - 1 ; return 0 ; return s ; seek = seek -> next; seek_head = seek_head -> next; return NULL ; if ( ! found )  if ( ne_get_uint ( found -> position , & seek_pos ) != 0 )  static ne_get_uint(struct ebml_type type, uint64_t * value) if ( ! type . read )  return - 1 ; return 0 ; r = ne_ctx_save ( ctx , & state ); static ne_ctx_save(nestegg * ctx, struct saved_state * s) s -> stream_offset = ne_io_tell ( ctx -> io ); static ne_io_tell(nestegg_io * io) return io -> tell ( io -> userdata ) ; if ( s -> stream_offset < 0 )  return - 1 ; return 0 ; if ( r != 0 )  r = ne_io_seek ( ctx -> io , ctx -> segment_offset + seek_pos , NESTEGG_SEEK_SET ); static ne_io_seek(nestegg_io * io, int64_t offset, int whence) return io -> seek ( offset , whence , io -> userdata ) ; if ( r != 0 )  ctx -> last_valid = 0; r = ne_read_element ( ctx , & id , NULL ); static ne_read_element(nestegg * ctx, uint64_t * id, uint64_t * size) int r ; r = ne_peek_element ( ctx , id , size ); if ( r != 1 )  return r ; return 1 ; if ( r != 1 )  if ( id != ID_CUES )  ctx -> ancestor = NULL; if ( ne_ctx_push ( ctx , ne_top_level_elements , ctx ) < 0 )  static ne_ctx_push(nestegg * ctx, struct ebml_element_desc * ancestor, void * data) struct list_node * item ; item = ne_alloc ( sizeof ( * item ) ); if ( ! item )  return - 1 ; return 0 ; if ( ne_ctx_push ( ctx , ne_segment_elements , & ctx -> segment ) < 0 )  static ne_ctx_push(nestegg * ctx, struct ebml_element_desc * ancestor, void * data) struct list_node * item ; item = ne_alloc ( sizeof ( * item ) ); if ( ! item )  return - 1 ; return 0 ; if ( ne_ctx_push ( ctx , ne_cues_elements , & ctx -> segment . cues ) < 0 )  static ne_ctx_push(nestegg * ctx, struct ebml_element_desc * ancestor, void * data) struct list_node * item ; item = ne_alloc ( sizeof ( * item ) ); if ( ! item )  return - 1 ; return 0 ; r = ne_parse ( ctx , ne_cues_elements , max_offset ); static ne_parse(nestegg * ctx, struct ebml_element_desc * top_level, int64_t max_offset) int r ; int64_t * data_offset ; uint64_t id , size , peeked_id ; struct ebml_element_desc * element ; if ( ! ctx -> ancestor )  if ( max_offset > 0 && ne_io_tell ( ctx -> io ) >= max_offset )  r = ne_peek_element ( ctx , & id , & size ); if ( r != 1 )  element = ne_find_element ( id , ctx -> ancestor -> node ); if ( element )  if ( element -> flags & DESC_FLAG_SUSPEND )  r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  if ( element -> flags & DESC_FLAG_OFFSET )  data_offset = ( int64_t * ) ( ctx -> ancestor -> data + element -> data_offset ); * data_offset = ne_io_tell ( ctx -> io ); if ( * data_offset < 0 )  if ( element -> type == TYPE_MASTER )  if ( element -> flags & DESC_FLAG_MULTI )  if ( ne_read_master ( ctx , element ) < 0 )  if ( ne_read_single_master ( ctx , element ) < 0 )  r = ne_read_simple ( ctx , element , size ); if ( r < 0 )  if ( ne_is_ancestor_element ( id , ctx -> ancestor -> previous ) )  if ( top_level && ctx -> ancestor -> node == top_level )  r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  r = ne_io_read_skip ( ctx -> io , size ); if ( r != 1 )  static ne_read_single_master(nestegg * ctx, struct ebml_element_desc * desc) assert ( desc -> type == TYPE_MASTER && ! ( desc -> flags & DESC_FLAG_MULTI ) ); 