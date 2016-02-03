package com.Bindings;
public class Binding_Fuse_Android_Controls_JsResultHandler extends java.lang.Object implements com.Bindings.UnoWrapped, java.util.Observer
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_Controls_JsResultHandler(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_update(long arg0, java.util.Observable arg1, java.lang.Object arg2, long arg3, long arg4);
    public  void update(java.util.Observable arg0, java.lang.Object arg1)  {
    __n_update(_unoRef,arg0, arg1, UnoHelper.GetUnoObjectRef(arg0), UnoHelper.GetUnoObjectRef(arg1));
    }
    
}
