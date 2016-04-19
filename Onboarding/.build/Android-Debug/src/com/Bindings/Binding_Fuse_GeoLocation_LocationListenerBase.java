package com.Bindings;
public class Binding_Fuse_GeoLocation_LocationListenerBase extends java.lang.Object implements com.Bindings.UnoWrapped, android.location.LocationListener
{
    public long _unoRef;
    @Override public long _GetUnoPtr() { return _unoRef; }
    public void finalize() { try { UnoHelper.Finalize(_unoRef); } finally { try { super.finalize(); } catch (Throwable e) {} } }
    public Binding_Fuse_GeoLocation_LocationListenerBase(long arg0) throws Exception {
        super();
        _unoRef = arg0;
    }
    
    public static native void __n_onLocationChanged(long arg0, android.location.Location arg1, long arg2);
    public  void onLocationChanged(android.location.Location arg0)  {
    __n_onLocationChanged(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
    public static native void __n_onProviderDisabled(long arg0, java.lang.String arg1, long arg2);
    public  void onProviderDisabled(java.lang.String arg0)  {
    __n_onProviderDisabled(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
    public static native void __n_onProviderEnabled(long arg0, java.lang.String arg1, long arg2);
    public  void onProviderEnabled(java.lang.String arg0)  {
    __n_onProviderEnabled(_unoRef,arg0, UnoHelper.GetUnoObjectRef(arg0));
    }
    
    public static native void __n_onStatusChanged(long arg0, java.lang.String arg1, int arg2, android.os.Bundle arg3, long arg4, long arg5, long arg6);
    public  void onStatusChanged(java.lang.String arg0, int arg1, android.os.Bundle arg2)  {
    __n_onStatusChanged(_unoRef,arg0, arg1, arg2, UnoHelper.GetUnoObjectRef(arg0), -1, UnoHelper.GetUnoObjectRef(arg2));
    }
    
}
