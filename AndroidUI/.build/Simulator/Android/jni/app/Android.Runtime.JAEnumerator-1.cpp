#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Runtime.JAEnumerator__char.h>
#include <app/Android.Runtime.JAEnumerator__int.h>
#include <app/Android.Runtime.JavaGetter__char.h>
#include <app/Android.Runtime.JavaGetter__int.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace Runtime {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JAEnumerator__char__uType* JAEnumerator__char__typeof()
{
    static ::uStaticStrong<JAEnumerator__char__uType*> type;
    if (type != NULL) return type;

    type = (JAEnumerator__char__uType*)::uAllocClassType(sizeof(JAEnumerator__char__uType), "Android.Runtime.JAEnumerator<char>", false, 3, 2, 0);

    type->__interface_1.__fp_Dispose = (void(*)(void*))JAEnumerator__char__Uno_IDisposable_Dispose;
    type->__interface_0.__fp_get_Current = (::uChar(*)(void*))JAEnumerator__char__get_Current;
    type->__interface_2.__fp_Reset = (void(*)(void*))JAEnumerator__char__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))JAEnumerator__char__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__char__typeof(), offsetof(JAEnumerator__char__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(JAEnumerator__char__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(JAEnumerator__char__uType, __interface_2));

    type->SetStrongRefs(
        "_getter", offsetof(JAEnumerator__char, _getter),
        "_source", offsetof(JAEnumerator__char, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(JAEnumerator__char, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_getter", NULL, offsetof(JAEnumerator__char, _getter), ::app::Android::Runtime::JavaGetter__char__typeof()),
        ::uNewField("_length", NULL, offsetof(JAEnumerator__char, _length), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(JAEnumerator__char, _source), ::app::Android::Base::Wrappers::JWrapper__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Current", JAEnumerator__char__get_Current, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("MoveNext", JAEnumerator__char__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", JAEnumerator__char__New_1, 0, true, JAEnumerator__char__typeof(), ::app::Android::Base::Wrappers::JWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Runtime::JavaGetter__char__typeof()),
        ::uNewFunctionVoid("Reset", JAEnumerator__char__Reset, 0, false),
        ::uNewFunctionVoid("Uno.IDisposable.Dispose", JAEnumerator__char__Uno_IDisposable_Dispose, 0, false));

    ::uRegisterType(type);
    return type;
}

void JAEnumerator__char___ObjInit(JAEnumerator__char* __this, ::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter)
{
    __this->_current = -1;
    __this->_length = length;
    __this->_source = source;
    __this->_getter = getter;
}

::uChar JAEnumerator__char__get_Current(JAEnumerator__char* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uChar, ::uObject*, int>((::uObject*)__this->_source, __this->_current);
}

bool JAEnumerator__char__MoveNext(JAEnumerator__char* __this)
{
    if ((__this->_current + 1) >= __this->_length)
    {
        return false;
    }
    else
    {
        __this->_current = __this->_current + 1;
        return true;
    }
}

JAEnumerator__char* JAEnumerator__char__New_1(::uStatic* __this, ::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter)
{
    JAEnumerator__char* inst = (JAEnumerator__char*)::uAllocObject(sizeof(JAEnumerator__char), JAEnumerator__char__typeof());
    inst->_ObjInit(source, length, getter);
    return inst;
}

void JAEnumerator__char__Reset(JAEnumerator__char* __this)
{
    __this->_current = -1;
}

void JAEnumerator__char__Uno_IDisposable_Dispose(JAEnumerator__char* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JAEnumerator__int__uType* JAEnumerator__int__typeof()
{
    static ::uStaticStrong<JAEnumerator__int__uType*> type;
    if (type != NULL) return type;

    type = (JAEnumerator__int__uType*)::uAllocClassType(sizeof(JAEnumerator__int__uType), "Android.Runtime.JAEnumerator<int>", false, 3, 2, 0);

    type->__interface_1.__fp_Dispose = (void(*)(void*))JAEnumerator__int__Uno_IDisposable_Dispose;
    type->__interface_0.__fp_get_Current = (int(*)(void*))JAEnumerator__int__get_Current;
    type->__interface_2.__fp_Reset = (void(*)(void*))JAEnumerator__int__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))JAEnumerator__int__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(JAEnumerator__int__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(JAEnumerator__int__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(JAEnumerator__int__uType, __interface_2));

    type->SetStrongRefs(
        "_getter", offsetof(JAEnumerator__int, _getter),
        "_source", offsetof(JAEnumerator__int, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(JAEnumerator__int, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_getter", NULL, offsetof(JAEnumerator__int, _getter), ::app::Android::Runtime::JavaGetter__int__typeof()),
        ::uNewField("_length", NULL, offsetof(JAEnumerator__int, _length), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(JAEnumerator__int, _source), ::app::Android::Base::Wrappers::JWrapper__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Current", JAEnumerator__int__get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", JAEnumerator__int__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", JAEnumerator__int__New_1, 0, true, JAEnumerator__int__typeof(), ::app::Android::Base::Wrappers::JWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Runtime::JavaGetter__int__typeof()),
        ::uNewFunctionVoid("Reset", JAEnumerator__int__Reset, 0, false),
        ::uNewFunctionVoid("Uno.IDisposable.Dispose", JAEnumerator__int__Uno_IDisposable_Dispose, 0, false));

    ::uRegisterType(type);
    return type;
}

void JAEnumerator__int___ObjInit(JAEnumerator__int* __this, ::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter)
{
    __this->_current = -1;
    __this->_length = length;
    __this->_source = source;
    __this->_getter = getter;
}

int JAEnumerator__int__get_Current(JAEnumerator__int* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::uObject*, int>((::uObject*)__this->_source, __this->_current);
}

bool JAEnumerator__int__MoveNext(JAEnumerator__int* __this)
{
    if ((__this->_current + 1) >= __this->_length)
    {
        return false;
    }
    else
    {
        __this->_current = __this->_current + 1;
        return true;
    }
}

JAEnumerator__int* JAEnumerator__int__New_1(::uStatic* __this, ::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter)
{
    JAEnumerator__int* inst = (JAEnumerator__int*)::uAllocObject(sizeof(JAEnumerator__int), JAEnumerator__int__typeof());
    inst->_ObjInit(source, length, getter);
    return inst;
}

void JAEnumerator__int__Reset(JAEnumerator__int* __this)
{
    __this->_current = -1;
}

void JAEnumerator__int__Uno_IDisposable_Dispose(JAEnumerator__int* __this)
{
}

}}}
