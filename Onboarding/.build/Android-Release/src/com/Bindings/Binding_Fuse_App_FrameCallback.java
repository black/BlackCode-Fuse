package com.Bindings;
public class Binding_Fuse_App_FrameCallback extends java.lang.Object implements com.Bindings.UnoWrapped, android.view.Choreographer.FrameCallback
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_App_FrameCallback(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_doFrame(long arg0, long arg1, long arg2);
    public  void doFrame(long arg0)  {
    __n_doFrame(_unoRef,arg0, -1);
    }
    
}
