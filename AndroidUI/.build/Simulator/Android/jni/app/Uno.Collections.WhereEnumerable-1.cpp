#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.WhereEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.WhereEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType* WhereEnumerable__Fuse_Drawing_Tesselation_Face__typeof()
{
    static ::uStaticStrong<WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType*> type;
    if (type != NULL) return type;

    type = (WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType*)::uAllocClassType(sizeof(WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType), "Uno.Collections.WhereEnumerable<Fuse.Drawing.Tesselation.Face>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))WhereEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof(), offsetof(WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType, __interface_0));

    type->SetStrongRefs(
        "_predicate", offsetof(WhereEnumerable__Fuse_Drawing_Tesselation_Face, _predicate),
        "_source", offsetof(WhereEnumerable__Fuse_Drawing_Tesselation_Face, _source));

    return type;
}

void WhereEnumerable__Fuse_Drawing_Tesselation_Face___ObjInit(WhereEnumerable__Fuse_Drawing_Tesselation_Face* __this, ::uObject* source, ::uDelegate* predicate)
{
    __this->_source = source;
    __this->_predicate = predicate;
}

::uObject* WhereEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator(WhereEnumerable__Fuse_Drawing_Tesselation_Face* __this)
{
    return (::uObject*)::app::Uno::Collections::WhereEnumerator__Fuse_Drawing_Tesselation_Face__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_predicate);
}

WhereEnumerable__Fuse_Drawing_Tesselation_Face* WhereEnumerable__Fuse_Drawing_Tesselation_Face__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* predicate)
{
    WhereEnumerable__Fuse_Drawing_Tesselation_Face* inst = (WhereEnumerable__Fuse_Drawing_Tesselation_Face*)::uAllocObject(sizeof(WhereEnumerable__Fuse_Drawing_Tesselation_Face), WhereEnumerable__Fuse_Drawing_Tesselation_Face__typeof());
    inst->_ObjInit(source, predicate);
    return inst;
}

}}}
