package com.Bindings;
public class Binding_Fuse_Video_Graphics_Android_SeekCompleteEvent extends java.lang.Object implements com.Bindings.UnoWrapped, android.media.MediaPlayer.OnSeekCompleteListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Video_Graphics_Android_SeekCompleteEvent(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onSeekComplete(long arg0, android.media.MediaPlayer arg1, long arg2);
    public  void onSeekComplete(android.media.MediaPlayer arg0)  {
    __n_onSeekComplete(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
}
