 CData::ValueSetter(JSContext* cx, JS::CallArgs args) RootedObject obj ( cx , & args . thisv ( ) . toObject ( ) ) ; return ImplicitConvert ( cx , args . get ( 0 ) , GetCType ( obj ) , GetData ( obj ) , false , nullptr ) ; static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  if ( val . isNull ( ) )  JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayObject ( cx , valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsTypedArrayObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  uint32_t sourceLength = JS_GetTypedArrayByteLength ( valObj ) ; size_t elementSize = CType :: GetSize ( baseType ) ; size_t arraySize = elementSize * targetLength ; if ( arraySize != size_t ( sourceLength ) )  JS :: AutoCheckCannotGC nogc ; memcpy ( buffer , JS_GetArrayBufferViewData ( valObj , nogc ) , sourceLength ); 