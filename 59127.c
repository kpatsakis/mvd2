static void good1() while ( 1 )  if ( ! stdThreadLockCreate ( & gGoodLock ) )  int stdThreadLockCreate(stdThreadLock *lock) stdThreadLock my_lock = NULL ; my_lock = ( stdThreadLock ) malloc ( sizeof ( * my_lock ) ); if ( my_lock == NULL )  return 0 ; return 1 ; stdThreadLockDestroy ( gGoodLock ); void stdThreadLockDestroy(stdThreadLock lock)\ free ( lock ); 