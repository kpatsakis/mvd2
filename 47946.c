void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54b_goodG2BSink(twoIntsStruct * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54c_goodG2BSink(twoIntsStruct * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54d_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54d_goodG2BSink(twoIntsStruct * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54e_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_54e_goodG2BSink(twoIntsStruct * data) twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intOne = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 