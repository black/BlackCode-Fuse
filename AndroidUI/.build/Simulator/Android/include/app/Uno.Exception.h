// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_EXCEPTION_H__
#define __APP_UNO_EXCEPTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Exception;

struct Exception__uType : ::uClassType
{
    ::uString*(*__fp_get_Message)(Exception*);
};

Exception__uType* Exception__typeof();

void Exception___ObjInit(Exception* __this);
void Exception___ObjInit_1(Exception* __this, ::uString* message);
::uString* Exception__get_Message(Exception* __this);
::uString* Exception__get_StackTrace(Exception* __this);
Exception* Exception__New_1(::uStatic* __this);
Exception* Exception__New_2(::uStatic* __this, ::uString* message);
::uString* Exception__ToString(Exception* __this);

struct Exception : ::uObject
{
    ::uStrong< ::uString*> _message;
    ::uStrong< ::uString*> _trace;

    void _ObjInit() { Exception___ObjInit(this); }
    void _ObjInit_1(::uString* message) { Exception___ObjInit_1(this, message); }
    ::uString* Message() { return (((Exception__uType*)this->__obj_type)->__fp_get_Message)(this); }
    ::uString* StackTrace() { return Exception__get_StackTrace(this); }
};

}}


#endif
