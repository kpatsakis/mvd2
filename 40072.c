char *svn__i64toa_sep(apr_int64_t number,char seperator,apr_pool_t *pool) char buffer [ 2 * 21 ] ; if ( number < 0 )  ui64toa_sep ( ( ( apr_uint64_t ) number ) , seperator , buffer ); static void ui64toa_sep(apr_uint64_t number,char seperator,char *buffer) apr_size_t length = svn__ui64toa ( buffer , number ) ; apr_size_t svn__ui64toa(char *dest,apr_uint64_t number) char buffer [ 21 ] ; apr_uint32_t reduced ; char * target ; if ( number < 100 )  if ( number < 10 )  return 1 ; return 2 ; buffer [ 21 - 1 ] = 0; target = & buffer [ 21 - 3 ]; while ( number >= 100000000 )  reduced = ( ( apr_uint32_t ) ( number % 100000000 ) ); number /= 100000000; memcpy ( ( target - 0 ) , decimal_table [ reduced % 100 ] , 2 ); reduced /= 100; memcpy ( ( target - 2 ) , decimal_table [ reduced % 100 ] , 2 ); reduced /= 100; memcpy ( ( target - 4 ) , decimal_table [ reduced % 100 ] , 2 ); reduced /= 100; memcpy ( ( target - 6 ) , decimal_table [ reduced % 100 ] , 2 ); target -= 8; reduced = ( ( apr_uint32_t ) number ); while ( reduced >= 100 )  memcpy ( target , decimal_table [ reduced % 100 ] , 2 ); reduced /= 100; target -= 2; memcpy ( target , decimal_table [ reduced ] , 2 ); return ( & buffer [ 21 ] - target - 1 ) ; apr_size_t i ; for (i = length; i > 3; i -= 3) memmove ( ( & buffer [ i - 2 ] ) , ( & buffer [ i - 3 ] ) , length - i + 3 ); length ++; 