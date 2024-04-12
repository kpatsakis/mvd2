static guint32 dissect_minivideopacket(tvbuff_t *tvb, guint32 guint16 scallno, packet_info proto_tree *iax2_tree, proto_tree *main_tree) guint32 ts ; iax_packet_data * iax_packet ; ts = tvb_get_ntohs ( tvb , offset ); ts &= ~0x8000; iax_packet = iax2_get_packet_data_for_minipacket ( pinfo , scallno , TRUE ); offset += 2; dissect_payload ( tvb , offset , pinfo , iax2_tree , main_tree , ts , TRUE , iax_packet ); static void dissect_payload(tvbuff_t *tvb, guint32 packet_info *pinfo, proto_tree proto_tree *tree, guint32 ts _U_, gboolean iax_packet_data *iax_packet) tvbuff_t * sub_tvb ; if ( offset >= tvb_reported_length ( tvb ) )  sub_tvb = tvb_new_subset_remaining ( tvb , offset ); if ( iax_packet -> call_data )  desegment_iax ( sub_tvb , pinfo , iax2_tree , tree , video , iax_packet ); static void desegment_iax(tvbuff_t *tvb, packet_info *pinfo, proto_tree proto_tree *tree, gboolean video, iax_packet_data *iax_packet) iax_call_data * iax_call = iax_packet -> call_data ; iax_call_dirdata * dirdata ; guint32 frag_offset = 0 ; fragment_head * fd_head ; pinfo -> can_desegment = 2; pinfo -> desegment_offset = 0; pinfo -> desegment_len = 0; dirdata = & ( iax_call -> dirdata [ ! ! ( iax_packet -> reversed ) ] ); if ( ( ! pinfo -> fd -> flags . visited && ( dirdata -> current_frag_bytes > 0 ) ) || ( ( value = g_hash_table_lookup ( iax_fid_table , GUINT_TO_POINTER ( pinfo -> fd -> num ) ) ) != NULL ) )  guint32 fid ; guint32 frag_len = tvb_reported_length ( tvb ) ; gboolean complete ; if ( ! pinfo -> fd -> flags . visited )  guint32 tot_len ; fid = dirdata -> current_frag_id; tot_len = dirdata -> current_frag_minlen; frag_offset = dirdata -> current_frag_bytes; dirdata -> current_frag_bytes += frag_len; complete = dirdata -> current_frag_bytes > tot_len; fid = GPOINTER_TO_UINT ( value ); complete = FALSE; fd_head = fragment_add ( & iax_reassembly_table , tvb , 0 , pinfo , fid , NULL , frag_offset , frag_len , ! complete ); if ( fd_head && ( pinfo -> fd -> num == fd_head -> reassembled_in ) )  tvbuff_t * next_tvb = tvb_new_chain ( tvb , fd_head -> tvb_data ) ; process_iax_pdu ( next_tvb , pinfo , tree , video , iax_packet ); static void process_iax_pdu(tvbuff_t *tvb, packet_info *pinfo, proto_tree gboolean video, iax_packet_data *iax_packet) iax_call_data * iax_call = iax_packet -> call_data ; if ( ! video && iax_call && iax_call -> subdissector )  iax2_dissector_info_t dissector_info ; if ( iax_packet -> call_data == NULL )  memset ( & dissector_info , 0 , sizeof ( dissector_info ) ); 