// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_FUSE_J_S_HTTP_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_FUSE_J_S_HTTP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__string; } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct FuseJSHttp;

struct FuseJSHttp__uType : ::uClassType
{
};

FuseJSHttp__uType* FuseJSHttp__typeof();

void FuseJSHttp___ObjInit(FuseJSHttp* __this, ::app::Fuse::Reactive::ThreadWorker* w, ::uArray* r);
FuseJSHttp* FuseJSHttp__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* w, ::uArray* r);
void FuseJSHttp__OnAborted(FuseJSHttp* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* res);
void FuseJSHttp__OnDone(FuseJSHttp* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* res);
void FuseJSHttp__OnError(FuseJSHttp* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* res, ::uString* err);
void FuseJSHttp__Run(FuseJSHttp* __this);
::uString* FuseJSHttp__Stringify(::uStatic* __this, ::uString* s);

struct FuseJSHttp : ::uObject
{
    ::uStrong< ::app::Fuse::Scripting::Function*> _callback;
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _w;
    ::uStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*> _req;
    ::uStrong< ::uString*> _method;
    ::uStrong< ::uString*> _url;
    ::uStrong< ::uString*> _data;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__string*> _headers;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* w, ::uArray* r) { FuseJSHttp___ObjInit(this, w, r); }
    void OnAborted(::app::Uno::Net::Http::HttpMessageHandlerRequest* res) { FuseJSHttp__OnAborted(this, res); }
    void OnDone(::app::Uno::Net::Http::HttpMessageHandlerRequest* res) { FuseJSHttp__OnDone(this, res); }
    void OnError(::app::Uno::Net::Http::HttpMessageHandlerRequest* res, ::uString* err) { FuseJSHttp__OnError(this, res, err); }
    void Run() { FuseJSHttp__Run(this); }
};

}}}}


#endif
