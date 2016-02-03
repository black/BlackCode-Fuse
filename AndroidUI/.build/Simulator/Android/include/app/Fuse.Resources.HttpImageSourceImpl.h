// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_IMPL_H__
#define __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_IMPL_H__

#include <app/Fuse.Resources.IMemoryResource.h>
#include <app/Fuse.Resources.LoadingImageSource.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Http { struct HttpResponseHeader; } } }
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Fuse {
namespace Resources {

struct HttpImageSourceImpl;

struct HttpImageSourceImpl__uType : ::app::Fuse::Resources::LoadingImageSource__uType
{
};

HttpImageSourceImpl__uType* HttpImageSourceImpl__typeof();

void HttpImageSourceImpl___ObjInit_2(HttpImageSourceImpl* __this, ::uString* url);
void HttpImageSourceImpl__AttemptLoad(HttpImageSourceImpl* __this);
void HttpImageSourceImpl__Fail(HttpImageSourceImpl* __this, ::uString* msg, ::app::Uno::Exception* e);
::uString* HttpImageSourceImpl__get_Url(HttpImageSourceImpl* __this);
void HttpImageSourceImpl__HttpCallback(HttpImageSourceImpl* __this, ::app::Experimental::Http::HttpResponseHeader* response, ::app::Uno::Buffer* data);
void HttpImageSourceImpl__LoadFailed(HttpImageSourceImpl* __this, ::uString* reason);
HttpImageSourceImpl* HttpImageSourceImpl__New_1(::uStatic* __this, ::uString* url);

struct HttpImageSourceImpl : ::app::Fuse::Resources::LoadingImageSource
{
    ::uStrong< ::uString*> _url;
    ::uStrong< ::uString*> _contentType;

    void _ObjInit_2(::uString* url) { HttpImageSourceImpl___ObjInit_2(this, url); }
    void Fail(::uString* msg, ::app::Uno::Exception* e) { HttpImageSourceImpl__Fail(this, msg, e); }
    ::uString* Url() { return HttpImageSourceImpl__get_Url(this); }
    void HttpCallback(::app::Experimental::Http::HttpResponseHeader* response, ::app::Uno::Buffer* data) { HttpImageSourceImpl__HttpCallback(this, response, data); }
    void LoadFailed(::uString* reason) { HttpImageSourceImpl__LoadFailed(this, reason); }
};

}}}


#endif
