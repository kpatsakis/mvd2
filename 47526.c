void bad() TwoIntsClass * data ; data = ( TwoIntsClass * ) malloc ( 100 * sizeof ( TwoIntsClass ) ); badSink_b ( data ); void badSink_b(TwoIntsClass * data) badSink_c ( data ); void badSink_c(TwoIntsClass * data) badSink_d ( data ); void badSink_d(TwoIntsClass * data) badSink_e ( data ); void badSink_e(TwoIntsClass * data) delete [ ] data 