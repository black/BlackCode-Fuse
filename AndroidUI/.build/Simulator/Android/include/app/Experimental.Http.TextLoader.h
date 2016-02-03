// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_HTTP_TEXT_LOADER_H__
#define __APP_EXPERIMENTAL_HTTP_TEXT_LOADER_H__

#include <app/Experimental.Http.Loader.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Experimental {
namespace Http {

struct TextLoader;

struct TextLoader__uType : ::app::Experimental::Http::Loader__uType
{
};

TextLoader__uType* TextLoader__typeof();

void TextLoader___ObjInit_1(TextLoader* __this);
void TextLoader__CompleteLoading(TextLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* resp);
void TextLoader__LoadCacheData(TextLoader* __this);
bool TextLoader__LoadCacheRaw(TextLoader* __this, ::uObject* record);
TextLoader* TextLoader__New_1(::uStatic* __this);
void TextLoader__OnBufferLoaded(TextLoader* __this, ::uString* data);
void TextLoader__PrepareRequest(TextLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request);

struct TextLoader : ::app::Experimental::Http::Loader
{
    ::uStrong< ::uDelegate*> Callback;
    ::uStrong< ::uString*> _loadedCache;

    void _ObjInit_1() { TextLoader___ObjInit_1(this); }
    void OnBufferLoaded(::uString* data) { TextLoader__OnBufferLoaded(this, data); }
};

}}}


#endif
