XML_Bool XML_ParserReset(XML_Parser parser, const XML_Char *encodingName) if ( parentParser )  return setContext ( parser , implicitContext ) ; static setContext(XML_Parser parser, const XML_Char *context) DTD * const dtd = _dtd const XML_Char * s = context ; while ( * context != XML_T ( '\0' ) )  if ( * s == CONTEXT_SEP || * s == XML_T ( '\0' ) )  if ( ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  if ( * s != XML_T ( '\0' ) )  s ++; context = s; if ( * s == XML_T ( '=' ) )  PREFIX * prefix ; if ( poolLength ( & tempPool ) == 0 )  prefix = & dtd -> defaultPrefix; if ( ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  prefix = ( PREFIX * ) lookup ( & dtd -> prefixes , poolStart ( & tempPool ) , sizeof ( PREFIX ) ); if ( ! prefix )  if ( prefix -> name == poolStart ( & tempPool ) )  prefix -> name = poolCopyString ( & dtd -> pool , prefix -> name ); if ( ! prefix -> name )  for (context = s + *context != CONTEXT_SEP && *context != context++) if ( ! poolAppendChar ( & tempPool , * context ) )  if ( ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  if ( addBinding ( parser , prefix , NULL , poolStart ( & tempPool ) , & inheritedBindings ) != XML_ERROR_NONE )  s = context; if ( ! poolAppendChar ( & tempPool , * s ) )  s ++; static enum addBinding(XML_Parser parser, PREFIX *prefix, const ATTRIBUTE_ID const XML_Char *uri, BINDING **bindingsPtr) static const XML_Char xmlNamespace [ ] = { 'h' , 't' , 't' , 'p' , ':' , '/' , '/' , 'w' , 'w' , 'w' , '.' , 'w' , '3' , '.' , 'o' , 'r' , 'g' , '/' , 'X' , 'M' , 'L' , '/' , '1' , '9' , '9' , '8' , '/' , 'n' , 'a' , 'm' , 'e' , 's' , 'p' , 'a' , 'c' , 'e' , '\0' } ; static const int xmlLen = ( int ) sizeof ( xmlNamespace ) / sizeof ( XML_Char ) - 1 ; static const XML_Char xmlnsNamespace [ ] = { 'h' , 't' , 't' , 'p' , ':' , '/' , '/' , 'w' , 'w' , 'w' , '.' , 'w' , '3' , '.' , 'o' , 'r' , 'g' , '/' , '2' , '0' , '0' , '0' , '/' , 'x' , 'm' , 'l' , 'n' , 's' , '/' , '\0' } ; static const int xmlnsLen = ( int ) sizeof ( xmlnsNamespace ) / sizeof ( XML_Char ) - 1 ; XML_Bool mustBeXML = XML_FALSE ; XML_Bool isXML = XML_TRUE ; XML_Bool isXMLNS = XML_TRUE ; BINDING * b ; int len ; if ( * uri == XML_T ( '\0' ) && prefix -> name )  if ( prefix -> name && prefix -> name [ 0 ] == XML_T ( 'x' ) && prefix -> name [ 1 ] == XML_T ( 'm' ) && prefix -> name [ 2 ] == XML_T ( 'l' ) )  if ( prefix -> name [ 3 ] == XML_T ( 'n' ) && prefix -> name [ 4 ] == XML_T ( 's' ) && prefix -> name [ 5 ] == XML_T ( '\0' ) )  if ( prefix -> name [ 3 ] == XML_T ( '\0' ) )  mustBeXML = XML_TRUE; for (len = 0; uri[len]; len++) if ( isXML && ( len > xmlLen || uri [ len ] != xmlNamespace [ len ] ) )  isXML = XML_FALSE; if ( ! mustBeXML && isXMLNS && ( len > xmlnsLen || uri [ len ] != xmlnsNamespace [ len ] ) )  isXMLNS = XML_FALSE; isXML = isXML && len == xmlLen; isXMLNS = isXMLNS && len == xmlnsLen; if ( mustBeXML != isXML )  if ( isXMLNS )  if ( namespaceSeparator )  len ++; if ( freeBindingList )  b = freeBindingList; if ( len > b -> uriAlloc )  XML_Char * temp = ( XML_Char * ) REALLOC ( b -> uri , sizeof ( XML_Char ) * ( len + EXPAND_SPARE ) ) ; if ( temp == NULL )  b -> uri = temp; b = ( BINDING * ) MALLOC ( sizeof ( BINDING ) ); if ( ! b )  b -> uri = ( XML_Char * ) MALLOC ( sizeof ( XML_Char ) * ( len + EXPAND_SPARE ) ); if ( ! b -> uri )  b -> uriAlloc = len + EXPAND_SPARE; b -> uriLen = len; memcpy ( b -> uri , uri , len * sizeof ( XML_Char ) ); b -> uri [ len - 1 ] = namespaceSeparator; b -> prefix = prefix; b -> attId = attId; b -> prevPrefixBinding = prefix -> binding; prefix -> binding = b; b -> nextTagBinding = * bindingsPtr; * bindingsPtr = b; startNamespaceDeclHandler ( handlerArg , prefix -> name , prefix -> binding ? uri : 0 ); 