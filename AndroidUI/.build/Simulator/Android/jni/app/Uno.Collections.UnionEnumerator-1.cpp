#include <app/Fuse.Drawing.Contour.h>
#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <app/Outracks.Simulator.DialogButton.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.UnionEnumerator__float2.h>
#include <app/Uno.Collections.UnionEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.UnionEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.UnionEnumerator__Outracks_Simulator_DialogButton.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerator__float2__uType* UnionEnumerator__float2__typeof()
{
    static ::uStaticStrong<UnionEnumerator__float2__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerator__float2__uType*)::uAllocClassType(sizeof(UnionEnumerator__float2__uType), "Uno.Collections.UnionEnumerator<float2>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))UnionEnumerator__float2__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))UnionEnumerator__float2__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))UnionEnumerator__float2__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))UnionEnumerator__float2__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(UnionEnumerator__float2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(UnionEnumerator__float2__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(UnionEnumerator__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(UnionEnumerator__float2, _current),
        "_first", offsetof(UnionEnumerator__float2, _first),
        "_second", offsetof(UnionEnumerator__float2, _second));

    return type;
}

void UnionEnumerator__float2___ObjInit(UnionEnumerator__float2* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
    __this->_current = __this->_first;
}

void UnionEnumerator__float2__Dispose(UnionEnumerator__float2* __this)
{
}

::app::Uno::Float2 UnionEnumerator__float2__get_Current(UnionEnumerator__float2* __this)
{
    return ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_current));
}

bool UnionEnumerator__float2__MoveNext(UnionEnumerator__float2* __this)
{
    if (::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_current)))
    {
        return true;
    }

    if (__this->_current == __this->_first)
    {
        __this->_current = __this->_second;
        return __this->MoveNext();
    }

    return false;
}

UnionEnumerator__float2* UnionEnumerator__float2__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerator__float2* inst = (UnionEnumerator__float2*)::uAllocObject(sizeof(UnionEnumerator__float2), UnionEnumerator__float2__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

void UnionEnumerator__float2__Reset(UnionEnumerator__float2* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_first));
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_second));
    __this->_current = __this->_first;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerator__Fuse_Drawing_Contour__uType* UnionEnumerator__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<UnionEnumerator__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerator__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(UnionEnumerator__Fuse_Drawing_Contour__uType), "Uno.Collections.UnionEnumerator<Fuse.Drawing.Contour>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))UnionEnumerator__Fuse_Drawing_Contour__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))UnionEnumerator__Fuse_Drawing_Contour__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))UnionEnumerator__Fuse_Drawing_Contour__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))UnionEnumerator__Fuse_Drawing_Contour__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(UnionEnumerator__Fuse_Drawing_Contour__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(UnionEnumerator__Fuse_Drawing_Contour__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(UnionEnumerator__Fuse_Drawing_Contour__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(UnionEnumerator__Fuse_Drawing_Contour, _current),
        "_first", offsetof(UnionEnumerator__Fuse_Drawing_Contour, _first),
        "_second", offsetof(UnionEnumerator__Fuse_Drawing_Contour, _second));

    return type;
}

void UnionEnumerator__Fuse_Drawing_Contour___ObjInit(UnionEnumerator__Fuse_Drawing_Contour* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
    __this->_current = __this->_first;
}

void UnionEnumerator__Fuse_Drawing_Contour__Dispose(UnionEnumerator__Fuse_Drawing_Contour* __this)
{
}

::app::Fuse::Drawing::Contour* UnionEnumerator__Fuse_Drawing_Contour__get_Current(UnionEnumerator__Fuse_Drawing_Contour* __this)
{
    return ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(__this->_current));
}

bool UnionEnumerator__Fuse_Drawing_Contour__MoveNext(UnionEnumerator__Fuse_Drawing_Contour* __this)
{
    if (::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_current)))
    {
        return true;
    }

    if (__this->_current == __this->_first)
    {
        __this->_current = __this->_second;
        return __this->MoveNext();
    }

    return false;
}

UnionEnumerator__Fuse_Drawing_Contour* UnionEnumerator__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerator__Fuse_Drawing_Contour* inst = (UnionEnumerator__Fuse_Drawing_Contour*)::uAllocObject(sizeof(UnionEnumerator__Fuse_Drawing_Contour), UnionEnumerator__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

void UnionEnumerator__Fuse_Drawing_Contour__Reset(UnionEnumerator__Fuse_Drawing_Contour* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_first));
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_second));
    __this->_current = __this->_first;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerator__Outracks_Simulator_Bytecode_Statement__uType* UnionEnumerator__Outracks_Simulator_Bytecode_Statement__typeof()
{
    static ::uStaticStrong<UnionEnumerator__Outracks_Simulator_Bytecode_Statement__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerator__Outracks_Simulator_Bytecode_Statement__uType*)::uAllocClassType(sizeof(UnionEnumerator__Outracks_Simulator_Bytecode_Statement__uType), "Uno.Collections.UnionEnumerator<Outracks.Simulator.Bytecode.Statement>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Bytecode::Statement*(*)(void*))UnionEnumerator__Outracks_Simulator_Bytecode_Statement__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))UnionEnumerator__Outracks_Simulator_Bytecode_Statement__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))UnionEnumerator__Outracks_Simulator_Bytecode_Statement__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))UnionEnumerator__Outracks_Simulator_Bytecode_Statement__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement__typeof(), offsetof(UnionEnumerator__Outracks_Simulator_Bytecode_Statement__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(UnionEnumerator__Outracks_Simulator_Bytecode_Statement__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(UnionEnumerator__Outracks_Simulator_Bytecode_Statement__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(UnionEnumerator__Outracks_Simulator_Bytecode_Statement, _current),
        "_first", offsetof(UnionEnumerator__Outracks_Simulator_Bytecode_Statement, _first),
        "_second", offsetof(UnionEnumerator__Outracks_Simulator_Bytecode_Statement, _second));

    return type;
}

