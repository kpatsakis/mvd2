static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE606_Unchecked_Loop_Condition__char_console_61b_goodB2GSource ( data ); char * CWE606_Unchecked_Loop_Condition__char_console_61b_goodB2GSource(char * data) size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; return data ; if ( sscanf ( data , "%d" , & n ) == 1 )  