package com.Bindings;
public class Binding_Fuse_Android_NativeViews_SurfaceCallback extends java.lang.Object implements com.Bindings.UnoWrapped, android.view.SurfaceHolder.Callback2, android.view.SurfaceHolder.Callback
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_NativeViews_SurfaceCallback(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_surfaceChanged(long arg0, android.view.SurfaceHolder arg1, int arg2, int arg3, int arg4, long arg5, long arg6, long arg7, long arg8);
    public  void surfaceChanged(android.view.SurfaceHolder arg0, int arg1, int arg2, int arg3)  {
    __n_surfaceChanged(_unoRef,arg0, arg1, arg2, arg3, UnoHelper.GetUnoObjectRef(arg0), -1, -1, -1);
    }
    
    public static native void __n_surfaceCreated(long arg0, android.view.SurfaceHolder arg1, long arg2);
    public  void surfaceCreated(android.view.SurfaceHolder arg0)  {
    __n_surfaceCreated(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
    public static native void __n_surfaceDestroyed(long arg0, android.view.SurfaceHolder arg1, long arg2);
    public  void surfaceDestroyed(android.view.SurfaceHolder arg0)  {
    __n_surfaceDestroyed(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
    public static native void __n_surfaceRedrawNeeded(long arg0, android.view.SurfaceHolder arg1, long arg2);
    public  void surfaceRedrawNeeded(android.view.SurfaceHolder arg0)  {
    __n_surfaceRedrawNeeded(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
}
