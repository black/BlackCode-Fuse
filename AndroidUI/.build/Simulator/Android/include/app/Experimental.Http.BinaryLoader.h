// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_HTTP_BINARY_LOADER_H__
#define __APP_EXPERIMENTAL_HTTP_BINARY_LOADER_H__

#include <app/Experimental.Http.Loader.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Experimental {
namespace Http {

struct BinaryLoader;

struct BinaryLoader__uType : ::app::Experimental::Http::Loader__uType
{
};

BinaryLoader__uType* BinaryLoader__typeof();

void BinaryLoader___ObjInit_1(BinaryLoader* __this);
void BinaryLoader__CompleteLoading(BinaryLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* resp);
void BinaryLoader__LoadCacheData(BinaryLoader* __this);
bool BinaryLoader__LoadCacheRaw(BinaryLoader* __this, ::uObject* record);
BinaryLoader* BinaryLoader__New_1(::uStatic* __this);
void BinaryLoader__OnBufferLoaded(BinaryLoader* __this, ::uArray* data);
void BinaryLoader__PrepareRequest(BinaryLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request);

struct BinaryLoader : ::app::Experimental::Http::Loader
{
    ::uStrong< ::uDelegate*> Callback;
    ::uStrong< ::app::Uno::Buffer*> _loadedCache;

    void _ObjInit_1() { BinaryLoader___ObjInit_1(this); }
    void OnBufferLoaded(::uArray* data) { BinaryLoader__OnBufferLoaded(this, data); }
};

}}}


#endif
