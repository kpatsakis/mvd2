 CVE_2014_0160_VULN_tls1_process_heartbeat(SSL *s) unsigned char * p = & s -> s3 -> rrec . data [ 0 ] , * pl ; unsigned short hbtype ; unsigned int payload ; unsigned int padding = 16 ; hbtype = * p ++; pl = p; if ( hbtype == TLS1_HB_REQUEST )  unsigned char * buffer , * bp ; buffer = OPENSSL_malloc ( 1 + 2 + payload + padding ); bp = buffer; * bp ++ = TLS1_HB_RESPONSE; memcpy ( bp , pl , payload ); bp += payload; RAND_pseudo_bytes ( bp , padding ); 