static void good1() if ( 0 )  stdThread threadA = NULL ; if ( ! stdThreadLockCreate ( & gGoodLock ) )  int stdThreadLockCreate(stdThreadLock *lock) stdThreadLock my_lock = NULL ; my_lock = ( stdThreadLock ) malloc ( sizeof ( * my_lock ) ); if ( my_lock == NULL )  return 0 ; return 1 ; if ( ! stdThreadCreate ( helperGood , NULL , & threadA ) )  int stdThreadCreate(stdThreadRoutine start, void *args, stdThread *thread) uintptr_t handle ; stdThread my_thread ; my_thread = ( stdThread ) malloc ( sizeof ( * my_thread ) ); if ( my_thread == NULL )  return 0 ; my_thread -> start = start; my_thread -> args = args; handle = _beginthreadex ( NULL , 0 , internal_start , my_thread , 0 , NULL ); if ( handle == 0 )  return 0 ; return 1 ; threadA = NULL; if ( threadA && stdThreadJoin ( threadA ) )  int stdThreadJoin(stdThread thread) DWORD value ; value = WaitForSingleObject ( ( HANDLE ) thread -> handle , INFINITE ); if ( value != WAIT_OBJECT_0 )  return 0 ; return 1 ; stdThreadDestroy ( threadA ); int stdThreadDestroy(stdThread thread) free ( thread ); 