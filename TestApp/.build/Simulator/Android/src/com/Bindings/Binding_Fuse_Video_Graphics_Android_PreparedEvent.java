package com.Bindings;
public class Binding_Fuse_Video_Graphics_Android_PreparedEvent extends java.lang.Object implements com.Bindings.UnoWrapped, android.media.MediaPlayer.OnPreparedListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Video_Graphics_Android_PreparedEvent(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onPrepared(long arg0, android.media.MediaPlayer arg1, long arg2);
    public  void onPrepared(android.media.MediaPlayer arg0)  {
    __n_onPrepared(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
}
