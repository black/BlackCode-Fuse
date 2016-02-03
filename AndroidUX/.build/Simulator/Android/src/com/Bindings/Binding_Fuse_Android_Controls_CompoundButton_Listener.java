package com.Bindings;
public class Binding_Fuse_Android_Controls_CompoundButton_Listener extends java.lang.Object implements com.Bindings.UnoWrapped, android.widget.CompoundButton.OnCheckedChangeListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_Controls_CompoundButton_Listener(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onCheckedChanged(long arg0, android.widget.CompoundButton arg1, boolean arg2, long arg3, long arg4);
    public  void onCheckedChanged(android.widget.CompoundButton arg0, boolean arg1)  {
    __n_onCheckedChanged(_unoRef,arg0, arg1, UnoHelper.GetUnoObjectRef(arg0), -1);
    }
    
}
