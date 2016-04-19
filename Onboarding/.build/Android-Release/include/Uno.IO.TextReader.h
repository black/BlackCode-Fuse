// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct TextReader;}}}

namespace g{
namespace Uno{
namespace IO{

// public abstract class TextReader :2207
// {
struct TextReader_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose1)(::g::Uno::IO::TextReader*, bool*);
};

TextReader_type* TextReader_typeof();
void TextReader__ctor__fn(TextReader* __this);
void TextReader__Dispose_fn(TextReader* __this);
void TextReader__Dispose1_fn(TextReader* __this, bool* disposing);

struct TextReader : uObject
{
    void ctor_();
    void Dispose();
    void Dispose1(bool disposing) { (((TextReader_type*)__type)->fp_Dispose1)(this, &disposing); }
    static void Dispose1(TextReader* __this, bool disposing) { TextReader__Dispose1_fn(__this, &disposing); }
};
// }

}}} // ::g::Uno::IO
