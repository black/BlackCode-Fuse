// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Net{
namespace Http{
namespace Implementation{

// public abstract interface IHttpRequest :7
// {
uInterfaceType* IHttpRequest_typeof();

struct IHttpRequest
{
    void(*fp_GetResponseContentByteArray)(uObject*, uArray**);
    void(*fp_GetResponseContentString)(uObject*, uString**);
    void(*fp_GetResponseHeaders)(uObject*, uString**);
    void(*fp_GetResponseStatus)(uObject*, int*);
    void(*fp_SendAsync)(uObject*);
    void(*fp_SetHeader)(uObject*, uString*, uString*);
    static uArray* GetResponseContentByteArray(const uInterface& __this) { uArray* __retval; return __this.VTable<IHttpRequest>()->fp_GetResponseContentByteArray(__this, &__retval), __retval; }
    static uString* GetResponseContentString(const uInterface& __this) { uString* __retval; return __this.VTable<IHttpRequest>()->fp_GetResponseContentString(__this, &__retval), __retval; }
    static uString* GetResponseHeaders(const uInterface& __this) { uString* __retval; return __this.VTable<IHttpRequest>()->fp_GetResponseHeaders(__this, &__retval), __retval; }
    static int GetResponseStatus(const uInterface& __this) { int __retval; return __this.VTable<IHttpRequest>()->fp_GetResponseStatus(__this, &__retval), __retval; }
    static void SendAsync(const uInterface& __this) { __this.VTable<IHttpRequest>()->fp_SendAsync(__this); }
    static void SetHeader(const uInterface& __this, uString* name, uString* value) { __this.VTable<IHttpRequest>()->fp_SetHeader(__this, name, value); }
};
// }

}}}}} // ::g::Uno::Net::Http::Implementation
