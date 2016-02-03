package com.Bindings;
public class Binding_Fuse_Android_Controls_EditorActionListener extends java.lang.Object implements com.Bindings.UnoWrapped, android.widget.TextView.OnEditorActionListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_Controls_EditorActionListener(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native boolean __n_onEditorAction(long arg0, android.widget.TextView arg1, int arg2, android.view.KeyEvent arg3, long arg4, long arg5, long arg6);
    public  boolean onEditorAction(android.widget.TextView arg0, int arg1, android.view.KeyEvent arg2)  {
    return (boolean)__n_onEditorAction(_unoRef,arg0, arg1, arg2, UnoHelper.GetUnoObjectRef(arg0), -1, UnoHelper.GetUnoObjectRef(arg2));
    }
    
}
