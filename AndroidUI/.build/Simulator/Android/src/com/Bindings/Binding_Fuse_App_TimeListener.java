package com.Bindings;
public class Binding_Fuse_App_TimeListener extends java.lang.Object implements com.Bindings.UnoWrapped, android.animation.TimeAnimator.TimeListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_App_TimeListener(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onTimeUpdate(long arg0, android.animation.TimeAnimator arg1, long arg2, long arg3, long arg4, long arg5, long arg6);
    public  void onTimeUpdate(android.animation.TimeAnimator arg0, long arg1, long arg2)  {
    __n_onTimeUpdate(_unoRef,arg0, arg1, arg2, UnoHelper.GetUnoObjectRef(arg0), -1, -1);
    }
    
}
