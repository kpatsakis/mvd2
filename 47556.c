 GLContext::InitWithPrefix(const char *prefix, bool trygl) if ( mInitialized )  GLContextCrashGuard crashGuard ; if ( crashGuard . Crashed ( ) )  SymLoadStruct symbols [ ] = { { ( PRFuncPtr * ) & mSymbols . fActiveTexture , { "ActiveTexture" , "ActiveTextureARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fAttachShader , { "AttachShader" , "AttachShaderARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBindAttribLocation , { "BindAttribLocation" , "BindAttribLocationARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBindBuffer , { "BindBuffer" , "BindBufferARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBindTexture , { "BindTexture" , "BindTextureARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBlendColor , { "BlendColor" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBlendEquation , { "BlendEquation" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBlendEquationSeparate , { "BlendEquationSeparate" , "BlendEquationSeparateEXT" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBlendFunc , { "BlendFunc" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBlendFuncSeparate , { "BlendFuncSeparate" , "BlendFuncSeparateEXT" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBufferData , { "BufferData" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fBufferSubData , { "BufferSubData" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fClear , { "Clear" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fClearColor , { "ClearColor" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fClearStencil , { "ClearStencil" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fColorMask , { "ColorMask" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fCompressedTexImage2D , { "CompressedTexImage2D" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fCompressedTexSubImage2D , { "CompressedTexSubImage2D" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fCullFace , { "CullFace" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDetachShader , { "DetachShader" , "DetachShaderARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDepthFunc , { "DepthFunc" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDepthMask , { "DepthMask" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDisable , { "Disable" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDisableVertexAttribArray , { "DisableVertexAttribArray" , "DisableVertexAttribArrayARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDrawArrays , { "DrawArrays" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDrawElements , { "DrawElements" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fEnable , { "Enable" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fEnableVertexAttribArray , { "EnableVertexAttribArray" , "EnableVertexAttribArrayARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fFinish , { "Finish" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fFlush , { "Flush" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fFrontFace , { "FrontFace" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetActiveAttrib , { "GetActiveAttrib" , "GetActiveAttribARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetActiveUniform , { "GetActiveUniform" , "GetActiveUniformARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetAttachedShaders , { "GetAttachedShaders" , "GetAttachedShadersARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetAttribLocation , { "GetAttribLocation" , "GetAttribLocationARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetIntegerv , { "GetIntegerv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetFloatv , { "GetFloatv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetBooleanv , { "GetBooleanv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetBufferParameteriv , { "GetBufferParameteriv" , "GetBufferParameterivARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetError , { "GetError" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetProgramiv , { "GetProgramiv" , "GetProgramivARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetProgramInfoLog , { "GetProgramInfoLog" , "GetProgramInfoLogARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fTexParameteri , { "TexParameteri" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fTexParameteriv , { "TexParameteriv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fTexParameterf , { "TexParameterf" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetString , { "GetString" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetTexParameterfv , { "GetTexParameterfv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetTexParameteriv , { "GetTexParameteriv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetUniformfv , { "GetUniformfv" , "GetUniformfvARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetUniformiv , { "GetUniformiv" , "GetUniformivARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetUniformLocation , { "GetUniformLocation" , "GetUniformLocationARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetVertexAttribfv , { "GetVertexAttribfv" , "GetVertexAttribfvARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetVertexAttribiv , { "GetVertexAttribiv" , "GetVertexAttribivARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetVertexAttribPointerv , { "GetVertexAttribPointerv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fHint , { "Hint" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fIsBuffer , { "IsBuffer" , "IsBufferARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fIsEnabled , { "IsEnabled" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fIsProgram , { "IsProgram" , "IsProgramARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fIsShader , { "IsShader" , "IsShaderARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fIsTexture , { "IsTexture" , "IsTextureARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fLineWidth , { "LineWidth" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fLinkProgram , { "LinkProgram" , "LinkProgramARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fPixelStorei , { "PixelStorei" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fPolygonOffset , { "PolygonOffset" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fReadPixels , { "ReadPixels" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fSampleCoverage , { "SampleCoverage" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fScissor , { "Scissor" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fStencilFunc , { "StencilFunc" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fStencilFuncSeparate , { "StencilFuncSeparate" , "StencilFuncSeparateEXT" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fStencilMask , { "StencilMask" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fStencilMaskSeparate , { "StencilMaskSeparate" , "StencilMaskSeparateEXT" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fStencilOp , { "StencilOp" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fStencilOpSeparate , { "StencilOpSeparate" , "StencilOpSeparateEXT" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fTexImage2D , { "TexImage2D" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fTexSubImage2D , { "TexSubImage2D" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform1f , { "Uniform1f" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform1fv , { "Uniform1fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform1i , { "Uniform1i" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform1iv , { "Uniform1iv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform2f , { "Uniform2f" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform2fv , { "Uniform2fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform2i , { "Uniform2i" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform2iv , { "Uniform2iv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform3f , { "Uniform3f" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform3fv , { "Uniform3fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform3i , { "Uniform3i" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform3iv , { "Uniform3iv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform4f , { "Uniform4f" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform4fv , { "Uniform4fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform4i , { "Uniform4i" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniform4iv , { "Uniform4iv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniformMatrix2fv , { "UniformMatrix2fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniformMatrix3fv , { "UniformMatrix3fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUniformMatrix4fv , { "UniformMatrix4fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUseProgram , { "UseProgram" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fValidateProgram , { "ValidateProgram" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttribPointer , { "VertexAttribPointer" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttrib1f , { "VertexAttrib1f" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttrib2f , { "VertexAttrib2f" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttrib3f , { "VertexAttrib3f" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttrib4f , { "VertexAttrib4f" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttrib1fv , { "VertexAttrib1fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttrib2fv , { "VertexAttrib2fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttrib3fv , { "VertexAttrib3fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttrib4fv , { "VertexAttrib4fv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fViewport , { "Viewport" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fCompileShader , { "CompileShader" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fCopyTexImage2D , { "CopyTexImage2D" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fCopyTexSubImage2D , { "CopyTexSubImage2D" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetShaderiv , { "GetShaderiv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetShaderInfoLog , { "GetShaderInfoLog" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGetShaderSource , { "GetShaderSource" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fShaderSource , { "ShaderSource" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexAttribPointer , { "VertexAttribPointer" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGenBuffers , { "GenBuffers" , "GenBuffersARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fGenTextures , { "GenTextures" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fCreateProgram , { "CreateProgram" , "CreateProgramARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fCreateShader , { "CreateShader" , "CreateShaderARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDeleteBuffers , { "DeleteBuffers" , "DeleteBuffersARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDeleteTextures , { "DeleteTextures" , "DeleteTexturesARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDeleteProgram , { "DeleteProgram" , "DeleteProgramARB" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDeleteShader , { "DeleteShader" , "DeleteShaderARB" , nullptr } } , END_SYMBOLS } ; mInitialized = LoadSymbols ( & symbols [ 0 ] , trygl , prefix ); if ( mInitialized )  if ( IsGLES ( ) )  SymLoadStruct symbols_ES2 [ ] = { { ( PRFuncPtr * ) & mSymbols . fGetShaderPrecisionFormat , { "GetShaderPrecisionFormat" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fClearDepthf , { "ClearDepthf" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDepthRangef , { "DepthRangef" , nullptr } } , END_SYMBOLS } ; if ( ! LoadSymbols ( & symbols_ES2 [ 0 ] , trygl , prefix ) )  mInitialized = false; SymLoadStruct symbols_desktop [ ] = { { ( PRFuncPtr * ) & mSymbols . fClearDepth , { "ClearDepth" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDepthRange , { "DepthRange" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fReadBuffer , { "ReadBuffer" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fMapBuffer , { "MapBuffer" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fUnmapBuffer , { "UnmapBuffer" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fPointParameterf , { "PointParameterf" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDrawBuffer , { "DrawBuffer" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDrawBuffers , { "DrawBuffers" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fClientActiveTexture , { "ClientActiveTexture" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fDisableClientState , { "DisableClientState" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fEnableClientState , { "EnableClientState" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fLoadIdentity , { "LoadIdentity" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fLoadMatrixf , { "LoadMatrixf" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fMatrixMode , { "MatrixMode" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fTexGeni , { "TexGeni" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fTexGenf , { "TexGenf" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fTexGenfv , { "TexGenfv" , nullptr } } , { ( PRFuncPtr * ) & mSymbols . fVertexPointer , { "VertexPointer" , nullptr } } , END_SYMBOLS } ; if ( ! LoadSymbols ( & symbols_desktop [ 0 ] , trygl , prefix ) )  mInitialized = false; if ( mInitialized )  glVendorString = ( const char * ) fGetString ( LOCAL_GL_VENDOR ); const char * vendorMatchStrings [ size_t ( GLVendor :: Other ) ] = { "Intel" , "NVIDIA" , "ATI" , "Qualcomm" , "Imagination" , "nouveau" , "Vivante" , "VMware, Inc." , "ARM" } ; for (size_t i = 0; i < size_t(GLVendor::Other); ++i) if ( DoesStringMatch ( glVendorString , vendorMatchStrings [ i ] ) )   DoesStringMatch(const char* aString, const char *aWantedString) if ( ! aString || ! aWantedString )  const char * occurrence = strstr ( aString , aWantedString ) ; if ( ! occurrence )  if ( occurrence != aString && isalpha ( * ( occurrence - 1 ) ) )  const char * afterOccurrence = occurrence + strlen ( aWantedString ) ; if ( isalpha ( * afterOccurrence ) )  