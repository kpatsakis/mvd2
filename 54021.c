void CWE665_Improper_Initialization__wchar_t_cat_22_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; data = CWE665_Improper_Initialization__wchar_t_cat_22_badSource ( data ); wchar_t * CWE665_Improper_Initialization__wchar_t_cat_22_badSource(wchar_t * data) return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscat ( data , source ); 