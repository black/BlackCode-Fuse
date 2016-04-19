// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Collections{struct ReadOnlyCollection;}}}
namespace g{namespace Uno{struct AggregateException;}}

namespace g{
namespace Uno{

// public sealed class AggregateException :9
// {
uType* AggregateException_typeof();
void AggregateException__ctor_5_fn(AggregateException* __this, uString* message, uArray* innerExceptions);
void AggregateException__ctor_6_fn(AggregateException* __this, uArray* innerExceptions);
void AggregateException__get_InnerExceptions_fn(AggregateException* __this, ::g::Uno::Collections::ReadOnlyCollection** __retval);
void AggregateException__New7_fn(uArray* innerExceptions, AggregateException** __retval);

struct AggregateException : ::g::Uno::Exception
{
    uStrong<uArray*> _innerExceptions;

    void ctor_5(uString* message, uArray* innerExceptions);
    void ctor_6(uArray* innerExceptions);
    ::g::Uno::Collections::ReadOnlyCollection* InnerExceptions();
    static AggregateException* New7(uArray* innerExceptions);
};
// }

}} // ::g::Uno
