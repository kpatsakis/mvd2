static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; strcat ( data , "c:\\temp\\file.txt" ); goodG2BSink_b ( data ); void goodG2BSink_b(char * data) goodG2BSink_c ( data ); void goodG2BSink_c(char * data) goodG2BSink_d ( data ); void goodG2BSink_d(char * data) pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 