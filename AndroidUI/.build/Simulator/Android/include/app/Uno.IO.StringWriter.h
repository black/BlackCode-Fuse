// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_STRING_WRITER_H__
#define __APP_UNO_I_O_STRING_WRITER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.TextWriter.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Text { struct StringBuilder; } } }

namespace app {
namespace Uno {
namespace IO {

struct StringWriter;

struct StringWriter__uType : ::app::Uno::IO::TextWriter__uType
{
};

StringWriter__uType* StringWriter__typeof();

void StringWriter___ObjInit_1(StringWriter* __this);
void StringWriter__Close(StringWriter* __this);
void StringWriter__Dispose_1(StringWriter* __this, bool disposing);
StringWriter* StringWriter__New_1(::uStatic* __this);
::uString* StringWriter__ToString(StringWriter* __this);
void StringWriter__Write_1(StringWriter* __this, ::uArray* buffer, int index, int count);
void StringWriter__Write_3(StringWriter* __this, ::uChar value);
void StringWriter__WriteBuffer(StringWriter* __this);

struct StringWriter : ::app::Uno::IO::TextWriter
{
    bool _open;
    ::uStrong< ::app::Uno::Text::StringBuilder*> _stringBuilder;
    ::uStrong< ::uArray*> _buffer;
    int _index;

    void _ObjInit_1() { StringWriter___ObjInit_1(this); }
    void WriteBuffer() { StringWriter__WriteBuffer(this); }
};

}}}


#endif
