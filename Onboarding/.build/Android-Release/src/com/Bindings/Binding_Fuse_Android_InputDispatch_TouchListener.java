package com.Bindings;
public class Binding_Fuse_Android_InputDispatch_TouchListener extends java.lang.Object implements com.Bindings.UnoWrapped, android.view.View.OnTouchListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_InputDispatch_TouchListener(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native boolean __n_onTouch(long arg0, android.view.View arg1, android.view.MotionEvent arg2, long arg3, long arg4);
    public  boolean onTouch(android.view.View arg0, android.view.MotionEvent arg1)  {
    return (boolean)__n_onTouch(_unoRef,arg0, arg1, UnoHelper.GetUnoObjectRef(arg0), UnoHelper.GetUnoObjectRef(arg1));
    }
    
}
