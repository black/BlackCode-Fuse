package com.Bindings;
public class Binding_Android_Runtime_RunnableAction extends java.lang.Object implements com.Bindings.UnoWrapped, java.lang.Runnable
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Android_Runtime_RunnableAction(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_run(long arg0);
    public  void run()  {
    __n_run(_unoRef);
    }
    
}
