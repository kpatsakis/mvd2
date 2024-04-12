static enum XML_Error internalEntityProcessor(XML_Parser const char const char const char **nextPtr) ENTITY * entity ; const char * textStart , * textEnd ; const char * next ; enum XML_Error result ; OPEN_INTERNAL_ENTITY * openEntity = openInternalEntities ; if ( ! openEntity )  entity = openEntity -> entity; textStart = ( ( char * ) entity -> textPtr ) + entity -> processed; textEnd = ( char * ) ( entity -> textPtr + entity -> textLen ); if ( entity -> is_param )  int tok = XmlPrologTok ( internalEncoding , textStart , textEnd , & next ) ; result = doProlog ( parser , internalEncoding , textStart , textEnd , tok , next , & next , XML_FALSE ); result = doContent ( parser , openEntity -> startTagLevel , internalEncoding , textStart , textEnd , & next , XML_FALSE ); if ( result != XML_ERROR_NONE )  if ( textEnd != next && ps_parsing == XML_SUSPENDED )  entity -> open = XML_FALSE; if ( entity -> is_param )  return doContent ( parser , parentParser ? 1 : 0 , encoding , s , end , nextPtr , ( XML_Bool ) ! ps_finalBuffer ) ; static enum doContent(XML_Parser int const ENCODING const char const char const char XML_Bool haveMore) DTD * const dtd = _dtd const char * * eventPP ; if ( enc == encoding )  eventPP = & eventPtr; eventPP = & ( openInternalEntities -> internalEventPtr ); const char * next = s ; int tok = XmlContentTok ( enc , s , end , & next ) ; switch ( tok )  const XML_Char * name ; ENTITY * entity ; XML_Char ch = ( XML_Char ) XmlPredefinedEntityName ( enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ) ; if ( ch )  name = poolStoreString ( & dtd -> pool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> generalEntities , name , 0 ); if ( ! dtd -> hasParamEntityRefs || dtd -> standalone )  if ( ! entity )  if ( ! entity -> is_internal )  if ( ! entity )  if ( entity -> open )  if ( entity -> notation )  if ( entity -> textPtr )  enum XML_Error result ; if ( ! defaultExpandInternalEntities )  result = processInternalEntity ( parser , entity , XML_FALSE ); if ( result != XML_ERROR_NONE )  if ( externalEntityRefHandler )  const XML_Char * context ; entity -> open = XML_TRUE; context = getContext ( parser ); entity -> open = XML_FALSE; if ( ! context )  if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , context , entity -> base , entity -> systemId , entity -> publicId ) )  TAG * tag ; enum XML_Error result ; XML_Char * toPtr ; if ( freeTagList )  tag = freeTagList; freeTagList = freeTagList -> parent; tag = ( TAG * ) MALLOC ( sizeof ( TAG ) ); if ( ! tag )  tag -> buf = ( char * ) MALLOC ( INIT_TAG_BUF_SIZE ); if ( ! tag -> buf )  tag -> bufEnd = tag -> buf + INIT_TAG_BUF_SIZE; tag -> bindings = NULL; tag -> parent = tagStack; tagStack = tag; tag -> name . localPart = NULL; tag -> name . prefix = NULL; tag -> rawName = s + enc -> minBytesPerChar; tag -> rawNameLength = XmlNameLength ( enc , tag -> rawName ); const char * rawNameEnd = tag -> rawName + tag -> rawNameLength ; const char * fromPtr = tag -> rawName ; toPtr = ( XML_Char * ) tag -> buf; int bufSize ; int convLen ; convLen = ( int ) ( toPtr - ( XML_Char * ) tag -> buf ); if ( fromPtr == rawNameEnd )  tag -> name . strLen = convLen; bufSize = ( int ) ( tag -> bufEnd - tag -> buf ) << 1; char * temp = ( char * ) REALLOC ( tag -> buf , bufSize ) ; if ( temp == NULL )  tag -> buf = temp; tag -> bufEnd = temp + bufSize; toPtr = ( XML_Char * ) temp + convLen; tag -> name . str = ( XML_Char * ) tag -> buf; result = storeAtts ( parser , enc , s , & ( tag -> name ) , & ( tag -> bindings ) ); if ( result )  const char * rawName = s + enc -> minBytesPerChar ; enum XML_Error result ; TAG_NAME name ; name . str = poolStoreString ( & tempPool , enc , rawName , rawName + XmlNameLength ( enc , rawName ) ); if ( ! name . str )  result = storeAtts ( parser , enc , s , & name , & bindings ); if ( result )  if ( tagLevel == 0 )  if ( tagLevel == startTagLevel )  int len ; const char * rawName ; TAG * tag = tagStack ; tagStack = tag -> parent; tag -> parent = freeTagList; freeTagList = tag; rawName = s + enc -> minBytesPerChar * 2; len = XmlNameLength ( enc , rawName ); if ( len != tag -> rawNameLength || memcmp ( tag -> rawName , rawName , len ) != 0 )  while ( tag -> bindings )  tag -> bindings = tag -> bindings -> nextTagBinding; if ( tagLevel == 0 )  int n = XmlCharRefNumber ( enc , s ) ; if ( n < 0 )  enum XML_Error result ; result = doCdataSection ( parser , enc , & next , end , nextPtr , haveMore ); if ( result != XML_ERROR_NONE )  if ( ! next )  if ( characterDataHandler )  if ( MUST_CONVERT ( enc , s ) )  if ( s == next )  * eventPP = s; if ( ! reportProcessingInstruction ( parser , enc , s , next ) )  if ( ! reportComment ( parser , enc , s , next ) )  * eventPP = s = next; switch ( ps_parsing )  static enum storeAtts(XML_Parser parser, const ENCODING const char *attStr, TAG_NAME BINDING **bindingsPtr) DTD * const dtd = _dtd ELEMENT_TYPE * elementType ; elementType = ( ELEMENT_TYPE * ) lookup ( & dtd -> elementTypes , tagNamePtr -> str , 0 ); if ( ! elementType )  const XML_Char * name = poolCopyString ( & dtd -> pool , tagNamePtr -> str ) ; if ( ! name )  elementType = ( ELEMENT_TYPE * ) lookup ( & dtd -> elementTypes , name , sizeof ( ELEMENT_TYPE ) ); static NAMED lookup(HASH_TABLE *table, KEY name, size_t createSize) size_t i ; if ( table -> size == 0 )  unsigned long h = hash ( name ) ; unsigned long mask = ( unsigned long ) table -> size - 1 ; unsigned char step = 0 ; i = h & mask; while ( table -> v [ i ] )  if ( keyeq ( name , table -> v [ i ] -> name ) )  if ( ! step )  step = PROBE_STEP ( h , mask , table -> power ); i < step ? ( i += table -> size - step ) : ( i -= step ); if ( ! createSize )  if ( table -> used >> ( table -> power - 1 ) )  unsigned char newPower = table -> power + 1 ; size_t newSize = ( size_t ) 1 << newPower ; size_t tsize = newSize * sizeof ( NAMED * ) ; NAMED * * newV = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ) ; if ( ! newV )  memset ( newV , 0 , tsize ); while ( newV [ j ] )  newV [ j ] = table -> v [ i ]; table -> v = newV; table -> power = newPower; table -> size = newSize; while ( table -> v [ i ] )  table -> v [ i ] = ( NAMED * ) table -> mem -> malloc_fcn ( createSize ); if ( ! table -> v [ i ] )  memset ( table -> v [ i ] , 0 , createSize ); table -> v [ i ] -> name = name; ( table -> used ) ++; return table -> v [ i ] ; 