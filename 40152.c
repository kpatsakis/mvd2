static void good1() if ( 0 )  char * filename ; char tmpl [ ] = "goodXXXXXX" ; FILE * pFile ; filename = MKTEMP ( tmpl ); if ( filename != NULL )  pFile = FOPEN ( filename , "w" ); if ( pFile != NULL )  fprintf ( pFile , "Temporary file" ); fclose ( pFile ); 