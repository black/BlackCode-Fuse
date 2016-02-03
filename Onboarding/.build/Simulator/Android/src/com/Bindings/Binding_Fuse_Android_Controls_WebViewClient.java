package com.Bindings;
public class Binding_Fuse_Android_Controls_WebViewClient extends android.webkit.WebViewClient implements com.Bindings.UnoWrapped
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_Controls_WebViewClient(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onPageFinished(long arg0, android.webkit.WebView arg1, java.lang.String arg2, long arg3, long arg4);
    public  void onPageFinished(android.webkit.WebView arg0, java.lang.String arg1)  {
    __n_onPageFinished(_unoRef,arg0, arg1, UnoHelper.GetUnoObjectRef(arg0), UnoHelper.GetUnoObjectRef(arg1));
    }
    
    public static native void __n_onPageStarted(long arg0, android.webkit.WebView arg1, java.lang.String arg2, android.graphics.Bitmap arg3, long arg4, long arg5, long arg6);
    public  void onPageStarted(android.webkit.WebView arg0, java.lang.String arg1, android.graphics.Bitmap arg2)  {
    __n_onPageStarted(_unoRef,arg0, arg1, arg2, UnoHelper.GetUnoObjectRef(arg0), UnoHelper.GetUnoObjectRef(arg1), UnoHelper.GetUnoObjectRef(arg2));
    }
    
    public static native boolean __n_shouldOverrideUrlLoading(long arg0, android.webkit.WebView arg1, java.lang.String arg2, long arg3, long arg4);
    public  boolean shouldOverrideUrlLoading(android.webkit.WebView arg0, java.lang.String arg1)  {
    return (boolean)__n_shouldOverrideUrlLoading(_unoRef,arg0, arg1, UnoHelper.GetUnoObjectRef(arg0), UnoHelper.GetUnoObjectRef(arg1));
    }
    
}
