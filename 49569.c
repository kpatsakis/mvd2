static void goodG2B() char * data ; char * * dataPtr1 = & data ; char * * dataPtr2 = & data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; char * data = * dataPtr1 ; strcat ( data , "c:\\temp\\file.txt" ); char * data = * dataPtr2 ; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 