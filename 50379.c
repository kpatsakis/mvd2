int main(int argc, char *argv[]) size_t arglen , esclen , fmtlen ; char * server = "localhost" ; char * user = "root" ; char * database = "bank" ; char * password ; char * query ; char * fmtString = "SELECT * FROM users WHERE firstname LIKE '%s'" ; char * param_escaped ; unsigned int i ; if ( argc < 2 )  conn = mysql_init ( NULL ); if ( ! conn )  password = getpass_r ( "DB Password: " ); char * getpass_r(const char *prompt) struct termios oflags , nflags ; char password [ 64 ] = { '\0' } ; if ( tcgetattr ( fileno ( stdin ) , & oflags ) )  return NULL ; nflags = oflags; nflags . c_lflag &= ~ECHO; nflags . c_lflag |= ECHONL; if ( tcsetattr ( fileno ( stdin ) , TCSAFLUSH , & nflags ) )  return NULL ; ret = fgets ( password , sizeof ( password ) , stdin ); if ( tcsetattr ( fileno ( stdin ) , TCSAFLUSH , & oflags ) )  return NULL ; if ( ret )  ret = strdup ( password ); return ret ; if ( ! password )  if ( ! mysql_real_connect ( conn , server , user , password , database , 0 , NULL , 0 ) )  for (i = 1; i < argc; ++i) arglen = strlen ( argv [ i ] ); if ( arglen > ( SIZE_MAX / sizeof * param_escaped - 1 ) / 2 )  param_escaped = malloc ( ( 2 * arglen + 1 ) * sizeof * param_escaped ); if ( param_escaped == NULL )  esclen = mysql_real_escape_string ( conn , param_escaped , argv [ i ] , arglen ); fmtlen = strlen ( fmtString ); if ( esclen > SIZE_MAX / sizeof * query - fmtlen )  query = malloc ( ( esclen + fmtlen + 1 ) * sizeof * query ); if ( query == NULL )  free ( param_escaped ); sprintf ( query , fmtString , param_escaped ); if ( mysql_query ( conn , query ) )  