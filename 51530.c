void CWE415_Double_Free__malloc_free_char_53_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); free ( data ); CWE415_Double_Free__malloc_free_char_53b_badSink ( data ); void CWE415_Double_Free__malloc_free_char_53b_badSink(char * data) CWE415_Double_Free__malloc_free_char_53c_badSink ( data ); void CWE415_Double_Free__malloc_free_char_53c_badSink(char * data) CWE415_Double_Free__malloc_free_char_53d_badSink ( data ); void CWE415_Double_Free__malloc_free_char_53d_badSink(char * data) free ( data ); 