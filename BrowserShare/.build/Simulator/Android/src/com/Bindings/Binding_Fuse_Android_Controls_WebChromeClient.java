package com.Bindings;
public class Binding_Fuse_Android_Controls_WebChromeClient extends android.webkit.WebChromeClient implements com.Bindings.UnoWrapped
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_Controls_WebChromeClient(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onProgressChanged(long arg0, android.webkit.WebView arg1, int arg2, long arg3, long arg4);
    public  void onProgressChanged(android.webkit.WebView arg0, int arg1)  {
    __n_onProgressChanged(_unoRef,arg0, arg1, UnoHelper.GetUnoObjectRef(arg0), -1);
    }
    
}
