void CWE467_Use_of_sizeof_on_Pointer_Type__short_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; badShort = ( short * ) malloc ( sizeof ( badShort ) ); * badShort = 5; printShortLine ( * badShort ); void printShortLine (short shortNumber) printf ( "%hd\n" , shortNumber ); free ( badShort ); 