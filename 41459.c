 IMFYCbCrImage::GetD3D9TextureClient(CompositableClient* aClient) IDirect3DDevice9 * device = gfxWindowsPlatform :: GetPlatform ( ) -> GetD3D9Device ( ) ; RefPtr < IDirect3DTexture9 > textureY ; HANDLE shareHandleY = 0 ; if ( ! UploadData ( device , textureY , shareHandleY , mData . mYChannel , mData . mYSize , mData . mYStride ) )  RefPtr < IDirect3DTexture9 > textureCb ; HANDLE shareHandleCb = 0 ; if ( ! UploadData ( device , textureCb , shareHandleCb , mData . mCbChannel , mData . mCbCrSize , mData . mCbCrStride ) )  RefPtr < IDirect3DTexture9 > textureCr ; HANDLE shareHandleCr = 0 ; if ( ! UploadData ( device , textureCr , shareHandleCr , mData . mCrChannel , mData . mCbCrSize , mData . mCbCrStride ) )  static bool UploadData(IDirect3DDevice9* RefPtr<IDirect3DTexture9>& HANDLE& uint8_t* const gfx::IntSize& int32_t aSrcStride) RefPtr < IDirect3DSurface9 > surf ; D3DLOCKED_RECT rect ; aTexture = InitTextures ( aDevice , aSrcSize , D3DFMT_A8 , surf , aHandle , rect ); if ( ! aTexture )  if ( aSrcStride == rect . Pitch )  for (int i = 0; i < aSrcSize.height; i++) memcpy ( ( uint8_t * ) rect . pBits + i * rect . Pitch , aSrc + i * aSrcStride , aSrcSize . width ); 