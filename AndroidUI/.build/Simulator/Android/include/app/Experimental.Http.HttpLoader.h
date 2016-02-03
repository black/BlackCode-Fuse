// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_HTTP_HTTP_LOADER_H__
#define __APP_EXPERIMENTAL_HTTP_HTTP_LOADER_H__

#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCache; } } }

namespace app {
namespace Experimental {
namespace Http {

extern ::uStaticStrong< ::uObject*> HttpLoader___cache;
extern ::uStaticStrong< ::app::Experimental::Cache::DiskCache*> HttpLoader___diskCache;
extern int HttpLoader___maxAge;

struct HttpLoader__uType : ::uClassType
{
};

HttpLoader__uType* HttpLoader__typeof();

void HttpLoader___TypeInit(::uStatic* __this);
void HttpLoader__Discard(::uStatic* __this, ::uString* requestUri);
void HttpLoader__EnableDiskCaching(::uStatic* __this, ::uString* appName, ::uLong maxSize);
::uObject* HttpLoader__get_Cache(::uStatic* __this);
int HttpLoader__get_CacheMaxAge(::uStatic* __this);
void HttpLoader__LoadBinary(::uStatic* __this, ::uString* requestUri, ::uDelegate* callback, ::uDelegate* error);
void HttpLoader__LoadText(::uStatic* __this, ::uString* requestUri, ::uDelegate* callback, ::uDelegate* error);
void HttpLoader__set_CacheMaxAge(::uStatic* __this, int value);

}}}


#endif
