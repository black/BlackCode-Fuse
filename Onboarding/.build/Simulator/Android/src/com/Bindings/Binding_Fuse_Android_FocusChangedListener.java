package com.Bindings;
public class Binding_Fuse_Android_FocusChangedListener extends java.lang.Object implements com.Bindings.UnoWrapped, android.view.View.OnFocusChangeListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_FocusChangedListener(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onFocusChange(long arg0, android.view.View arg1, boolean arg2, long arg3, long arg4);
    public  void onFocusChange(android.view.View arg0, boolean arg1)  {
    __n_onFocusChange(_unoRef,arg0, arg1, UnoHelper.GetUnoObjectRef(arg0), -1);
    }
    
}
