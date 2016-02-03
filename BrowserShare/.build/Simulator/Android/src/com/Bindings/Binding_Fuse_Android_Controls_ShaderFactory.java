package com.Bindings;
public class Binding_Fuse_Android_Controls_ShaderFactory extends android.graphics.drawable.ShapeDrawable.ShaderFactory implements com.Bindings.UnoWrapped
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_Android_Controls_ShaderFactory(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native android.graphics.Shader __n_resize(long arg0, int arg1, int arg2, long arg3, long arg4);
    public  android.graphics.Shader resize(int arg0, int arg1)  {
    return (android.graphics.Shader)__n_resize(_unoRef,arg0, arg1, -1, -1);
    }
    
}
