void bad() int64_t * data ; data = NULL; data = NULL; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); badSink_b ( data ); void badSink_b(int64_t * data) badSink_c ( data ); void badSink_c(int64_t * data) badSink_d ( data ); void badSink_d(int64_t * data) badSink_e ( data ); void badSink_e(int64_t * data) delete data 