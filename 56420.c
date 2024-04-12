fragment_data fragment_add_seq_next(tvbuff_t *tvb, const int offset, const packet_info const guint32 id, GHashTable GHashTable *reassembled_table, const guint32 const gboolean more_frags) return fragment_add_seq_check_work ( tvb , offset , pinfo , id , fragment_table , reassembled_table , 0 , frag_data_len , more_frags , REASSEMBLE_FLAGS_NO_FRAG_NUMBER ) ; static fragment_data fragment_add_seq_check_work(tvbuff_t *tvb, const int const packet_info *pinfo, const guint32 GHashTable GHashTable const guint32 const guint32 const gboolean more_frags, const guint32 flags) fragment_key key ; fragment_data * fd_head ; if ( pinfo -> fd -> flags . visited )  key . src = pinfo -> src; key . dst = pinfo -> dst; key . id = id; fd_head = fragment_add_seq_key ( tvb , offset , pinfo , & key , fragment_key_copy , fragment_table , frag_number , frag_data_len , more_frags , flags | REASSEMBLE_FLAGS_CHECK_DATA_PRESENT ); fragment_data fragment_add_seq_key(tvbuff_t *tvb, const int offset, const packet_info void *key, fragment_key_copier GHashTable *fragment_table, guint32 const guint32 frag_data_len, const gboolean const guint32 flags) fragment_data * fd_head ; fd_head = g_hash_table_lookup ( fragment_table , key ); if ( pinfo -> fd -> flags . visited )  if ( fd_head == NULL )  fd_head = new_head ( FD_BLOCKSEQUENCE ); if ( ( flags & ( REASSEMBLE_FLAGS_NO_FRAG_NUMBER | REASSEMBLE_FLAGS_802_11_HACK ) ) && ! more_frags )  if ( flags & REASSEMBLE_FLAGS_NO_FRAG_NUMBER )  frag_number = 0; if ( flags & REASSEMBLE_FLAGS_NO_FRAG_NUMBER )  fragment_data * fd ; for (fd = fd_head; fd != NULL; fd = fd->next) if ( fd -> next == NULL )  frag_number = fd -> offset + 1; if ( ( flags & REASSEMBLE_FLAGS_CHECK_DATA_PRESENT ) && ! tvb_bytes_exist ( tvb , offset , frag_data_len ) )  if ( fragment_add_seq_work ( fd_head , tvb , offset , pinfo , frag_number , frag_data_len , more_frags , flags ) )  static fragment_add_seq_work(fragment_data *fd_head, tvbuff_t *tvb, const int const packet_info *pinfo, const guint32 const guint32 frag_data_len, const gboolean const guint32 flags _U_) fragment_data * fd ; fragment_data * fd_i ; fragment_data * last_fd ; guint32 max , dfpos ; if ( fd_head -> flags & FD_DEFRAGMENTED && frag_number >= fd_head -> datalen && fd_head -> flags & FD_PARTIAL_REASSEMBLY )  guint32 lastdfpos = 0 ; dfpos = 0; for(fd_i=fd_head->next; fd_i; fd_i=fd_i->next) if ( ! fd_i -> data )  if ( fd_i -> flags & FD_OVERLAP )  fd_i -> data = fd_head -> data + lastdfpos; fd_i -> data = fd_head -> data + dfpos; lastdfpos = dfpos; dfpos += fd_i -> len; fd_i -> flags |= FD_NOT_MALLOCED; fd_i -> flags &= ( ~FD_TOOLONGFRAGMENT ) & ( ~FD_MULTIPLETAILS ); fd_head -> flags &= ~ ( FD_DEFRAGMENTED | FD_PARTIAL_REASSEMBLY | FD_DATALEN_SET ); fd_head -> flags &= ( ~FD_TOOLONGFRAGMENT ) & ( ~FD_MULTIPLETAILS ); fd_head -> datalen = 0; fd_head -> reassembled_in = 0; fd = g_slice_new ( fragment_data ); fd -> next = NULL; fd -> flags = 0; fd -> frame = pinfo -> fd -> num; fd -> offset = frag_number; fd -> len = frag_data_len; fd -> data = NULL; if ( ! more_frags )  if ( fd_head -> flags & FD_DATALEN_SET )  if ( fd_head -> datalen != fd -> offset )  fd -> flags |= FD_MULTIPLETAILS; fd_head -> flags |= FD_MULTIPLETAILS; fd_head -> datalen = fd -> offset; fd_head -> flags |= FD_DATALEN_SET; if ( fd_head -> flags & FD_DEFRAGMENTED )  fd -> flags |= FD_OVERLAP; fd_head -> flags |= FD_OVERLAP; if ( fd -> offset > fd_head -> datalen )  dfpos = 0; last_fd = NULL; for (fd_i=fd_head->next;fd_i && (fd_i->offset!=fd->offset);fd_i=fd_i->next) if ( ! last_fd || last_fd -> offset != fd_i -> offset )  dfpos += fd_i -> len; last_fd = fd_i; if ( fd_i )  if ( fd_i -> len != fd -> len )  if ( memcmp ( fd_head -> data + dfpos , tvb_get_ptr ( tvb , offset , fd -> len ) , fd -> len ) )  