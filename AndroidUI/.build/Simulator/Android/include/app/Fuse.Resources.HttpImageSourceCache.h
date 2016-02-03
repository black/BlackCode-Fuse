// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_CACHE_H__
#define __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_CACHE_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct HttpImageSourceImpl; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_; } } }

namespace app {
namespace Fuse {
namespace Resources {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*> HttpImageSourceCache___cache;

struct HttpImageSourceCache__uType : ::uClassType
{
};

HttpImageSourceCache__uType* HttpImageSourceCache__typeof();

void HttpImageSourceCache___TypeInit(::uStatic* __this);
::app::Fuse::Resources::HttpImageSourceImpl* HttpImageSourceCache__GetUrl(::uStatic* __this, ::uString* url);

}}}


#endif
