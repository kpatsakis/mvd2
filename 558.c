void odalisks_retrocervical(char **maureen_hieing) int bunnymouth_sublavius = 24 ; char * sierraville_kimberlite ; stonesoup_read_taint ( & sierraville_kimberlite , "9456" , bunnymouth_sublavius ); void stonesoup_read_taint(char** stonesoup_tainted_buff, char* stonesoup_envKey, int stonesoup_shmsz) int stonesoup_shmid ; key_t stonesoup_key ; char * stonesoup_shm , * stonesoup_s ; * stonesoup_tainted_buff = NULL; if ( getenv ( "STONESOUP_DISABLE_WEAKNESS" ) == NULL || strcmp ( getenv ( "STONESOUP_DISABLE_WEAKNESS" ) , "1" ) != 0 )  if ( stonesoup_envKey != NULL )  if ( sscanf ( stonesoup_envKey , "%d" , & stonesoup_key ) > 0 )  if ( ( stonesoup_shmid = shmget ( stonesoup_key , stonesoup_shmsz , 0666 ) ) >= 0 )  if ( ( stonesoup_shm = shmat ( stonesoup_shmid , NULL , 0 ) ) != ( char * ) - 1 )  * stonesoup_tainted_buff = ( char * ) calloc ( stonesoup_shmsz , sizeof ( char ) ); for (stonesoup_s = stonesoup_shm; *stonesoup_s != (char)0; stonesoup_s++) ( * stonesoup_tainted_buff ) [ stonesoup_s - stonesoup_shm ] = * stonesoup_s; * stonesoup_tainted_buff = NULL; 