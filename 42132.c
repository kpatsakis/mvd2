static void goodB2G() int64_t * data ; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); goodB2GSink_b ( data ); void goodB2GSink_b(int64_t * data) goodB2GSink_c ( data ); void goodB2GSink_c(int64_t * data) goodB2GSink_d ( data ); void goodB2GSink_d(int64_t * data) goodB2GSink_e ( data ); void goodB2GSink_e(int64_t * data) free ( data ); 