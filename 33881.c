static void goodB2G1() int count ; count = - 1; if ( GLOBAL_CONST_TRUE )  char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  count = atoi ( inputBuffer ); if ( GLOBAL_CONST_FALSE )  const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile )  fclose ( pFile ); 