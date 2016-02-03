package com.Bindings;
public class Binding_Fuse_Video_Graphics_Android_ErrorEvent extends java.lang.Object implements com.Bindings.UnoWrapped, android.media.MediaPlayer.OnErrorListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Video_Graphics_Android_ErrorEvent(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native boolean __n_onError(long arg0, android.media.MediaPlayer arg1, int arg2, int arg3, long arg4, long arg5, long arg6);
    public  boolean onError(android.media.MediaPlayer arg0, int arg1, int arg2)  {
    return (boolean)__n_onError(_unoRef,arg0, arg1, arg2, UnoHelper.GetUnoObjectRef(arg0), -1, -1);
    }
    
}
