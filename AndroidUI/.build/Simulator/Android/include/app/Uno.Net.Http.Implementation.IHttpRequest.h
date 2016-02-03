// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_IMPLEMENTATION_I_HTTP_REQUEST_H__
#define __APP_UNO_NET_HTTP_IMPLEMENTATION_I_HTTP_REQUEST_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {
namespace Implementation {

::uInterfaceType* IHttpRequest__typeof();

struct IHttpRequest
{
    void(*__fp_Abort)(void*);
    void(*__fp_EnableCache)(void*, bool);
    ::uArray*(*__fp_GetResponseContentByteArray)(void*);
    ::uString*(*__fp_GetResponseContentString)(void*);
    ::uString*(*__fp_GetResponseHeader)(void*, ::uString*);
    ::uString*(*__fp_GetResponseHeaders)(void*);
    int(*__fp_GetResponseStatus)(void*);
    void(*__fp_SendAsync)(void*);
    void(*__fp_SendAsync_1)(void*, ::uArray*);
    void(*__fp_SendAsync_2)(void*, ::uString*);
    void(*__fp_SetHeader)(void*, ::uString*, ::uString*);
    void(*__fp_SetTimeout)(void*, int);

    static void Abort(::uObject* __this) { ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_Abort((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void EnableCache(::uObject* __this, bool enableCache) { ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_EnableCache((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), enableCache); }
    static ::uArray* GetResponseContentByteArray(::uObject* __this) { return ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_GetResponseContentByteArray((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uString* GetResponseContentString(::uObject* __this) { return ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_GetResponseContentString((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uString* GetResponseHeader(::uObject* __this, ::uString* name) { return ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_GetResponseHeader((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), name); }
    static ::uString* GetResponseHeaders(::uObject* __this) { return ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_GetResponseHeaders((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int GetResponseStatus(::uObject* __this) { return ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_GetResponseStatus((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void SendAsync(::uObject* __this) { ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_SendAsync((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void SendAsync_1(::uObject* __this, ::uArray* data) { ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_SendAsync_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), data); }
    static void SendAsync_2(::uObject* __this, ::uString* data) { ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_SendAsync_2((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), data); }
    static void SetHeader(::uObject* __this, ::uString* name, ::uString* value) { ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_SetHeader((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), name, value); }
    static void SetTimeout(::uObject* __this, int timeoutInMilliseconds) { ((IHttpRequest*)uGetInterfacePtr(__this, IHttpRequest__typeof()))->__fp_SetTimeout((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), timeoutInMilliseconds); }
};

}}}}}


#endif
