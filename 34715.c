void uninit_pointer_013 () int * * ptr = ( int * * ) malloc ( 3 * sizeof ( int * ) ) ; int i , j ; for(i=0;i<3;i++) ptr [ i ] = ( int * ) malloc ( 3 * sizeof ( int ) ); for(i=0;i<3;i++) * ( * ( ptr + i ) + j ) = arr [ i ] [ j ]; free ( ptr [ i ] ); ptr [ i ] = NULL; free ( ptr ); 