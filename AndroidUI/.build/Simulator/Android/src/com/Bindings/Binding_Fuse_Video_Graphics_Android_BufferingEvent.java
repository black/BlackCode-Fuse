package com.Bindings;
public class Binding_Fuse_Video_Graphics_Android_BufferingEvent extends java.lang.Object implements com.Bindings.UnoWrapped, android.media.MediaPlayer.OnBufferingUpdateListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Video_Graphics_Android_BufferingEvent(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onBufferingUpdate(long arg0, android.media.MediaPlayer arg1, int arg2, long arg3, long arg4);
    public  void onBufferingUpdate(android.media.MediaPlayer arg0, int arg1)  {
    __n_onBufferingUpdate(_unoRef,arg0, arg1, UnoHelper.GetUnoObjectRef(arg0), -1);
    }
    
}
