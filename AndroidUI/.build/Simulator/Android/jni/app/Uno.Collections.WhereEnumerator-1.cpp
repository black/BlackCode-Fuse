#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.WhereEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType* WhereEnumerator__Fuse_Drawing_Tesselation_Face__typeof()
{
    static ::uStaticStrong<WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType*> type;
    if (type != NULL) return type;

    type = (WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType*)::uAllocClassType(sizeof(WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType), "Uno.Collections.WhereEnumerator<Fuse.Drawing.Tesselation.Face>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Tesselation::Face*(*)(void*))WhereEnumerator__Fuse_Drawing_Tesselation_Face__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))WhereEnumerator__Fuse_Drawing_Tesselation_Face__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))WhereEnumerator__Fuse_Drawing_Tesselation_Face__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))WhereEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face__typeof(), offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face, _current),
        "_predicate", offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face, _predicate),
        "_source", offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face, _source));

    return type;
}

void WhereEnumerator__Fuse_Drawing_Tesselation_Face___ObjInit(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this, ::uObject* source, ::uDelegate* predicate)
{
    __this->_source = source;
    __this->_predicate = predicate;
}

void WhereEnumerator__Fuse_Drawing_Tesselation_Face__Dispose(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
}

::app::Fuse::Drawing::Tesselation::Face* WhereEnumerator__Fuse_Drawing_Tesselation_Face__get_Current(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
    return __this->_current;
}

bool WhereEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
    while (true)
    {
        if (!::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source)))
        {
            return false;
        }

        if (::uPtr< ::uDelegate*>(__this->_predicate)->Invoke< bool, ::app::Fuse::Drawing::Tesselation::Face*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(__this->_source))))
        {
            __this->_current = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(__this->_source));
            return true;
        }
    }

    return false;
}

WhereEnumerator__Fuse_Drawing_Tesselation_Face* WhereEnumerator__Fuse_Drawing_Tesselation_Face__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* predicate)
{
    WhereEnumerator__Fuse_Drawing_Tesselation_Face* inst = (WhereEnumerator__Fuse_Drawing_Tesselation_Face*)::uAllocObject(sizeof(WhereEnumerator__Fuse_Drawing_Tesselation_Face), WhereEnumerator__Fuse_Drawing_Tesselation_Face__typeof());
    inst->_ObjInit(source, predicate);
    return inst;
}

void WhereEnumerator__Fuse_Drawing_Tesselation_Face__Reset(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
    ::app::Uno::Collections::IEnumerator::Reset(::uPtr< ::uObject*>(__this->_source));
}

}}}
