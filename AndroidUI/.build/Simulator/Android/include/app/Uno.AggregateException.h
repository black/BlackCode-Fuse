// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_AGGREGATE_EXCEPTION_H__
#define __APP_UNO_AGGREGATE_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct ReadOnlyCollection__Uno_Exception; } } }

namespace app {
namespace Uno {

struct AggregateException;

struct AggregateException__uType : ::app::Uno::Exception__uType
{
};

AggregateException__uType* AggregateException__typeof();

void AggregateException___ObjInit_2(AggregateException* __this);
void AggregateException___ObjInit_3(AggregateException* __this, ::uArray* innerExceptions);
void AggregateException___ObjInit_4(AggregateException* __this, ::uString* message);
void AggregateException___ObjInit_5(AggregateException* __this, ::uString* message, ::uArray* innerExceptions);
::app::Uno::Collections::ReadOnlyCollection__Uno_Exception* AggregateException__get_InnerExceptions(AggregateException* __this);
AggregateException* AggregateException__New_3(::uStatic* __this);
AggregateException* AggregateException__New_4(::uStatic* __this, ::uArray* innerExceptions);
AggregateException* AggregateException__New_5(::uStatic* __this, ::uString* message);
AggregateException* AggregateException__New_6(::uStatic* __this, ::uString* message, ::uArray* innerExceptions);

struct AggregateException : ::app::Uno::Exception
{
    ::uStrong< ::uArray*> _innerExceptions;

    void _ObjInit_2() { AggregateException___ObjInit_2(this); }
    void _ObjInit_3(::uArray* innerExceptions) { AggregateException___ObjInit_3(this, innerExceptions); }
    void _ObjInit_4(::uString* message) { AggregateException___ObjInit_4(this, message); }
    void _ObjInit_5(::uString* message, ::uArray* innerExceptions) { AggregateException___ObjInit_5(this, message, innerExceptions); }
    ::app::Uno::Collections::ReadOnlyCollection__Uno_Exception* InnerExceptions() { return AggregateException__get_InnerExceptions(this); }
};

}}


#endif
