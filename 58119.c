void CWE366_Race_Condition_Within_Thread__int_byref_03_bad() if ( 5 == 5 )  stdThread threadA = NULL ; int valBadSink ; valBadSink = 0; if ( ! stdThreadCreate ( helperBad , ( void * ) & valBadSink , & threadA ) )  int stdThreadCreate(stdThreadRoutine start, void *args, stdThread *thread) uintptr_t handle ; stdThread my_thread ; my_thread = ( stdThread ) malloc ( sizeof ( * my_thread ) ); if ( my_thread == NULL )  return 0 ; my_thread -> start = start; my_thread -> args = args; handle = _beginthreadex ( NULL , 0 , internal_start , my_thread , 0 , NULL ); if ( handle == 0 )  return 0 ; return 1 ; threadA = NULL; if ( threadA && stdThreadJoin ( threadA ) )  int stdThreadJoin(stdThread thread) DWORD value ; value = WaitForSingleObject ( ( HANDLE ) thread -> handle , INFINITE ); if ( value != WAIT_OBJECT_0 )  return 0 ; return 1 ; stdThreadDestroy ( threadA ); int stdThreadDestroy(stdThread thread) free ( thread ); 