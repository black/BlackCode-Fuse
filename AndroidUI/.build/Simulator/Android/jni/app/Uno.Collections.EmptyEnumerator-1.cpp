#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EmptyEnumerator__float2.h>
#include <app/Uno.InvalidOperationException.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EmptyEnumerator__float2__uType* EmptyEnumerator__float2__typeof()
{
    static ::uStaticStrong<EmptyEnumerator__float2__uType*> type;
    if (type != NULL) return type;

    type = (EmptyEnumerator__float2__uType*)::uAllocClassType(sizeof(EmptyEnumerator__float2__uType), "Uno.Collections.EmptyEnumerator<float2>", false, 3, 0, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))EmptyEnumerator__float2__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))EmptyEnumerator__float2__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))EmptyEnumerator__float2__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))EmptyEnumerator__float2__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(EmptyEnumerator__float2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(EmptyEnumerator__float2__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(EmptyEnumerator__float2__uType, __interface_2));

    return type;
}

void EmptyEnumerator__float2___ObjInit(EmptyEnumerator__float2* __this)
{
}

void EmptyEnumerator__float2__Dispose(EmptyEnumerator__float2* __this)
{
}

::app::Uno::Float2 EmptyEnumerator__float2__get_Current(EmptyEnumerator__float2* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool EmptyEnumerator__float2__MoveNext(EmptyEnumerator__float2* __this)
{
    return false;
}

EmptyEnumerator__float2* EmptyEnumerator__float2__New_1(::uStatic* __this)
{
    EmptyEnumerator__float2* inst = (EmptyEnumerator__float2*)::uAllocObject(sizeof(EmptyEnumerator__float2), EmptyEnumerator__float2__typeof());
    inst->_ObjInit();
    return inst;
}

void EmptyEnumerator__float2__Reset(EmptyEnumerator__float2* __this)
{
}

}}}
