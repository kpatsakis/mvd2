static void v9fs_statfs(void *opaque) int32_t fid ; size_t offset = 7 ; V9fsFidState * fidp ; V9fsPDU * pdu = opaque ; V9fsState * s = pdu -> s ; retval = pdu_unmarshal ( pdu , offset , "d" , & fid ); if ( retval < 0 )  fidp = get_fid ( pdu , fid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; f -> flags |= FID_REFERENCED; return f ; return NULL ; if ( fidp == NULL )  retval = - ENOENT; retval = v9fs_co_statfs ( pdu , & fidp -> path , & stbuf ); if ( retval < 0 )  retval = v9fs_fill_statfs ( s , pdu , & stbuf ); static int v9fs_fill_statfs(V9fsState *s, V9fsPDU *pdu, struct statfs *stbuf) uint32_t f_type ; uint32_t f_bsize ; uint64_t f_blocks ; uint64_t f_bfree ; uint64_t f_bavail ; uint64_t f_files ; uint64_t f_ffree ; uint64_t fsid_val ; uint32_t f_namelen ; size_t offset = 7 ; int32_t bsize_factor ; bsize_factor = ( s -> msize - P9_IOHDRSZ ) / stbuf -> f_bsize; if ( ! bsize_factor )  bsize_factor = 1; f_type = stbuf -> f_type; f_bsize = stbuf -> f_bsize; f_bsize *= bsize_factor; f_blocks = stbuf -> f_blocks / bsize_factor; f_bfree = stbuf -> f_bfree / bsize_factor; f_bavail = stbuf -> f_bavail / bsize_factor; f_files = stbuf -> f_files; f_ffree = stbuf -> f_ffree; fsid_val = ( unsigned int ) stbuf -> f_fsid . __val [ 0 ] | ( unsigned long long ) stbuf -> f_fsid . __val [ 1 ] << 32; f_namelen = stbuf -> f_namelen; return pdu_marshal ( pdu , offset , "ddqqqqqqd" , f_type , f_bsize , f_blocks , f_bfree , f_bavail , f_files , f_ffree , fsid_val , f_namelen ) ; if ( retval < 0 )  retval += offset; complete_pdu ( s , pdu , retval ); static void complete_pdu(V9fsState *s, V9fsPDU *pdu, ssize_t len) if ( len < 0 )  int err = - len ; if ( s -> proto_version != V9FS_PROTO_2000L )  V9fsString str ; str . data = strerror ( err ); str . size = strlen ( str . data ); len += pdu_marshal ( pdu , len , "s" , & str ); len += pdu_marshal ( pdu , len , "d" , err ); pdu_marshal ( pdu , 0 , "dbw" , ( int32_t ) len , id , pdu -> tag ); pdu -> size = len; pdu -> id = id; virtqueue_push ( s -> vq , & pdu -> elem , len ); qemu_co_queue_next ( & pdu -> complete ); free_pdu ( s , pdu ); 