// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_HTTP_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_HTTP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Http;

struct Http__uType : ::uClassType
{
};

Http__uType* Http__typeof();

void Http___ObjInit(Http* __this, ::app::Fuse::Reactive::ThreadWorker* w);
::uObject* Http__fusejs_http_send(Http* __this, ::uArray* args);
Http* Http__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* w);

struct Http : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _w;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* w) { Http___ObjInit(this, w); }
    ::uObject* fusejs_http_send(::uArray* args) { return Http__fusejs_http_send(this, args); }
};

}}}}


#endif
