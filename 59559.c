static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; goodB2GVaSink ( data , data ); static void goodB2GVaSink(wchar_t * data, ...) va_start ( args , data ); 