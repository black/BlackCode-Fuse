// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_HTTP_LOADER_H__
#define __APP_EXPERIMENTAL_HTTP_LOADER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Http { struct HttpResponseHeader; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__string; } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Experimental {
namespace Http {

struct Loader;

struct Loader__uType : ::uClassType
{
    void(*__fp_CompleteLoading)(Loader*, ::app::Uno::Net::Http::HttpMessageHandlerRequest*);
    void(*__fp_LoadCacheData)(Loader*);
    bool(*__fp_LoadCacheRaw)(Loader*, ::uObject*);
    void(*__fp_PrepareRequest)(Loader*, ::app::Uno::Net::Http::HttpMessageHandlerRequest*);
};

Loader__uType* Loader__typeof();

void Loader___ObjInit(Loader* __this);
void Loader__CloseRecord(Loader* __this, ::uObject* record);
::uString* Loader__ConstructRecordId(::uStatic* __this, ::uString* method, ::uString* uri);
::app::Uno::Collections::Dictionary__string__string* Loader__ExtractHeaders(Loader* __this, ::uString* headers);
::app::Experimental::Http::HttpResponseHeader* Loader__get_Header(Loader* __this);
void Loader__Initiate(Loader* __this);
bool Loader__IsExpired(Loader* __this, ::uObject* record);
bool Loader__LoadCache(Loader* __this, ::uObject* record);
void Loader__MakeRequest(Loader* __this);
void Loader__OnCacheReady(Loader* __this, ::uObject* record);
void Loader__OnError(Loader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* msg, ::uString* reason);
void Loader__OnLoaded(Loader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* resp);
::uObject* Loader__OpenRecord(Loader* __this);

struct Loader : ::uObject
{
    ::uStrong< ::uDelegate*> ErrorCallback;
    ::uStrong< ::uObject*> Cache;
    ::uStrong< ::uString*> Uri;
    ::uStrong< ::uString*> Method;
    ::uStrong< ::app::Experimental::Http::HttpResponseHeader*> _header;
    ::uStrong< ::uObject*> _cacheRecord;

    void _ObjInit() { Loader___ObjInit(this); }
    void CloseRecord(::uObject* record) { Loader__CloseRecord(this, record); }
    void CompleteLoading(::app::Uno::Net::Http::HttpMessageHandlerRequest* resp) { (((Loader__uType*)this->__obj_type)->__fp_CompleteLoading)(this, resp); }
    ::app::Uno::Collections::Dictionary__string__string* ExtractHeaders(::uString* headers) { return Loader__ExtractHeaders(this, headers); }
    ::app::Experimental::Http::HttpResponseHeader* Header() { return Loader__get_Header(this); }
    void Initiate() { Loader__Initiate(this); }
    bool IsExpired(::uObject* record) { return Loader__IsExpired(this, record); }
    bool LoadCache(::uObject* record) { return Loader__LoadCache(this, record); }
    void LoadCacheData() { (((Loader__uType*)this->__obj_type)->__fp_LoadCacheData)(this); }
    bool LoadCacheRaw(::uObject* record) { return (((Loader__uType*)this->__obj_type)->__fp_LoadCacheRaw)(this, record); }
    void MakeRequest() { Loader__MakeRequest(this); }
    void OnCacheReady(::uObject* record) { Loader__OnCacheReady(this, record); }
    void OnError(::app::Uno::Net::Http::HttpMessageHandlerRequest* msg, ::uString* reason) { Loader__OnError(this, msg, reason); }
    void OnLoaded(::app::Uno::Net::Http::HttpMessageHandlerRequest* resp) { Loader__OnLoaded(this, resp); }
    ::uObject* OpenRecord() { return Loader__OpenRecord(this); }
    void PrepareRequest(::app::Uno::Net::Http::HttpMessageHandlerRequest* request) { (((Loader__uType*)this->__obj_type)->__fp_PrepareRequest)(this, request); }
};

}}}


#endif
