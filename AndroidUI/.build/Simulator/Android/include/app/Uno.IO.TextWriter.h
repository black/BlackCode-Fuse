// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_TEXT_WRITER_H__
#define __APP_UNO_I_O_TEXT_WRITER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct TextWriter;

struct TextWriter__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    void(*__fp_Close)(TextWriter*);
    void(*__fp_Dispose_1)(TextWriter*, bool);
    void(*__fp_Flush)(TextWriter*);
    void(*__fp_Write_1)(TextWriter*, ::uArray*, int, int);
    void(*__fp_Write_3)(TextWriter*, ::uChar);
    void(*__fp_Write_9)(TextWriter*, ::uString*);
};

TextWriter__uType* TextWriter__typeof();

void TextWriter___ObjInit(TextWriter* __this);
void TextWriter__Close(TextWriter* __this);
void TextWriter__Dispose(TextWriter* __this);
void TextWriter__Dispose_1(TextWriter* __this, bool disposing);
void TextWriter__Flush(TextWriter* __this);
void TextWriter__Write(TextWriter* __this, ::uArray* buffer);
void TextWriter__Write_1(TextWriter* __this, ::uArray* buffer, int index, int count);
void TextWriter__Write_10(TextWriter* __this, ::uString* format, ::uArray* args);
void TextWriter__Write_11(TextWriter* __this, ::uUInt value);
void TextWriter__Write_12(TextWriter* __this, ::uULong value);
void TextWriter__Write_2(TextWriter* __this, bool value);
void TextWriter__Write_3(TextWriter* __this, ::uChar value);
void TextWriter__Write_4(TextWriter* __this, double value);
void TextWriter__Write_5(TextWriter* __this, float value);
void TextWriter__Write_6(TextWriter* __this, int value);
void TextWriter__Write_7(TextWriter* __this, ::uLong value);
void TextWriter__Write_8(TextWriter* __this, ::uObject* value);
void TextWriter__Write_9(TextWriter* __this, ::uString* value);
void TextWriter__WriteLine(TextWriter* __this);
void TextWriter__WriteLine_1(TextWriter* __this, ::uArray* buffer);
void TextWriter__WriteLine_10(TextWriter* __this, ::uString* value);
void TextWriter__WriteLine_11(TextWriter* __this, ::uString* format, ::uArray* args);
void TextWriter__WriteLine_12(TextWriter* __this, ::uUInt value);
void TextWriter__WriteLine_13(TextWriter* __this, ::uULong value);
void TextWriter__WriteLine_2(TextWriter* __this, ::uArray* buffer, int index, int count);
void TextWriter__WriteLine_3(TextWriter* __this, bool value);
void TextWriter__WriteLine_4(TextWriter* __this, ::uChar value);
void TextWriter__WriteLine_5(TextWriter* __this, double value);
void TextWriter__WriteLine_6(TextWriter* __this, float value);
void TextWriter__WriteLine_7(TextWriter* __this, int value);
void TextWriter__WriteLine_8(TextWriter* __this, ::uLong value);
void TextWriter__WriteLine_9(TextWriter* __this, ::uObject* value);

struct TextWriter : ::uObject
{
    void _ObjInit() { TextWriter___ObjInit(this); }
    void Close() { (((TextWriter__uType*)this->__obj_type)->__fp_Close)(this); }
    void Dispose() { TextWriter__Dispose(this); }
    void Dispose_1(bool disposing) { (((TextWriter__uType*)this->__obj_type)->__fp_Dispose_1)(this, disposing); }
    void Flush() { (((TextWriter__uType*)this->__obj_type)->__fp_Flush)(this); }
    void Write(::uArray* buffer) { TextWriter__Write(this, buffer); }
    void Write_1(::uArray* buffer, int index, int count) { (((TextWriter__uType*)this->__obj_type)->__fp_Write_1)(this, buffer, index, count); }
    void Write_10(::uString* format, ::uArray* args) { TextWriter__Write_10(this, format, args); }
    void Write_11(::uUInt value) { TextWriter__Write_11(this, value); }
    void Write_12(::uULong value) { TextWriter__Write_12(this, value); }
    void Write_2(bool value) { TextWriter__Write_2(this, value); }
    void Write_3(::uChar value) { (((TextWriter__uType*)this->__obj_type)->__fp_Write_3)(this, value); }
    void Write_4(double value) { TextWriter__Write_4(this, value); }
    void Write_5(float value) { TextWriter__Write_5(this, value); }
    void Write_6(int value) { TextWriter__Write_6(this, value); }
    void Write_7(::uLong value) { TextWriter__Write_7(this, value); }
    void Write_8(::uObject* value) { TextWriter__Write_8(this, value); }
    void Write_9(::uString* value) { (((TextWriter__uType*)this->__obj_type)->__fp_Write_9)(this, value); }
    void WriteLine() { TextWriter__WriteLine(this); }
    void WriteLine_1(::uArray* buffer) { TextWriter__WriteLine_1(this, buffer); }
    void WriteLine_10(::uString* value) { TextWriter__WriteLine_10(this, value); }
    void WriteLine_11(::uString* format, ::uArray* args) { TextWriter__WriteLine_11(this, format, args); }
    void WriteLine_12(::uUInt value) { TextWriter__WriteLine_12(this, value); }
    void WriteLine_13(::uULong value) { TextWriter__WriteLine_13(this, value); }
    void WriteLine_2(::uArray* buffer, int index, int count) { TextWriter__WriteLine_2(this, buffer, index, count); }
    void WriteLine_3(bool value) { TextWriter__WriteLine_3(this, value); }
    void WriteLine_4(::uChar value) { TextWriter__WriteLine_4(this, value); }
    void WriteLine_5(double value) { TextWriter__WriteLine_5(this, value); }
    void WriteLine_6(float value) { TextWriter__WriteLine_6(this, value); }
    void WriteLine_7(int value) { TextWriter__WriteLine_7(this, value); }
    void WriteLine_8(::uLong value) { TextWriter__WriteLine_8(this, value); }
    void WriteLine_9(::uObject* value) { TextWriter__WriteLine_9(this, value); }
};

}}}


#endif
