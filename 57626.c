 nestegg_track_seek(nestegg * ctx, unsigned int track, uint64_t tstamp) int r ; if ( ! ctx -> segment . cues . cue_point . head )  r = ne_init_cue_points ( ctx , - 1 ); static ne_init_cue_points(nestegg * ctx, int64_t max_offset) int r ; struct ebml_list_node * node = ctx -> segment . cues . cue_point . head ; struct seek * found ; uint64_t seek_pos , id ; if ( ! node )  found = ne_find_seek_for_id ( ctx -> segment . seek_head . head , ID_CUES ); if ( ! found )  if ( ne_get_uint ( found -> position , & seek_pos ) != 0 )  r = ne_ctx_save ( ctx , & state ); if ( r != 0 )  r = ne_io_seek ( ctx -> io , ctx -> segment_offset + seek_pos , NESTEGG_SEEK_SET ); if ( r != 0 )  ctx -> last_valid = 0; r = ne_read_element ( ctx , & id , NULL ); if ( r != 1 )  if ( id != ID_CUES )  ctx -> ancestor = NULL; if ( ne_ctx_push ( ctx , ne_top_level_elements , ctx ) < 0 )  if ( ne_ctx_push ( ctx , ne_segment_elements , & ctx -> segment ) < 0 )  if ( ne_ctx_push ( ctx , ne_cues_elements , & ctx -> segment . cues ) < 0 )  r = ne_parse ( ctx , ne_cues_elements , max_offset ); static ne_parse(nestegg * ctx, struct ebml_element_desc * top_level, int64_t max_offset) int r ; int64_t * data_offset ; uint64_t id , size , peeked_id ; struct ebml_element_desc * element ; if ( ! ctx -> ancestor )  if ( max_offset > 0 && ne_io_tell ( ctx -> io ) >= max_offset )  r = 1; r = ne_peek_element ( ctx , & id , & size ); if ( r != 1 )  element = ne_find_element ( id , ctx -> ancestor -> node ); if ( element )  if ( element -> flags & DESC_FLAG_SUSPEND )  r = 1; r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  if ( element -> flags & DESC_FLAG_OFFSET )  data_offset = ( int64_t * ) ( ctx -> ancestor -> data + element -> data_offset ); * data_offset = ne_io_tell ( ctx -> io ); if ( * data_offset < 0 )  r = - 1; if ( element -> type == TYPE_MASTER )  if ( element -> flags & DESC_FLAG_MULTI )  if ( ne_read_master ( ctx , element ) < 0 )  if ( ne_read_single_master ( ctx , element ) < 0 )  r = ne_read_simple ( ctx , element , size ); if ( r < 0 )  if ( ne_is_ancestor_element ( id , ctx -> ancestor -> previous ) )  if ( top_level && ctx -> ancestor -> node == top_level )  r = 1; r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  r = ne_io_read_skip ( ctx -> io , size ); if ( r != 1 )  if ( r != 1 )  while ( ctx -> ancestor )  ne_ctx_pop ( ctx ); static ne_ctx_pop(nestegg * ctx) struct list_node * item ; item = ctx -> ancestor; free ( item ); 