// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HTTP_DEFAULT_DISPATCHER_H__
#define __APP_UNO_NET_HTTP_HTTP_DEFAULT_DISPATCHER_H__

#include <app/Uno.Object.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HttpDefaultDispatcher;

struct HttpDefaultDispatcher__uType : ::uClassType
{
    ::app::Uno::Threading::IDispatcher __interface_0;
};

HttpDefaultDispatcher__uType* HttpDefaultDispatcher__typeof();

void HttpDefaultDispatcher___ObjInit(HttpDefaultDispatcher* __this);
void HttpDefaultDispatcher__Invoke(HttpDefaultDispatcher* __this, ::uDelegate* action);
HttpDefaultDispatcher* HttpDefaultDispatcher__New_1(::uStatic* __this);

struct HttpDefaultDispatcher : ::uObject
{
    void _ObjInit() { HttpDefaultDispatcher___ObjInit(this); }
    void Invoke(::uDelegate* action) { HttpDefaultDispatcher__Invoke(this, action); }
};

}}}}


#endif
