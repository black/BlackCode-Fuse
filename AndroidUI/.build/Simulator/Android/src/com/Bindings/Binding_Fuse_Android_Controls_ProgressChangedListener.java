package com.Bindings;
public class Binding_Fuse_Android_Controls_ProgressChangedListener extends java.lang.Object implements com.Bindings.UnoWrapped, android.widget.SeekBar.OnSeekBarChangeListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_Controls_ProgressChangedListener(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onProgressChanged(long arg0, android.widget.SeekBar arg1, int arg2, boolean arg3, long arg4, long arg5, long arg6);
    public  void onProgressChanged(android.widget.SeekBar arg0, int arg1, boolean arg2)  {
    __n_onProgressChanged(_unoRef,arg0, arg1, arg2, UnoHelper.GetUnoObjectRef(arg0), -1, -1);
    }
    
    public static native void __n_onStartTrackingTouch(long arg0, android.widget.SeekBar arg1, long arg2);
    public  void onStartTrackingTouch(android.widget.SeekBar arg0)  {
    __n_onStartTrackingTouch(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
    public static native void __n_onStopTrackingTouch(long arg0, android.widget.SeekBar arg1, long arg2);
    public  void onStopTrackingTouch(android.widget.SeekBar arg0)  {
    __n_onStopTrackingTouch(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
}
