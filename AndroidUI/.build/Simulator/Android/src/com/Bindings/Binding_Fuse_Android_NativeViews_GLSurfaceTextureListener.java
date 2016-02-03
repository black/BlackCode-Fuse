package com.Bindings;
public class Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener extends java.lang.Object implements com.Bindings.UnoWrapped, android.view.TextureView.SurfaceTextureListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onSurfaceTextureAvailable(long arg0, android.graphics.SurfaceTexture arg1, int arg2, int arg3, long arg4, long arg5, long arg6);
    public  void onSurfaceTextureAvailable(android.graphics.SurfaceTexture arg0, int arg1, int arg2)  {
    __n_onSurfaceTextureAvailable(_unoRef,arg0, arg1, arg2, UnoHelper.GetUnoObjectRef(arg0), -1, -1);
    }
    
    public static native boolean __n_onSurfaceTextureDestroyed(long arg0, android.graphics.SurfaceTexture arg1, long arg2);
    public  boolean onSurfaceTextureDestroyed(android.graphics.SurfaceTexture arg0)  {
    return (boolean)__n_onSurfaceTextureDestroyed(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
    public static native void __n_onSurfaceTextureSizeChanged(long arg0, android.graphics.SurfaceTexture arg1, int arg2, int arg3, long arg4, long arg5, long arg6);
    public  void onSurfaceTextureSizeChanged(android.graphics.SurfaceTexture arg0, int arg1, int arg2)  {
    __n_onSurfaceTextureSizeChanged(_unoRef,arg0, arg1, arg2, UnoHelper.GetUnoObjectRef(arg0), -1, -1);
    }
    
    public static native void __n_onSurfaceTextureUpdated(long arg0, android.graphics.SurfaceTexture arg1, long arg2);
    public  void onSurfaceTextureUpdated(android.graphics.SurfaceTexture arg0)  {
    __n_onSurfaceTextureUpdated(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
}
