int main() u_char * name = ( u_char * ) malloc ( 100 * sizeof ( u_char ) ) ; ret = rrextract ( msg , msglen , dp , name , 100 ); static rrextract(u_char *msg, int msglen, u_char *rrp, u_char *dname, int namelen) HEADER * hp = ( HEADER * ) msg ; cp = rrp; eom = msg + msglen; printf ( "msg = %s, msglen = %d, rrp = %s, namelen = %d\n" , ( char * ) msg , msglen , ( char * ) rrp , namelen ); if ( ( n = dn_expand ( msg , eom , cp , ( char * ) dname , namelen ) ) < 0 )  printf ( "dn_expand returned %d\n" , n ); hp -> rcode = FORMERR; printf ( "First dn_expand returned n = %d\n" , n ); cp += n; len += n; len += sizeof ( HEADER ); BOUNDS_CHECK ( cp , 2 * INT16SZ + INT32SZ + INT16SZ ); GETSHORT ( type , cp ); cp += 2; len += 2; GETSHORT ( class , cp ) cp += 2; len += 2; hp -> rcode = FORMERR; cp += 4; len += 4; printf ( "%s: converted TTL > %u to 0" , dname , MAXIMUM_TTL ); GETSHORT ( dlen , cp ); cp += 2; len += 2; BOUNDS_CHECK ( cp , dlen ); rdatap = cp; hp -> rcode = FORMERR; BOUNDS_CHECK ( cp , INT16SZ + 1 + 1 + 3 * INT32SZ ); cp1 = cp; GETSHORT ( temp , cp1 ); cp1 += 2; len += 2; GETSHORT ( temp , cp1 ); cp1 += 2; len += 2; GETLONG ( origTTL , cp1 ); cp1 += 4; len += 4; GETLONG ( exptime , cp1 ); cp1 += 4; len += 4; GETLONG ( signtime , cp1 ); cp1 += 4; len += 4; GETSHORT ( temp , cp1 ); cp1 += 2; len += 2; return ( ( cp - rrp ) + dlen ) ; return ( ( cp - rrp ) + dlen ) ; cp = cp1 - 18; BOUNDS_CHECK ( cp , 18 ); memcpy ( cp1 , cp , 18 ); cp1 += 18; printf ( "comp name = %s\n" , ( char * ) cp + 18 ); n = dn_expand ( msg , eom , cp + 18 , ( char * ) cp1 , ( sizeof data ) - 18 ); printf ( "dn_expand returned:  %d, expanded name = %s\n" , n , ( char * ) cp1 ); if ( n < 0 || n + NS_SIG_SIGNER > dlen )  printf ( "ERROR: Either n = %d < 0 or n+ns_sig_signer = %d > dlen = %d!\n" , n , n + NS_SIG_SIGNER , dlen ); cp += n; cp1 += strlen ( ( char * ) cp1 ) + 1; n = dlen - ( NS_SIG_SIGNER + n ); printf ( "dlen - NS_SIG_SIGNER - n = %d\n" , n ); if ( n > ( sizeof data ) - ( cp1 - ( u_char * ) data ) )  if ( n < NS_MD5RSA_MIN_SIZE || n > NS_MD5RSA_MAX_SIZE )  if ( n != NS_DSA_SIG_SIZE )  if ( hp -> rcode == FORMERR )  printf ( "MEMCPY: Copying %u bytes into data buf!\n" , n ); memcpy ( cp1 , cp , n ); cp += n; cp1 += n; n = cp1 - ( u_char * ) data; return ( ( cp - rrp ) + dlen ) ; if ( cp > eom )  if ( ( u_int ) ( cp - rdatap ) != dlen )  printf ( "encoded rdata length is %u, but actual length was %u" , dlen , ( u_int ) ( cp - rdatap ) ); if ( n > MAXDATA )  printf ( "update type %d: %d bytes is too much data" , type , n ); return ( cp - rrp ) ; printf ( "rrextract returned %d\n" , ret ); 