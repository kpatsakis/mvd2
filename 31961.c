void bad() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_82_base * baseObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_82_bad baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_82_bad::action(size_t data) wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 