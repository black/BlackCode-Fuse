// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_TEXT_READER_H__
#define __APP_UNO_I_O_TEXT_READER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct TextReader;

struct TextReader__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    void(*__fp_Close)(TextReader*);
    void(*__fp_Dispose_1)(TextReader*, bool);
    int(*__fp_Peek)(TextReader*);
    int(*__fp_Read)(TextReader*);
    int(*__fp_Read_1)(TextReader*, ::uArray*, int, int);
    ::uString*(*__fp_ReadToEnd)(TextReader*);
};

TextReader__uType* TextReader__typeof();

void TextReader___ObjInit(TextReader* __this);
void TextReader__Close(TextReader* __this);
void TextReader__Dispose(TextReader* __this);
void TextReader__Dispose_1(TextReader* __this, bool disposing);
int TextReader__Peek(TextReader* __this);
int TextReader__Read(TextReader* __this);
int TextReader__Read_1(TextReader* __this, ::uArray* buffer, int index, int count);
int TextReader__ReadBlock(TextReader* __this, ::uArray* buffer, int index, int count);
::uString* TextReader__ReadLine(TextReader* __this);
::uString* TextReader__ReadToEnd(TextReader* __this);

struct TextReader : ::uObject
{
    void _ObjInit() { TextReader___ObjInit(this); }
    void Close() { (((TextReader__uType*)this->__obj_type)->__fp_Close)(this); }
    void Dispose() { TextReader__Dispose(this); }
    void Dispose_1(bool disposing) { (((TextReader__uType*)this->__obj_type)->__fp_Dispose_1)(this, disposing); }
    int Peek() { return (((TextReader__uType*)this->__obj_type)->__fp_Peek)(this); }
    int Read() { return (((TextReader__uType*)this->__obj_type)->__fp_Read)(this); }
    int Read_1(::uArray* buffer, int index, int count) { return (((TextReader__uType*)this->__obj_type)->__fp_Read_1)(this, buffer, index, count); }
    int ReadBlock(::uArray* buffer, int index, int count) { return TextReader__ReadBlock(this, buffer, index, count); }
    ::uString* ReadLine() { return TextReader__ReadLine(this); }
    ::uString* ReadToEnd() { return (((TextReader__uType*)this->__obj_type)->__fp_ReadToEnd)(this); }
};

}}}


#endif
