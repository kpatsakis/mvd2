int CVE_2014_3511_VULN_ssl23_get_client_hello(SSL *s) char buf_space [ 11 ] ; char * buf = & ( buf_space [ 0 ] ) ; unsigned char * p , * d , * d_len , * dd ; if ( s -> state == SSL23_ST_SR_CLNT_HELLO_A )  if ( ! ssl3_setup_buffers ( s ) )  n = ssl23_read_bytes ( s , sizeof buf_space ); if ( n != sizeof buf_space )  p = s -> packet; memcpy ( buf , p , n ); memcpy ( s -> packet , buf , n ); s -> s3 -> rbuf . left = n; s -> s3 -> rbuf . offset = 0; s -> handshake_func = s -> method -> ssl_accept; s -> init_num = 0; if ( buf != buf_space )  OPENSSL_free ( buf ); return ( SSL_accept ( s ) ) ; if ( buf != buf_space )  OPENSSL_free ( buf ); 