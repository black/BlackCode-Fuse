// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__UNO_NET_I_P_END_POINT_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__UNO_NET_I_P_END_POINT_H__

#include <app/Uno.Collections.IEnumerable__Uno_Net_IPEndPoint.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Uno_Net_IPEndPoint;

struct ArrayEnumerable__Uno_Net_IPEndPoint__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Net_IPEndPoint __interface_0;
};

ArrayEnumerable__Uno_Net_IPEndPoint__uType* ArrayEnumerable__Uno_Net_IPEndPoint__typeof();

void ArrayEnumerable__Uno_Net_IPEndPoint___ObjInit(ArrayEnumerable__Uno_Net_IPEndPoint* __this, ::uArray* source);
::uObject* ArrayEnumerable__Uno_Net_IPEndPoint__GetEnumerator(ArrayEnumerable__Uno_Net_IPEndPoint* __this);
ArrayEnumerable__Uno_Net_IPEndPoint* ArrayEnumerable__Uno_Net_IPEndPoint__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Uno_Net_IPEndPoint : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Uno_Net_IPEndPoint___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Uno_Net_IPEndPoint__GetEnumerator(this); }
};

}}}}}


#endif
