 test(char *str1, char *str2) char * buf , * p ; buf = malloc ( MAXSIZE ); if ( ! buf )  p = buf; snprintf ( p , l , "<%s>" , str1 ); x = strlen ( p ); p += x; l -= x; if ( l > 2 )  * p ++ = ' '; * p ++ = '-'; l -= 2; snprintf ( p , l , "<%s>\n" , str2 ); x = strlen ( p ); p += x; l -= x; printf ( "result: %s\n" , buf ); free ( buf ); 