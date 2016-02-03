package com.Bindings;

public class Android_com_fuse_Native_CameraTask extends com.fuse.Native.CameraTask implements com.Bindings.UnoWrapped {

    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public Object _implementor;

    public static native void __n_OnSuccess(long arg0, java.lang.String arg1, long arg2);
    public  void OnSuccess(java.lang.String arg0)  {

        try {
            __n_OnSuccess(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
        } catch (UnsatisfiedLinkError e) {
            return;
        }



    }

    public static native void __n_OnFailed(long arg0, java.lang.String arg1, long arg2);
    public  void OnFailed(java.lang.String arg0)  {

        try {
            __n_OnFailed(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
        } catch (UnsatisfiedLinkError e) {
            return;
        }



    }

    public Android_com_fuse_Native_CameraTask(long arg0, int arg1, int arg2, boolean arg3) throws Exception {
        super(arg1, arg2, arg3);
        _unoRef = arg0;
    }



    public void finalize() {
        UnoHelper.Finalize(_unoRef);
    }



}
