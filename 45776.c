static void goodB2G1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); CWE606_Unchecked_Loop_Condition__char_file_22_goodB2G1Sink ( data ); void CWE606_Unchecked_Loop_Condition__char_file_22_goodB2G1Sink(char * data) if ( sscanf ( data , "%d" , & n ) == 1 )  