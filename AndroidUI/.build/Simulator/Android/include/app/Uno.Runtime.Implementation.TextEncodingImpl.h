// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_TEXT_ENCODING_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_TEXT_ENCODING_IMPL_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct TextEncodingImpl__uType : ::uClassType
{
};

TextEncodingImpl__uType* TextEncodingImpl__typeof();

::uString* TextEncodingImpl__DecodeAscii(::uStatic* __this, ::uArray* value);
::uArray* TextEncodingImpl__DecodeBase64(::uStatic* __this, ::uString* value);
::uString* TextEncodingImpl__DecodeUri(::uStatic* __this, ::uString* value_);
::uString* TextEncodingImpl__DecodeUtf8(::uStatic* __this, ::uArray* value_);
::uArray* TextEncodingImpl__EncodeAscii(::uStatic* __this, ::uString* value);
::uString* TextEncodingImpl__EncodeBase64(::uStatic* __this, ::uArray* value_);
::uString* TextEncodingImpl__EncodeUri(::uStatic* __this, ::uString* value_);
::uArray* TextEncodingImpl__EncodeUtf8(::uStatic* __this, ::uString* value_);

}}}}


#endif
