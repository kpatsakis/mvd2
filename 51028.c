static void goodG2B() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_52b_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_52b_goodG2BSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_52c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_52c_goodG2BSink(char * data) char dest [ 50 ] = "" ; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); 