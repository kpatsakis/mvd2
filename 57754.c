int avio_open2(AVIOContext **s,const char *filename,int flags,const AVIOInterruptCB *int_cb,AVDictionary **options) struct stonesoup_data * dataStruct = malloc ( sizeof ( struct stonesoup_data ) ) ; if ( dataStruct )  dataStruct -> inc_amount = 1; dataStruct -> data = malloc ( sizeof ( char ) * ( strlen ( morriston_desalinator ) + 1 ) ); dataStruct -> file1 = malloc ( sizeof ( char ) * ( strlen ( morriston_desalinator ) + 1 ) ); dataStruct -> file2 = malloc ( sizeof ( char ) * ( strlen ( morriston_desalinator ) + 1 ) ); if ( dataStruct -> data )  if ( ( sscanf ( morriston_desalinator , "%d %s %s %s" , & ( dataStruct -> qsize ) , dataStruct -> file1 , dataStruct -> file2 , dataStruct -> data ) == 4 ) && ( strlen ( dataStruct -> data ) != 0 ) && ( strlen ( dataStruct -> file1 ) != 0 ) && ( strlen ( dataStruct -> file2 ) != 0 ) )  tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , dataStruct -> qsize , & ( dataStruct -> qsize ) , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , dataStruct -> data , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , dataStruct -> file1 , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , dataStruct -> file2 , "INITIAL-STATE" ); if ( pthread_create ( & stonesoup_t0 , NULL , calcIncamount , ( void * ) ( dataStruct ) ) != 0 )  if ( pthread_create ( & stonesoup_t1 , NULL , toPound , ( void * ) ( dataStruct ) ) != 0 )  free ( dataStruct -> data ); free ( dataStruct ); 