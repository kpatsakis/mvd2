void bad() char * data ; structType myStruct ; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) char * data = myStruct . structFirst ; char dest [ 50 ] = "" ; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); 