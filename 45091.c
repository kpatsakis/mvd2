int main(int argc, char **argv) u_char * msg , * cp , * eom ; int msglen ; msg = ( u_char * ) malloc ( 10000 * sizeof ( u_char ) ); msglen = create_msg ( msg , 10000 ); int create_msg(u_char *msg, int len) FILE * f ; int i = 0 ; int c ; if ( ( f = fopen ( "iquery-file" , "r" ) ) == NULL )  while ( ( ( c = fgetc ( f ) ) != EOF ) && ( i < len ) )  * msg ++ = ( u_char ) c; i ++; 