void UnionEnumerator__Outracks_Simulator_Bytecode_Statement___ObjInit(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
    __this->_current = __this->_first;
}

void UnionEnumerator__Outracks_Simulator_Bytecode_Statement__Dispose(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this)
{
}

::app::Outracks::Simulator::Bytecode::Statement* UnionEnumerator__Outracks_Simulator_Bytecode_Statement__get_Current(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this)
{
    return ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement::Current(::uPtr< ::uObject*>(__this->_current));
}

bool UnionEnumerator__Outracks_Simulator_Bytecode_Statement__MoveNext(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this)
{
    if (::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_current)))
    {
        return true;
    }

    if (__this->_current == __this->_first)
    {
        __this->_current = __this->_second;
        return __this->MoveNext();
    }

    return false;
}

UnionEnumerator__Outracks_Simulator_Bytecode_Statement* UnionEnumerator__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerator__Outracks_Simulator_Bytecode_Statement* inst = (UnionEnumerator__Outracks_Simulator_Bytecode_Statement*)::uAllocObject(sizeof(UnionEnumerator__Outracks_Simulator_Bytecode_Statement), UnionEnumerator__Outracks_Simulator_Bytecode_Statement__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

void UnionEnumerator__Outracks_Simulator_Bytecode_Statement__Reset(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_first));
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_second));
    __this->_current = __this->_first;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerator__Outracks_Simulator_DialogButton__uType* UnionEnumerator__Outracks_Simulator_DialogButton__typeof()
{
    static ::uStaticStrong<UnionEnumerator__Outracks_Simulator_DialogButton__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerator__Outracks_Simulator_DialogButton__uType*)::uAllocClassType(sizeof(UnionEnumerator__Outracks_Simulator_DialogButton__uType), "Uno.Collections.UnionEnumerator<Outracks.Simulator.DialogButton>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::DialogButton*(*)(void*))UnionEnumerator__Outracks_Simulator_DialogButton__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))UnionEnumerator__Outracks_Simulator_DialogButton__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))UnionEnumerator__Outracks_Simulator_DialogButton__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))UnionEnumerator__Outracks_Simulator_DialogButton__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_DialogButton__typeof(), offsetof(UnionEnumerator__Outracks_Simulator_DialogButton__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(UnionEnumerator__Outracks_Simulator_DialogButton__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(UnionEnumerator__Outracks_Simulator_DialogButton__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(UnionEnumerator__Outracks_Simulator_DialogButton, _current),
        "_first", offsetof(UnionEnumerator__Outracks_Simulator_DialogButton, _first),
        "_second", offsetof(UnionEnumerator__Outracks_Simulator_DialogButton, _second));

    return type;
}

void UnionEnumerator__Outracks_Simulator_DialogButton___ObjInit(UnionEnumerator__Outracks_Simulator_DialogButton* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
    __this->_current = __this->_first;
}

void UnionEnumerator__Outracks_Simulator_DialogButton__Dispose(UnionEnumerator__Outracks_Simulator_DialogButton* __this)
{
}

::app::Outracks::Simulator::DialogButton* UnionEnumerator__Outracks_Simulator_DialogButton__get_Current(UnionEnumerator__Outracks_Simulator_DialogButton* __this)
{
    return ::app::Uno::Collections::IEnumerator__Outracks_Simulator_DialogButton::Current(::uPtr< ::uObject*>(__this->_current));
}

bool UnionEnumerator__Outracks_Simulator_DialogButton__MoveNext(UnionEnumerator__Outracks_Simulator_DialogButton* __this)
{
    if (::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_current)))
    {
        return true;
    }

    if (__this->_current == __this->_first)
    {
        __this->_current = __this->_second;
        return __this->MoveNext();
    }

    return false;
}

UnionEnumerator__Outracks_Simulator_DialogButton* UnionEnumerator__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerator__Outracks_Simulator_DialogButton* inst = (UnionEnumerator__Outracks_Simulator_DialogButton*)::uAllocObject(sizeof(UnionEnumerator__Outracks_Simulator_DialogButton), UnionEnumerator__Outracks_Simulator_DialogButton__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

void UnionEnumerator__Outracks_Simulator_DialogButton__Reset(UnionEnumerator__Outracks_Simulator_DialogButton* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_first));
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_second));
    __this->_current = __this->_first;
}

}}}
