void CWE78_OS_Command_Injection__char_environment_w32_spawnvp_54_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE78_OS_Command_Injection__char_environment_w32_spawnvp_54b_badSink ( data ); void CWE78_OS_Command_Injection__char_environment_w32_spawnvp_54b_badSink(char * data) CWE78_OS_Command_Injection__char_environment_w32_spawnvp_54c_badSink ( data ); void CWE78_OS_Command_Injection__char_environment_w32_spawnvp_54c_badSink(char * data) CWE78_OS_Command_Injection__char_environment_w32_spawnvp_54d_badSink ( data ); void CWE78_OS_Command_Injection__char_environment_w32_spawnvp_54d_badSink(char * data) CWE78_OS_Command_Injection__char_environment_w32_spawnvp_54e_badSink ( data ); void CWE78_OS_Command_Injection__char_environment_w32_spawnvp_54e_badSink(char * data) 