void CWE123_Write_What_Where_Condition__fgets_12_bad() badStruct data ; linkedList head = { & head , & head } ; data . list . next = head . next; data . list . prev = head . prev; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; if ( fgets ( ( char * ) & data , sizeof ( data ) , stdin ) == NULL )  linkedListPrev = data . list . prev; linkedListNext = data . list . next; linkedListPrev -> next = linkedListNext; linkedListNext -> prev = linkedListPrev; 