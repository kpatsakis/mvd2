 FunctionType::Call(JSContext* unsigned jsval* vp) CallArgs args = CallArgsFromVp ( argc , vp ) ; RootedObject obj ( cx , & args . callee ( ) ) ; if ( ! CData :: IsCData ( obj ) )   CData::IsCData(JSObject* obj) return JS_GetClass ( obj ) == & sCDataClass ; RootedObject typeObj ( cx , CData :: GetCType ( obj ) ) ;  CData::GetCType(JSObject* dataObj) jsval slot = JS_GetReservedSlot ( dataObj , SLOT_CTYPE ) ; JSObject * typeObj = slot . toObjectOrNull ( ) ; return typeObj ; if ( CType :: GetTypeCode ( typeObj ) != TYPE_pointer )   CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ; typeObj = PointerType :: GetBaseType ( typeObj );  PointerType::GetBaseType(JSObject* obj) jsval type = JS_GetReservedSlot ( obj , SLOT_TARGET_T ) ; return & type . toObject ( ) ; if ( CType :: GetTypeCode ( typeObj ) != TYPE_function )   CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ; FunctionInfo * fninfo = GetFunctionInfo ( typeObj ) ; uint32_t argcFixed = fninfo -> mArgTypes . length ( ) ; if ( ( ! fninfo -> mIsVariadic && args . length ( ) != argcFixed ) || ( fninfo -> mIsVariadic && args . length ( ) < argcFixed ) )  jsval slot = JS_GetReservedSlot ( obj , SLOT_REFERENT ) ; if ( ! slot . isUndefined ( ) && Library :: IsLibrary ( & slot . toObject ( ) ) )  PRLibrary * library = Library :: GetLibrary ( & slot . toObject ( ) ) ; if ( ! library )  AutoValueAutoArray values ; AutoValueAutoArray strings ; if ( ! values . resize ( args . length ( ) ) )  for (unsigned i = 0; i < argcFixed; ++i) if ( ! ConvertArgument ( cx , args [ i ] , fninfo -> mArgTypes [ i ] , & values [ i ] , & strings ) )  if ( fninfo -> mIsVariadic )  if ( ! fninfo -> mFFITypes . resize ( args . length ( ) ) )  RootedObject obj ( cx ) ; RootedObject type ( cx ) ; for (uint32_t i = argcFixed; i < args.length(); ++i) if ( args [ i ] . isPrimitive ( ) || ! CData :: IsCData ( obj = & args [ i ] . toObject ( ) ) )   CData::IsCData(JSObject* obj) return JS_GetClass ( obj ) == & sCDataClass ; if ( ! ( type = CData :: GetCType ( obj ) ) || ! ( type = PrepareType ( cx , OBJECT_TO_JSVAL ( type ) ) ) || ! ConvertArgument ( cx , args [ i ] , type , & values [ i ] , & strings ) || ! ( fninfo -> mFFITypes [ i ] = CType :: GetFFIType ( cx , type ) ) )  static ConvertArgument(JSContext* HandleValue JSObject* AutoValue* AutoValueAutoArray* strings) if ( ! value -> SizeToType ( cx , type ) )  if ( ! ImplicitConvert ( cx , arg , type , value -> mData , true , & freePointer ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; JSObject * sourceData = nullptr ; JSObject * sourceType = nullptr ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  bool result ; if ( ! jsvalToBool ( cx , val , & result ) )  * static_cast < bool * > ( buffer ) = result type result ; type result ; type result ; if ( ! jsvalToFloat ( cx , val , & result ) )  * static_cast < type * > ( buffer ) = result if ( val . isNull ( ) )  * static_cast < void * * > ( buffer ) = nullptr JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; if ( sourceData )  TypeCode sourceCode = CType :: GetTypeCode ( sourceType ) ; bool voidptrTarget = CType :: GetTypeCode ( baseType ) == TYPE_void_t ; if ( sourceCode == TYPE_pointer && voidptrTarget )  if ( sourceCode == TYPE_array )  JSObject * elementType = ArrayType :: GetBaseType ( sourceType ) ; if ( voidptrTarget || CType :: TypesEqual ( baseType , elementType ) )  * static_cast < void * * > ( buffer ) = sourceBuffer if ( isArgument && val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferViewObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  if ( ! isArgument )  void * ptr ; JS :: AutoCheckCannotGC nogc ; ptr = JS_GetArrayBufferViewData ( valObj , nogc ); if ( ! ptr )  * static_cast < void * * > ( buffer ) = ptr RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  JSString * sourceString = val . toString ( ) ; JSLinearString * sourceLinear = sourceString -> ensureLinear ( cx ) ; if ( ! sourceLinear )  switch ( CType :: GetTypeCode ( baseType ) )  size_t nbytes = GetDeflatedUTF8StringLength ( cx , sourceLinear ) ; if ( nbytes == ( size_t ) - 1 )  if ( targetLength < nbytes )  char * charBuffer = static_cast < char * > buffer if ( val . isObject ( ) && ! sourceData )  AutoIdArray props ( cx , JS_Enumerate ( cx , valObj ) ) ; if ( ! props )  size_t structSize = CType :: GetSize ( targetType ) ; auto intermediate = cx -> make_pod_array < char > ( structSize ) if ( ! intermediate )  const FieldInfoHash * fields = StructType :: GetFieldInfo ( targetType ) ; if ( props . length ( ) != fields -> count ( ) )  RootedId id ( cx ) ; for (size_t i = 0; i < props.length(); ++i) id = props [ i ]; if ( ! JSID_IS_STRING ( id ) )  JSFlatString * name = JSID_TO_FLAT_STRING ( id ) ; const FieldInfo * field = StructType :: LookupField ( cx , targetType , name ) ; if ( ! field )  RootedValue prop ( cx ) ; if ( ! JS_GetPropertyById ( cx , valObj , id , & prop ) )  char * fieldData = intermediate . get ( ) + field -> mOffset ; if ( ! ImplicitConvert ( cx , prop , field -> mType , fieldData , false , nullptr ) )  memcpy ( buffer , intermediate . get ( ) , structSize ); 