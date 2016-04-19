// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno'.
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
void TextEncodingImpl__DecodeUtf8_fn(uArray* value_, uString** __retval);
void TextEncodingImpl__EncodeUtf8_fn(uString* value_, uArray** __retval);

struct TextEncodingImpl : uObject
{
    static uString* DecodeUtf8(uArray* value_);
    static uArray* EncodeUtf8(uString* value_);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
