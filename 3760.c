void CWE675_Duplicate_Operations_on_Resource__w32CreateFile_54_bad() HANDLE data ; data = CreateFile ( "BadSource_w32CreateFile.txt" , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); CloseHandle ( data ); CWE675_Duplicate_Operations_on_Resource__w32CreateFile_54b_badSink ( data ); void CWE675_Duplicate_Operations_on_Resource__w32CreateFile_54b_badSink(HANDLE data) CWE675_Duplicate_Operations_on_Resource__w32CreateFile_54c_badSink ( data ); void CWE675_Duplicate_Operations_on_Resource__w32CreateFile_54c_badSink(HANDLE data) CWE675_Duplicate_Operations_on_Resource__w32CreateFile_54d_badSink ( data ); void CWE675_Duplicate_Operations_on_Resource__w32CreateFile_54d_badSink(HANDLE data) CWE675_Duplicate_Operations_on_Resource__w32CreateFile_54e_badSink ( data ); void CWE675_Duplicate_Operations_on_Resource__w32CreateFile_54e_badSink(HANDLE data) CloseHandle ( data ); 