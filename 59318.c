int main(int argc, char **argv) char * userstr ; char * userstr2 ; if ( argc > 2 )  userstr = argv [ 1 ]; userstr2 = argv [ 2 ]; test ( userstr , userstr2 ); void test(char *str, char *str2) char buf [ MAXSIZE ] = "" ; if ( strlen ( str ) < MAXSIZE )  strcpy ( buf , str ); printf ( " strcpy: %s%s%s\n" , pre , buf , post ); strcat ( buf , str2 ); printf ( "results: %s%s%s\n" , pre , buf , post ); 