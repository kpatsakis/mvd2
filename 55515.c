static int CVE_2013_3670_PATCHED_rle_unpack(const unsigned char *src, int src_len, int unsigned char *dest, int dest_len) const unsigned char * ps ; const unsigned char * ps_end ; unsigned char * pd ; int i , j , l ; unsigned char * dest_end = dest + dest_len ; ps = src; ps_end = src + src_len; pd = dest; if ( src_count & 1 )  if ( ps_end - ps < 1 )  * pd ++ = * ps ++; src_count >>= 1; i = 0; if ( ps_end - ps < 1 )  l = * ps ++; if ( l & 0x80 )  l = ( l & 0x7F ) * 2; if ( dest_end - pd < l || ps_end - ps < l )  memcpy ( pd , ps , l ); ps += l; pd += l; if ( dest_end - pd < 2 * l || ps_end - ps < 2 )  for (j = 0; j < l; j++) * pd ++ = ps [ 0 ]; * pd ++ = ps [ 1 ]; ps += 2; i += l; while ( i < src_count )  