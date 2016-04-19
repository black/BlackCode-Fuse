package com.Bindings;
public class Binding_Fuse_Android_RootViewContainer extends android.widget.RelativeLayout implements com.Bindings.UnoWrapped
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_RootViewContainer(long arg0, android.content.Context arg1) throws Exception {
        super(arg1);
        _unoRef = arg0;
    }
    
    public Binding_Fuse_Android_RootViewContainer(long arg0, android.content.Context arg1, android.util.AttributeSet arg2) throws Exception {
        super(arg1, arg2);
        _unoRef = arg0;
    }
    
    public Binding_Fuse_Android_RootViewContainer(long arg0, android.content.Context arg1, android.util.AttributeSet arg2, int arg3) throws Exception {
        super(arg1, arg2, arg3);
        _unoRef = arg0;
    }
    
    public static native boolean __n_onInterceptTouchEvent(long arg0, android.view.MotionEvent arg1, long arg2);
    public  boolean onInterceptTouchEvent(android.view.MotionEvent arg0)  {
    return (boolean)__n_onInterceptTouchEvent(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
    public static native boolean __n_onTouchEvent(long arg0, android.view.MotionEvent arg1, long arg2);
    public  boolean onTouchEvent(android.view.MotionEvent arg0)  {
    return (boolean)__n_onTouchEvent(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
}
