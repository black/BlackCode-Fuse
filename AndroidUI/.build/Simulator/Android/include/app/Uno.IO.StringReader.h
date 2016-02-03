// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_STRING_READER_H__
#define __APP_UNO_I_O_STRING_READER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.TextReader.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct StringReader;

struct StringReader__uType : ::app::Uno::IO::TextReader__uType
{
};

StringReader__uType* StringReader__typeof();

void StringReader___ObjInit_1(StringReader* __this, ::uString* text);
void StringReader__Close(StringReader* __this);
void StringReader__Dispose_1(StringReader* __this, bool disposing);
StringReader* StringReader__New_1(::uStatic* __this, ::uString* text);
int StringReader__Peek(StringReader* __this);
int StringReader__Read(StringReader* __this);
int StringReader__Read_1(StringReader* __this, ::uArray* buffer, int index, int count);
::uString* StringReader__ReadToEnd(StringReader* __this);

struct StringReader : ::app::Uno::IO::TextReader
{
    ::uStrong< ::uString*> _string;
    int _index;
    int _length;

    void _ObjInit_1(::uString* text) { StringReader___ObjInit_1(this, text); }
};

}}}


#endif
