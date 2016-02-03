package com.Bindings;
public class Binding_Fuse_Android_Controls_TextChangedListener extends java.lang.Object implements com.Bindings.UnoWrapped, android.text.TextWatcher
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_Controls_TextChangedListener(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_afterTextChanged(long arg0, android.text.Editable arg1, long arg2);
    public  void afterTextChanged(android.text.Editable arg0)  {
    __n_afterTextChanged(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
    public static native void __n_beforeTextChanged(long arg0, java.lang.CharSequence arg1, int arg2, int arg3, int arg4, long arg5, long arg6, long arg7, long arg8);
    public  void beforeTextChanged(java.lang.CharSequence arg0, int arg1, int arg2, int arg3)  {
    __n_beforeTextChanged(_unoRef,arg0, arg1, arg2, arg3, UnoHelper.GetUnoObjectRef(arg0), -1, -1, -1);
    }
    
    public static native void __n_onTextChanged(long arg0, java.lang.CharSequence arg1, int arg2, int arg3, int arg4, long arg5, long arg6, long arg7, long arg8);
    public  void onTextChanged(java.lang.CharSequence arg0, int arg1, int arg2, int arg3)  {
    __n_onTextChanged(_unoRef,arg0, arg1, arg2, arg3, UnoHelper.GetUnoObjectRef(arg0), -1, -1, -1);
    }
    
}
