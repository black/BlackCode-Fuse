package com.Bindings;
public class Binding_Fuse_Android_NativeViews_HorizontalScrollView extends android.widget.HorizontalScrollView implements com.Bindings.UnoWrapped
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_NativeViews_HorizontalScrollView(long arg0, android.content.Context arg1) throws Exception {
        super(arg1);
        _unoRef = arg0;
    }
    
    public Binding_Fuse_Android_NativeViews_HorizontalScrollView(long arg0, android.content.Context arg1, android.util.AttributeSet arg2) throws Exception {
        super(arg1, arg2);
        _unoRef = arg0;
    }
    
    public Binding_Fuse_Android_NativeViews_HorizontalScrollView(long arg0, android.content.Context arg1, android.util.AttributeSet arg2, int arg3) throws Exception {
        super(arg1, arg2, arg3);
        _unoRef = arg0;
    }
    
    public static native void __n_onScrollChanged(long arg0, int arg1, int arg2, int arg3, int arg4, long arg5, long arg6, long arg7, long arg8);
    public  void onScrollChanged(int arg0, int arg1, int arg2, int arg3)  {
    __n_onScrollChanged(_unoRef,arg0, arg1, arg2, arg3, -1, -1, -1, -1);
    }
    
}
