bool init() if ( ! globals_ . init ( ) || ! exits_ . init ( ) )  if ( ! standardLibraryMathNames_ . init ( ) || ! addStandardLibraryMathName ( "sin" , AsmJSMathBuiltin_sin ) || ! addStandardLibraryMathName ( "cos" , AsmJSMathBuiltin_cos ) || ! addStandardLibraryMathName ( "tan" , AsmJSMathBuiltin_tan ) || ! addStandardLibraryMathName ( "asin" , AsmJSMathBuiltin_asin ) || ! addStandardLibraryMathName ( "acos" , AsmJSMathBuiltin_acos ) || ! addStandardLibraryMathName ( "atan" , AsmJSMathBuiltin_atan ) || ! addStandardLibraryMathName ( "ceil" , AsmJSMathBuiltin_ceil ) || ! addStandardLibraryMathName ( "floor" , AsmJSMathBuiltin_floor ) || ! addStandardLibraryMathName ( "exp" , AsmJSMathBuiltin_exp ) || ! addStandardLibraryMathName ( "log" , AsmJSMathBuiltin_log ) || ! addStandardLibraryMathName ( "pow" , AsmJSMathBuiltin_pow ) || ! addStandardLibraryMathName ( "sqrt" , AsmJSMathBuiltin_sqrt ) || ! addStandardLibraryMathName ( "abs" , AsmJSMathBuiltin_abs ) || ! addStandardLibraryMathName ( "atan2" , AsmJSMathBuiltin_atan2 ) || ! addStandardLibraryMathName ( "imul" , AsmJSMathBuiltin_imul ) || ! addStandardLibraryMathName ( "clz32" , AsmJSMathBuiltin_clz32 ) || ! addStandardLibraryMathName ( "fround" , AsmJSMathBuiltin_fround ) || ! addStandardLibraryMathName ( "min" , AsmJSMathBuiltin_min ) || ! addStandardLibraryMathName ( "max" , AsmJSMathBuiltin_max ) || ! addStandardLibraryMathName ( "E" , M_E ) || ! addStandardLibraryMathName ( "LN10" , M_LN10 ) || ! addStandardLibraryMathName ( "LN2" , M_LN2 ) || ! addStandardLibraryMathName ( "LOG2E" , M_LOG2E ) || ! addStandardLibraryMathName ( "LOG10E" , M_LOG10E ) || ! addStandardLibraryMathName ( "PI" , M_PI ) || ! addStandardLibraryMathName ( "SQRT1_2" , M_SQRT1_2 ) || ! addStandardLibraryMathName ( "SQRT2" , M_SQRT2 ) )  bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; bool addStandardLibraryMathName(const char* name, AsmJSMathBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return false ; MathBuiltin builtin ( func ) ; return standardLibraryMathNames_ . putNew ( atom -> asPropertyName ( ) , builtin ) ; if ( ! standardLibraryAtomicsNames_ . init ( ) || ! addStandardLibraryAtomicsName ( "compareExchange" , AsmJSAtomicsBuiltin_compareExchange ) || ! addStandardLibraryAtomicsName ( "load" , AsmJSAtomicsBuiltin_load ) || ! addStandardLibraryAtomicsName ( "store" , AsmJSAtomicsBuiltin_store ) || ! addStandardLibraryAtomicsName ( "fence" , AsmJSAtomicsBuiltin_fence ) || ! addStandardLibraryAtomicsName ( "add" , AsmJSAtomicsBuiltin_add ) || ! addStandardLibraryAtomicsName ( "sub" , AsmJSAtomicsBuiltin_sub ) || ! addStandardLibraryAtomicsName ( "and" , AsmJSAtomicsBuiltin_and ) || ! addStandardLibraryAtomicsName ( "or" , AsmJSAtomicsBuiltin_or ) || ! addStandardLibraryAtomicsName ( "xor" , AsmJSAtomicsBuiltin_xor ) )  bool addStandardLibraryAtomicsName(const char* name, AsmJSAtomicsBuiltinFunction func) JSAtom * atom = Atomize ( cx_ , name , strlen ( name ) ) ; if ( ! atom )  return standardLibraryAtomicsNames_ . putNew ( atom -> asPropertyName ( ) , func ) ; 