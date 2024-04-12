static enum XML_Error contentProcessor(XML_Parser const char const char const char **endPtr) enum XML_Error result = doContent ( parser , 0 , encoding , start , end , endPtr , ( XML_Bool ) ! ps_finalBuffer ) ; static enum doContent(XML_Parser int const ENCODING const char const char const char XML_Bool haveMore) DTD * const dtd = _dtd const char * * eventPP ; if ( enc == encoding )  eventPP = & eventPtr; eventPP = & ( openInternalEntities -> internalEventPtr ); const char * next = s ; int tok = XmlContentTok ( enc , s , end , & next ) ; switch ( tok )  const XML_Char * name ; ENTITY * entity ; XML_Char ch = ( XML_Char ) XmlPredefinedEntityName ( enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ) ; if ( ch )  name = poolStoreString ( & dtd -> pool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> generalEntities , name , 0 ); if ( ! dtd -> hasParamEntityRefs || dtd -> standalone )  if ( ! entity )  if ( ! entity -> is_internal )  if ( ! entity )  if ( entity -> open )  if ( entity -> notation )  if ( entity -> textPtr )  enum XML_Error result ; if ( ! defaultExpandInternalEntities )  result = processInternalEntity ( parser , entity , XML_FALSE ); if ( result != XML_ERROR_NONE )  if ( externalEntityRefHandler )  const XML_Char * context ; entity -> open = XML_TRUE; context = getContext ( parser ); entity -> open = XML_FALSE; if ( ! context )  if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , context , entity -> base , entity -> systemId , entity -> publicId ) )  TAG * tag ; enum XML_Error result ; XML_Char * toPtr ; if ( freeTagList )  tag = freeTagList; freeTagList = freeTagList -> parent; tag = ( TAG * ) MALLOC ( sizeof ( TAG ) ); if ( ! tag )  tag -> buf = ( char * ) MALLOC ( INIT_TAG_BUF_SIZE ); if ( ! tag -> buf )  tag -> bufEnd = tag -> buf + INIT_TAG_BUF_SIZE; tag -> bindings = NULL; tag -> parent = tagStack; tagStack = tag; tag -> name . localPart = NULL; tag -> name . prefix = NULL; tag -> rawName = s + enc -> minBytesPerChar; tag -> rawNameLength = XmlNameLength ( enc , tag -> rawName ); const char * rawNameEnd = tag -> rawName + tag -> rawNameLength ; const char * fromPtr = tag -> rawName ; toPtr = ( XML_Char * ) tag -> buf; int bufSize ; int convLen ; convLen = ( int ) ( toPtr - ( XML_Char * ) tag -> buf ); if ( fromPtr == rawNameEnd )  tag -> name . strLen = convLen; bufSize = ( int ) ( tag -> bufEnd - tag -> buf ) << 1; char * temp = ( char * ) REALLOC ( tag -> buf , bufSize ) ; if ( temp == NULL )  tag -> buf = temp; tag -> bufEnd = temp + bufSize; toPtr = ( XML_Char * ) temp + convLen; tag -> name . str = ( XML_Char * ) tag -> buf; result = storeAtts ( parser , enc , s , & ( tag -> name ) , & ( tag -> bindings ) ); if ( result )  const char * rawName = s + enc -> minBytesPerChar ; enum XML_Error result ; TAG_NAME name ; name . str = poolStoreString ( & tempPool , enc , rawName , rawName + XmlNameLength ( enc , rawName ) ); if ( ! name . str )  result = storeAtts ( parser , enc , s , & name , & bindings ); if ( result )  if ( tagLevel == 0 )  if ( tagLevel == startTagLevel )  int len ; const char * rawName ; TAG * tag = tagStack ; tagStack = tag -> parent; tag -> parent = freeTagList; freeTagList = tag; rawName = s + enc -> minBytesPerChar * 2; len = XmlNameLength ( enc , rawName ); if ( len != tag -> rawNameLength || memcmp ( tag -> rawName , rawName , len ) != 0 )  while ( tag -> bindings )  tag -> bindings = tag -> bindings -> nextTagBinding; if ( tagLevel == 0 )  int n = XmlCharRefNumber ( enc , s ) ; if ( n < 0 )  enum XML_Error result ; result = doCdataSection ( parser , enc , & next , end , nextPtr , haveMore ); if ( result != XML_ERROR_NONE )  if ( ! next )  if ( characterDataHandler )  if ( MUST_CONVERT ( enc , s ) )  if ( s == next )  * eventPP = s; if ( ! reportProcessingInstruction ( parser , enc , s , next ) )  if ( ! reportComment ( parser , enc , s , next ) )  * eventPP = s = next; switch ( ps_parsing )  static enum storeAtts(XML_Parser parser, const ENCODING const char *attStr, TAG_NAME BINDING **bindingsPtr) DTD * const dtd = _dtd ELEMENT_TYPE * elementType ; int nDefaultAtts ; const XML_Char * * appAtts ; int attIndex = 0 ; int i ; int n ; elementType = ( ELEMENT_TYPE * ) lookup ( & dtd -> elementTypes , tagNamePtr -> str , 0 ); if ( ! elementType )  const XML_Char * name = poolCopyString ( & dtd -> pool , tagNamePtr -> str ) ; if ( ! name )  elementType = ( ELEMENT_TYPE * ) lookup ( & dtd -> elementTypes , name , sizeof ( ELEMENT_TYPE ) ); if ( ! elementType )  if ( ns && ! setElementTypePrefix ( parser , elementType ) )  nDefaultAtts = elementType -> nDefaultAtts; n = XmlGetAttributes ( enc , attStr , attsSize , atts ); if ( n + nDefaultAtts > attsSize )  ATTRIBUTE * temp ; attsSize = n + nDefaultAtts + INIT_ATTS_SIZE; temp = ( ATTRIBUTE * ) REALLOC ( ( void * ) atts , attsSize * sizeof ( ATTRIBUTE ) ); if ( temp == NULL )  atts = temp; appAtts = ( const XML_Char * * ) atts; for (i = 0; i < n; i++) ATTRIBUTE_ID * attId = getAttributeId ( parser , enc , atts [ i ] . name , atts [ i ] . name + XmlNameLength ( enc , atts [ i ] . name ) ) ; if ( ! attId )  if ( ( attId -> name ) [ - 1 ] )  ( attId -> name ) [ - 1 ] = 1; appAtts [ attIndex ++ ] = attId -> name; if ( ! atts [ i ] . normalized )  enum XML_Error result ; XML_Bool isCdata = XML_TRUE ; if ( attId -> maybeTokenized )  int j ; for (j = 0; j < nDefaultAtts; j++) if ( attId == elementType -> defaultAtts [ j ] . id )  isCdata = elementType -> defaultAtts [ j ] . isCdata; result = storeAttributeValue ( parser , enc , isCdata , atts [ i ] . valuePtr , atts [ i ] . valueEnd , & tempPool ); if ( result )  appAtts [ attIndex ] = poolStart ( & tempPool ); appAtts [ attIndex ] = poolStoreString ( & tempPool , enc , atts [ i ] . valuePtr , atts [ i ] . valueEnd ); if ( appAtts [ attIndex ] == 0 )  if ( attId -> prefix )  if ( attId -> xmlns )  enum XML_Error result = addBinding ( parser , attId -> prefix , attId , appAtts [ attIndex ] , bindingsPtr ) ; if ( result )  attIndex ++; ( attId -> name ) [ - 1 ] = 2; attIndex ++; static enum addBinding(XML_Parser parser, PREFIX *prefix, const ATTRIBUTE_ID const XML_Char *uri, BINDING **bindingsPtr) static const XML_Char xmlNamespace [ ] = { 'h' , 't' , 't' , 'p' , ':' , '/' , '/' , 'w' , 'w' , 'w' , '.' , 'w' , '3' , '.' , 'o' , 'r' , 'g' , '/' , 'X' , 'M' , 'L' , '/' , '1' , '9' , '9' , '8' , '/' , 'n' , 'a' , 'm' , 'e' , 's' , 'p' , 'a' , 'c' , 'e' , '\0' } ; static const int xmlLen = ( int ) sizeof ( xmlNamespace ) / sizeof ( XML_Char ) - 1 ; static const XML_Char xmlnsNamespace [ ] = { 'h' , 't' , 't' , 'p' , ':' , '/' , '/' , 'w' , 'w' , 'w' , '.' , 'w' , '3' , '.' , 'o' , 'r' , 'g' , '/' , '2' , '0' , '0' , '0' , '/' , 'x' , 'm' , 'l' , 'n' , 's' , '/' , '\0' } ; static const int xmlnsLen = ( int ) sizeof ( xmlnsNamespace ) / sizeof ( XML_Char ) - 1 ; XML_Bool mustBeXML = XML_FALSE ; XML_Bool isXML = XML_TRUE ; XML_Bool isXMLNS = XML_TRUE ; BINDING * b ; int len ; if ( * uri == XML_T ( '\0' ) && prefix -> name )  if ( prefix -> name && prefix -> name [ 0 ] == XML_T ( 'x' ) && prefix -> name [ 1 ] == XML_T ( 'm' ) && prefix -> name [ 2 ] == XML_T ( 'l' ) )  if ( prefix -> name [ 3 ] == XML_T ( 'n' ) && prefix -> name [ 4 ] == XML_T ( 's' ) && prefix -> name [ 5 ] == XML_T ( '\0' ) )  if ( prefix -> name [ 3 ] == XML_T ( '\0' ) )  mustBeXML = XML_TRUE; for (len = 0; uri[len]; len++) if ( isXML && ( len > xmlLen || uri [ len ] != xmlNamespace [ len ] ) )  isXML = XML_FALSE; if ( ! mustBeXML && isXMLNS && ( len > xmlnsLen || uri [ len ] != xmlnsNamespace [ len ] ) )  isXMLNS = XML_FALSE; isXML = isXML && len == xmlLen; isXMLNS = isXMLNS && len == xmlnsLen; if ( mustBeXML != isXML )  if ( isXMLNS )  if ( namespaceSeparator )  len ++; if ( freeBindingList )  b = freeBindingList; if ( len > b -> uriAlloc )  XML_Char * temp = ( XML_Char * ) REALLOC ( b -> uri , sizeof ( XML_Char ) * ( len + EXPAND_SPARE ) ) ; if ( temp == NULL )  b -> uri = temp; b = ( BINDING * ) MALLOC ( sizeof ( BINDING ) ); if ( ! b )  b -> uri = ( XML_Char * ) MALLOC ( sizeof ( XML_Char ) * ( len + EXPAND_SPARE ) ); if ( ! b -> uri )  b -> uriAlloc = len + EXPAND_SPARE; b -> uriLen = len; memcpy ( b -> uri , uri , len * sizeof ( XML_Char ) ); b -> uri [ len - 1 ] = namespaceSeparator; b -> prefix = prefix; b -> attId = attId; b -> prevPrefixBinding = prefix -> binding; prefix -> binding = b; b -> nextTagBinding = * bindingsPtr; * bindingsPtr = b; startNamespaceDeclHandler ( handlerArg , prefix -> name , prefix -> binding ? uri : 0 ); 