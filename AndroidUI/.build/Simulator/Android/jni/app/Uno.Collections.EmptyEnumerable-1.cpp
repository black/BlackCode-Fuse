#include <app/Uno.Collections.EmptyEnumerable__float2.h>
#include <app/Uno.Collections.EmptyEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__float2.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EmptyEnumerable__float2__uType* EmptyEnumerable__float2__typeof()
{
    static ::uStaticStrong<EmptyEnumerable__float2__uType*> type;
    if (type != NULL) return type;

    type = (EmptyEnumerable__float2__uType*)::uAllocClassType(sizeof(EmptyEnumerable__float2__uType), "Uno.Collections.EmptyEnumerable<float2>", false, 1, 0, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))EmptyEnumerable__float2__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(EmptyEnumerable__float2__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", EmptyEnumerable__float2__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__float2__typeof()),
        ::uNewFunction(".ctor", EmptyEnumerable__float2__New_1, 0, true, EmptyEnumerable__float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void EmptyEnumerable__float2___ObjInit(EmptyEnumerable__float2* __this)
{
}

::uObject* EmptyEnumerable__float2__GetEnumerator(EmptyEnumerable__float2* __this)
{
    return (::uObject*)::app::Uno::Collections::EmptyEnumerator__float2__New_1(NULL);
}

EmptyEnumerable__float2* EmptyEnumerable__float2__New_1(::uStatic* __this)
{
    EmptyEnumerable__float2* inst = (EmptyEnumerable__float2*)::uAllocObject(sizeof(EmptyEnumerable__float2), EmptyEnumerable__float2__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
