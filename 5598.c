static void good1() if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; char filename [ 100 ] = "" ; if ( fgets ( filename , 100 , stdin ) == NULL )  filename [ 0 ] = '\0'; if ( strlen ( filename ) > 0 )  filename [ strlen ( filename ) - 1 ] = '\0'; fileDesc = OPEN ( filename , O_RDWR ); if ( fileDesc == - 1 )  if ( WRITE ( fileDesc , GOOD_SINK_STRING , strlen ( GOOD_SINK_STRING ) ) == - 1 )  if ( fileDesc != - 1 )  CLOSE ( fileDesc ); 