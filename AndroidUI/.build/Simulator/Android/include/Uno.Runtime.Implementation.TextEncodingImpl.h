// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct TextEncodingImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class TextEncodingImpl :583
// {
uClassType* TextEncodingImpl_typeof();
void TextEncodingImpl__DecodeAscii_fn(uArray* value, uString** __retval);
void TextEncodingImpl__DecodeBase64_fn(uString* value, uArray** __retval);
void TextEncodingImpl__DecodeUtf8_fn(uArray* value_, uString** __retval);
void TextEncodingImpl__EncodeAscii_fn(uString* value, uArray** __retval);
void TextEncodingImpl__EncodeBase64_fn(uArray* value_, uString** __retval);
void TextEncodingImpl__EncodeUtf8_fn(uString* value_, uArray** __retval);

struct TextEncodingImpl : uObject
{
    static uString* DecodeAscii(uArray* value);
    static uArray* DecodeBase64(uString* value);
    static uString* DecodeUtf8(uArray* value_);
    static uArray* EncodeAscii(uString* value);
    static uString* EncodeBase64(uArray* value_);
    static uArray* EncodeUtf8(uString* value_);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
