// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_HTTP_HTTP_RESPONSE_HEADER_H__
#define __APP_EXPERIMENTAL_HTTP_HTTP_RESPONSE_HEADER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__string; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Experimental {
namespace Http {

struct HttpResponseHeader;

struct HttpResponseHeader__uType : ::uClassType
{
};

HttpResponseHeader__uType* HttpResponseHeader__typeof();

void HttpResponseHeader___ObjInit(HttpResponseHeader* __this);
::app::Uno::Collections::Dictionary__string__string* HttpResponseHeader__get_Headers(HttpResponseHeader* __this);
::uString* HttpResponseHeader__get_ReasonPhrase(HttpResponseHeader* __this);
int HttpResponseHeader__get_StatusCode(HttpResponseHeader* __this);
HttpResponseHeader* HttpResponseHeader__New_1(::uStatic* __this);
HttpResponseHeader* HttpResponseHeader__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* r);
void HttpResponseHeader__set_Headers(HttpResponseHeader* __this, ::app::Uno::Collections::Dictionary__string__string* value);
void HttpResponseHeader__set_ReasonPhrase(HttpResponseHeader* __this, ::uString* value);
void HttpResponseHeader__set_StatusCode(HttpResponseHeader* __this, int value);
void HttpResponseHeader__Write(HttpResponseHeader* __this, ::app::Uno::IO::BinaryWriter* w);
void HttpResponseHeader__WriteSafe(HttpResponseHeader* __this, ::app::Uno::IO::BinaryWriter* w, ::uString* s);

struct HttpResponseHeader : ::uObject
{
    int _StatusCode;
    ::uStrong< ::uString*> _ReasonPhrase;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__string*> _Headers;

    void _ObjInit() { HttpResponseHeader___ObjInit(this); }
    ::app::Uno::Collections::Dictionary__string__string* Headers() { return HttpResponseHeader__get_Headers(this); }
    ::uString* ReasonPhrase() { return HttpResponseHeader__get_ReasonPhrase(this); }
    int StatusCode() { return HttpResponseHeader__get_StatusCode(this); }
    void Headers(::app::Uno::Collections::Dictionary__string__string* value) { HttpResponseHeader__set_Headers(this, value); }
    void ReasonPhrase(::uString* value) { HttpResponseHeader__set_ReasonPhrase(this, value); }
    void StatusCode(int value) { HttpResponseHeader__set_StatusCode(this, value); }
    void Write(::app::Uno::IO::BinaryWriter* w) { HttpResponseHeader__Write(this, w); }
    void WriteSafe(::app::Uno::IO::BinaryWriter* w, ::uString* s) { HttpResponseHeader__WriteSafe(this, w, s); }
};

}}}


#endif
