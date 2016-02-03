package com.Bindings;
public class Binding_Fuse_Video_Graphics_Android_FrameAvailableEvent extends java.lang.Object implements com.Bindings.UnoWrapped, android.graphics.SurfaceTexture.OnFrameAvailableListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Video_Graphics_Android_FrameAvailableEvent(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onFrameAvailable(long arg0, android.graphics.SurfaceTexture arg1, long arg2);
    public  void onFrameAvailable(android.graphics.SurfaceTexture arg0)  {
    __n_onFrameAvailable(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
}
