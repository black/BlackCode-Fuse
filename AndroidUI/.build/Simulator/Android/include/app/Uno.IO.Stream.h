// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_STREAM_H__
#define __APP_UNO_I_O_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct Stream;

struct Stream__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    void(*__fp_Close)(Stream*);
    void(*__fp_Dispose_1)(Stream*, bool);
    void(*__fp_Flush)(Stream*);
    bool(*__fp_get_CanRead)(Stream*);
    bool(*__fp_get_CanSeek)(Stream*);
    bool(*__fp_get_CanTimeout)(Stream*);
    bool(*__fp_get_CanWrite)(Stream*);
    ::uLong(*__fp_get_Length)(Stream*);
    ::uLong(*__fp_get_Position)(Stream*);
    int(*__fp_get_ReadTimeout)(Stream*);
    int(*__fp_get_WriteTimeout)(Stream*);
    int(*__fp_Read)(Stream*, ::uArray*, int, int);
    ::uLong(*__fp_Seek)(Stream*, ::uLong, int);
    void(*__fp_set_Position)(Stream*, ::uLong);
    void(*__fp_set_ReadTimeout)(Stream*, int);
    void(*__fp_set_WriteTimeout)(Stream*, int);
    void(*__fp_SetLength)(Stream*, ::uLong);
    void(*__fp_Write)(Stream*, ::uArray*, int, int);
};

Stream__uType* Stream__typeof();

void Stream___ObjInit(Stream* __this);
void Stream__Close(Stream* __this);
void Stream__Dispose(Stream* __this);
void Stream__Dispose_1(Stream* __this, bool disposing);
bool Stream__get_CanTimeout(Stream* __this);
int Stream__get_ReadTimeout(Stream* __this);
int Stream__get_WriteTimeout(Stream* __this);
void Stream__set_ReadTimeout(Stream* __this, int value);
void Stream__set_WriteTimeout(Stream* __this, int value);

struct Stream : ::uObject
{
    void _ObjInit() { Stream___ObjInit(this); }
    void Close() { (((Stream__uType*)this->__obj_type)->__fp_Close)(this); }
    void Dispose() { Stream__Dispose(this); }
    void Dispose_1(bool disposing) { (((Stream__uType*)this->__obj_type)->__fp_Dispose_1)(this, disposing); }
    void Flush() { (((Stream__uType*)this->__obj_type)->__fp_Flush)(this); }
    bool CanRead() { return (((Stream__uType*)this->__obj_type)->__fp_get_CanRead)(this); }
    bool CanSeek() { return (((Stream__uType*)this->__obj_type)->__fp_get_CanSeek)(this); }
    bool CanTimeout() { return (((Stream__uType*)this->__obj_type)->__fp_get_CanTimeout)(this); }
    bool CanWrite() { return (((Stream__uType*)this->__obj_type)->__fp_get_CanWrite)(this); }
    ::uLong Length() { return (((Stream__uType*)this->__obj_type)->__fp_get_Length)(this); }
    ::uLong Position() { return (((Stream__uType*)this->__obj_type)->__fp_get_Position)(this); }
    int ReadTimeout() { return (((Stream__uType*)this->__obj_type)->__fp_get_ReadTimeout)(this); }
    int WriteTimeout() { return (((Stream__uType*)this->__obj_type)->__fp_get_WriteTimeout)(this); }
    int Read(::uArray* dst, int byteOffset, int byteCount) { return (((Stream__uType*)this->__obj_type)->__fp_Read)(this, dst, byteOffset, byteCount); }
    ::uLong Seek(::uLong byteOffset, int origin) { return (((Stream__uType*)this->__obj_type)->__fp_Seek)(this, byteOffset, origin); }
    void Position(::uLong value) { (((Stream__uType*)this->__obj_type)->__fp_set_Position)(this, value); }
    void ReadTimeout(int value) { (((Stream__uType*)this->__obj_type)->__fp_set_ReadTimeout)(this, value); }
    void WriteTimeout(int value) { (((Stream__uType*)this->__obj_type)->__fp_set_WriteTimeout)(this, value); }
    void SetLength(::uLong value) { (((Stream__uType*)this->__obj_type)->__fp_SetLength)(this, value); }
    void Write(::uArray* src, int byteOffset, int byteCount) { (((Stream__uType*)this->__obj_type)->__fp_Write)(this, src, byteOffset, byteCount); }
};

}}}


#endif
