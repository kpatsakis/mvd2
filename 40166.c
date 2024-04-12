 WebGLContext::CompileShader(WebGLShader *shader) if ( IsContextLost ( ) )  if ( ! ValidateObject ( "compileShader" , shader ) )  if ( ! mShaderValidation )  if ( ! shader -> NeedsTranslation ( ) )  StripComments stripComments ( shader -> Source ( ) ) ; const nsAString & cleanSource = Substring ( stripComments . result ( ) . Elements ( ) , stripComments . length ( ) ) ; if ( ! ValidateGLSLString ( cleanSource , "compileShader" ) )  NS_LossyConvertUTF16toASCII sourceCString ( cleanSource ) ; if ( gl -> WorkAroundDriverBugs ( ) )  const uint32_t maxSourceLength = 0x3ffff ; if ( sourceCString . Length ( ) > maxSourceLength )  const char * s = sourceCString . get ( ) ; static const char * bypassPrefixSearch = "#version proto-200" ; static const char * bypassANGLEPrefix [ 2 ] = "precision mediump "#define gl_VertexID "#define gl_InstanceID 0\n" , const bool bypassANGLE = IsWebGL2 ( ) && ( strstr ( s , bypassPrefixSearch ) != 0 ) ; nsTArray < char > bypassANGLEShaderCode ; if ( bypassANGLE )  const int bypassStage = ( shader -> ShaderType ( ) == LOCAL_GL_FRAGMENT_SHADER ) ? 1 : 0 ; strcpy ( bypassANGLEShaderCode . Elements ( ) , bypassANGLEPrefix [ bypassStage ] ); strcat ( bypassANGLEShaderCode . Elements ( ) , originalShader ); angleShaderCode = bypassANGLEShaderCode . Elements ( ); if ( ! ShCompile ( compiler , & angleShaderCode , 1 , compileOptions ) )  