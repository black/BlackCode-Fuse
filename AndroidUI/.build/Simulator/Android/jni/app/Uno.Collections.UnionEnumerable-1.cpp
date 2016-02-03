#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Collections.UnionEnumerable__float2.h>
#include <app/Uno.Collections.UnionEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.UnionEnumerable__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.UnionEnumerable__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Collections.UnionEnumerator__float2.h>
#include <app/Uno.Collections.UnionEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.UnionEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.UnionEnumerator__Outracks_Simulator_DialogButton.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerable__float2__uType* UnionEnumerable__float2__typeof()
{
    static ::uStaticStrong<UnionEnumerable__float2__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerable__float2__uType*)::uAllocClassType(sizeof(UnionEnumerable__float2__uType), "Uno.Collections.UnionEnumerable<float2>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))UnionEnumerable__float2__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(UnionEnumerable__float2__uType, __interface_0));

    type->SetStrongRefs(
        "_first", offsetof(UnionEnumerable__float2, _first),
        "_second", offsetof(UnionEnumerable__float2, _second));

    return type;
}

void UnionEnumerable__float2___ObjInit(UnionEnumerable__float2* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
}

::uObject* UnionEnumerable__float2__GetEnumerator(UnionEnumerable__float2* __this)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerator__float2__New_1(NULL, ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(__this->_first)), ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(__this->_second)));
}

UnionEnumerable__float2* UnionEnumerable__float2__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerable__float2* inst = (UnionEnumerable__float2*)::uAllocObject(sizeof(UnionEnumerable__float2), UnionEnumerable__float2__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerable__Fuse_Drawing_Contour__uType* UnionEnumerable__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<UnionEnumerable__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerable__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(UnionEnumerable__Fuse_Drawing_Contour__uType), "Uno.Collections.UnionEnumerable<Fuse.Drawing.Contour>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))UnionEnumerable__Fuse_Drawing_Contour__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(UnionEnumerable__Fuse_Drawing_Contour__uType, __interface_0));

    type->SetStrongRefs(
        "_first", offsetof(UnionEnumerable__Fuse_Drawing_Contour, _first),
        "_second", offsetof(UnionEnumerable__Fuse_Drawing_Contour, _second));

    return type;
}

void UnionEnumerable__Fuse_Drawing_Contour___ObjInit(UnionEnumerable__Fuse_Drawing_Contour* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
}

::uObject* UnionEnumerable__Fuse_Drawing_Contour__GetEnumerator(UnionEnumerable__Fuse_Drawing_Contour* __this)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerator__Fuse_Drawing_Contour__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(__this->_first)), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(__this->_second)));
}

UnionEnumerable__Fuse_Drawing_Contour* UnionEnumerable__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerable__Fuse_Drawing_Contour* inst = (UnionEnumerable__Fuse_Drawing_Contour*)::uAllocObject(sizeof(UnionEnumerable__Fuse_Drawing_Contour), UnionEnumerable__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerable__Outracks_Simulator_Bytecode_Statement__uType* UnionEnumerable__Outracks_Simulator_Bytecode_Statement__typeof()
{
    static ::uStaticStrong<UnionEnumerable__Outracks_Simulator_Bytecode_Statement__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerable__Outracks_Simulator_Bytecode_Statement__uType*)::uAllocClassType(sizeof(UnionEnumerable__Outracks_Simulator_Bytecode_Statement__uType), "Uno.Collections.UnionEnumerable<Outracks.Simulator.Bytecode.Statement>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))UnionEnumerable__Outracks_Simulator_Bytecode_Statement__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof(), offsetof(UnionEnumerable__Outracks_Simulator_Bytecode_Statement__uType, __interface_0));

    type->SetStrongRefs(
        "_first", offsetof(UnionEnumerable__Outracks_Simulator_Bytecode_Statement, _first),
        "_second", offsetof(UnionEnumerable__Outracks_Simulator_Bytecode_Statement, _second));

    return type;
}

void UnionEnumerable__Outracks_Simulator_Bytecode_Statement___ObjInit(UnionEnumerable__Outracks_Simulator_Bytecode_Statement* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
}

::uObject* UnionEnumerable__Outracks_Simulator_Bytecode_Statement__GetEnumerator(UnionEnumerable__Outracks_Simulator_Bytecode_Statement* __this)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerator__Outracks_Simulator_Bytecode_Statement__New_1(NULL, ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement::GetEnumerator(::uPtr< ::uObject*>(__this->_first)), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement::GetEnumerator(::uPtr< ::uObject*>(__this->_second)));
}

UnionEnumerable__Outracks_Simulator_Bytecode_Statement* UnionEnumerable__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerable__Outracks_Simulator_Bytecode_Statement* inst = (UnionEnumerable__Outracks_Simulator_Bytecode_Statement*)::uAllocObject(sizeof(UnionEnumerable__Outracks_Simulator_Bytecode_Statement), UnionEnumerable__Outracks_Simulator_Bytecode_Statement__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerable__Outracks_Simulator_DialogButton__uType* UnionEnumerable__Outracks_Simulator_DialogButton__typeof()
{
    static ::uStaticStrong<UnionEnumerable__Outracks_Simulator_DialogButton__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerable__Outracks_Simulator_DialogButton__uType*)::uAllocClassType(sizeof(UnionEnumerable__Outracks_Simulator_DialogButton__uType), "Uno.Collections.UnionEnumerable<Outracks.Simulator.DialogButton>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))UnionEnumerable__Outracks_Simulator_DialogButton__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton__typeof(), offsetof(UnionEnumerable__Outracks_Simulator_DialogButton__uType, __interface_0));

    type->SetStrongRefs(
        "_first", offsetof(UnionEnumerable__Outracks_Simulator_DialogButton, _first),
        "_second", offsetof(UnionEnumerable__Outracks_Simulator_DialogButton, _second));

    return type;
}

void UnionEnumerable__Outracks_Simulator_DialogButton___ObjInit(UnionEnumerable__Outracks_Simulator_DialogButton* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
}

::uObject* UnionEnumerable__Outracks_Simulator_DialogButton__GetEnumerator(UnionEnumerable__Outracks_Simulator_DialogButton* __this)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerator__Outracks_Simulator_DialogButton__New_1(NULL, ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton::GetEnumerator(::uPtr< ::uObject*>(__this->_first)), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton::GetEnumerator(::uPtr< ::uObject*>(__this->_second)));
}

UnionEnumerable__Outracks_Simulator_DialogButton* UnionEnumerable__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerable__Outracks_Simulator_DialogButton* inst = (UnionEnumerable__Outracks_Simulator_DialogButton*)::uAllocObject(sizeof(UnionEnumerable__Outracks_Simulator_DialogButton), UnionEnumerable__Outracks_Simulator_DialogButton__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

}}}
