int main(int argc, char *argv[]) if ( ( str = ( char * ) malloc ( 256 * sizeof ( char ) ) ) != NULL )  strcpy ( str , "Falut!" ); doSomething ( str ); void doSomething(char *str) if ( ! str )  str [ 0 ] = 'S'; printf ( "%s\n" , str ); free ( str ); doSomething ( str ); void doSomething(char *str) if ( ! str )  str [ 0 ] = 'S'; 