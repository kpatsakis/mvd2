XInputLoader() :  mXInputGetState(nullptr) const wchar_t * dlls [ ] = L "xinput1_4.dll" L "xinput9_1_0.dll" L "xinput1_3.dll" const size_t kNumDLLs = ArrayLength ( dlls ) ; for (size_t i = 0; i < kNumDLLs; ++i) module = LoadLibraryW ( dlls [ i ] ); if ( module )  mXInputEnable = reinterpret_cast < XInputEnable_func > ( GetProcAddress ( module , "XInputEnable" ) ); mXInputGetState = reinterpret_cast < decltype ( XInputGetState ) * > GetProcAddress ( module , "XInputGetState" ) if ( mXInputEnable )  