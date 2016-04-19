package com.Bindings;
public class Binding_Fuse_Video_Graphics_Android_CompletionEvent extends java.lang.Object implements com.Bindings.UnoWrapped, android.media.MediaPlayer.OnCompletionListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Video_Graphics_Android_CompletionEvent(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onCompletion(long arg0, android.media.MediaPlayer arg1, long arg2);
    public  void onCompletion(android.media.MediaPlayer arg0)  {
    __n_onCompletion(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
}
