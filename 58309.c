void NetworkUtils::addDefaultRouteToNetwork(CommandChain* CommandCallback NetworkResultOptions& aResult) if ( GET_FIELD ( mLoopIndex ) >= GET_FIELD ( mGateways ) . Length ( ) )  char command [ MAX_COMMAND_SIZE ] ; nsTArray < nsString > & gateways = GET_FIELD ( mGateways ) ; NS_ConvertUTF16toUTF8 autoGateway ( gateways [ GET_FIELD ( mLoopIndex ) ] ) ; int type = getIpType ( autoGateway . get ( ) ) ; static int getIpType(const char *aIp) struct addrinfo hint , * ip_info = NULL ; memset ( & hint , 0 , sizeof ( hint ) ); hint . ai_family = AF_UNSPEC; hint . ai_flags = AI_NUMERICHOST; if ( getaddrinfo ( aIp , NULL , & hint , & ip_info ) )  return AF_UNSPEC ; int type = ip_info -> ai_family ; return type ; snprintf ( command , MAX_COMMAND_SIZE - 1 , "network route add %d %s %s/0 %s" , GET_FIELD ( mNetId ) , GET_CHAR ( mIfname ) , type == AF_INET6 ? "::" : "0.0.0.0" , autoGateway . get ( ) ); doCommand ( command , aChain , wrappedCallback ); 