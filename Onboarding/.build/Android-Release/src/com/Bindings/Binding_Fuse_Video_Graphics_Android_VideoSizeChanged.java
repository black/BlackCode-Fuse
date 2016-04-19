package com.Bindings;
public class Binding_Fuse_Video_Graphics_Android_VideoSizeChanged extends java.lang.Object implements com.Bindings.UnoWrapped, android.media.MediaPlayer.OnVideoSizeChangedListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Video_Graphics_Android_VideoSizeChanged(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onVideoSizeChanged(long arg0, android.media.MediaPlayer arg1, int arg2, int arg3, long arg4, long arg5, long arg6);
    public  void onVideoSizeChanged(android.media.MediaPlayer arg0, int arg1, int arg2)  {
    __n_onVideoSizeChanged(_unoRef,arg0, arg1, arg2, UnoHelper.GetUnoObjectRef(arg0), -1, -1);
    }
    
}
