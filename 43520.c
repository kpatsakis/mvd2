static CharDriverState *qemu_chr_open_win_pipe(const char *filename) CharDriverState * chr ; WinCharState * s ; chr = qemu_mallocz ( sizeof ( CharDriverState ) ); s = qemu_mallocz ( sizeof ( WinCharState ) ); chr -> opaque = s; chr -> chr_write = win_chr_write; chr -> chr_close = win_chr_close; if ( win_chr_pipe_init ( chr , filename ) < 0 )  static int win_chr_pipe_init(CharDriverState *chr, const char *filename) WinCharState * s = chr -> opaque ; char openname [ 256 ] ; s -> fpipe = TRUE; s -> hsend = CreateEvent ( NULL , TRUE , FALSE , NULL ); if ( ! s -> hsend )  s -> hrecv = CreateEvent ( NULL , TRUE , FALSE , NULL ); if ( ! s -> hrecv )  snprintf ( openname , sizeof ( openname ) , "\\\\.\\pipe\\%s" , filename ); s -> hcom = CreateNamedPipe ( openname , PIPE_ACCESS_DUPLEX | FILE_FLAG_OVERLAPPED , PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT , MAXCONNECT , NSENDBUF , NRECVBUF , NTIMEOUT , NULL ); if ( s -> hcom == INVALID_HANDLE_VALUE )  s -> hcom = NULL; ret = ConnectNamedPipe ( s -> hcom , & ov ); if ( ret )  ret = GetOverlappedResult ( s -> hcom , & ov , & size , TRUE ); if ( ! ret )  