cgiEnvironmentResultType cgiReadEnvironment(char *filename) FILE * in ; in = fopen ( filename , "rb" ); if ( ! cgiReadString ( in , & cgiServerSoftware ) )  if ( ! cgiReadString ( in , & cgiServerName ) )  if ( ! cgiReadString ( in , & cgiGatewayInterface ) )  if ( ! cgiReadString ( in , & cgiServerProtocol ) )  if ( ! cgiReadString ( in , & cgiServerPort ) )  if ( ! cgiReadString ( in , & cgiRequestMethod ) )  if ( ! cgiReadString ( in , & cgiPathInfo ) )  if ( ! cgiReadString ( in , & cgiPathTranslated ) )  if ( ! cgiReadString ( in , & cgiScriptName ) )  if ( ! cgiReadString ( in , & cgiQueryString ) )  if ( ! cgiReadString ( in , & cgiRemoteHost ) )  if ( ! cgiReadString ( in , & cgiRemoteAddr ) )  if ( ! cgiReadString ( in , & cgiAuthType ) )  if ( ! cgiReadString ( in , & cgiRemoteUser ) )  if ( ! cgiReadString ( in , & cgiRemoteIdent ) )  if ( ! cgiReadString ( in , & cgiContentType ) )  if ( ! cgiReadString ( in , & cgiAccept ) )  if ( ! cgiReadString ( in , & cgiUserAgent ) )  if ( ! cgiReadString ( in , & cgiReferrer ) )  if ( ! cgiReadString ( in , & cgiCookie ) )  if ( ! cgiReadInt ( in , & cgiContentLength ) )  while ( 1 )  int fileFlag ; e = ( cgiFormEntry * ) calloc ( 1 , sizeof ( cgiFormEntry ) ); if ( ! e )  memset ( e , 0 , sizeof ( cgiFormEntry ) ); if ( ! cgiReadString ( in , & e -> attr ) )  if ( ! cgiReadString ( in , & e -> value ) )  if ( ! cgiReadString ( in , & e -> fileName ) )  if ( ! cgiReadString ( in , & e -> contentType ) )  if ( ! cgiReadInt ( in , & e -> valueLength ) )  if ( ! cgiReadInt ( in , & fileFlag ) )  if ( fileFlag )  char buffer [ 1024 ] ; FILE * out ; char tfileName [ 1024 ] ; int got ; int len = e -> valueLength ; if ( getTempFileName ( tfileName ) != cgiParseSuccess )  out = fopen ( tfileName , "w+b" ); if ( ! out )  while ( len > 0 )  int tryr = len ; if ( tryr > ( ( int ) sizeof ( buffer ) ) )  tryr = sizeof ( buffer ); got = fread ( buffer , 1 , tryr , in ); if ( got <= 0 )  if ( ( ( int ) fwrite ( buffer , 1 , got , out ) ) != got )  len -= got; e -> tfileName = ( char * ) malloc ( ( int ) strlen ( tfileName ) + 1 ); if ( ! e -> tfileName )  e -> tfileName = ( char * ) malloc ( 1 ); if ( ! e -> tfileName )  e -> tfileName [ 0 ] = '\0'; e -> next = 0; static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  ( * s ) [ len ] = '\0'; 