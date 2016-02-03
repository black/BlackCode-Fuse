#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Collections.Dict__Fuse_Drawing_Tessela-4a6f6c6d.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-21490bec.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable__Fuse_D-a748e45.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_ActiveRegion.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Collectio-6454955f.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Dr-dd3c2057.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType* Dict__Fuse_Drawing_Tesselation_ActiveRegion__typeof()
{
    static ::uStaticStrong<Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType*> type;
    if (type != NULL) return type;

    type = (Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType*)::uAllocClassType(sizeof(Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType), "Fuse.Drawing.Tesselation.Collections.Dict<Fuse.Drawing.Tesselation.ActiveRegion>", false, 0, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))Dict__Fuse_Drawing_Tesselation_ActiveRegion__Finalize;

    type->SetStrongRefs(
        "_head", offsetof(Dict__Fuse_Drawing_Tesselation_ActiveRegion, _head),
        "_nodes", offsetof(Dict__Fuse_Drawing_Tesselation_ActiveRegion, _nodes));

    return type;
}

void Dict__Fuse_Drawing_Tesselation_ActiveRegion__Finalize(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->_head)->Unlink();
    __this->_head = NULL;
}

void Dict__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    __this->_head = ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion__New_1(NULL);
    __this->_nodes = ::app::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__New_1(NULL, __this->_head);
}

void Dict__Fuse_Drawing_Tesselation_ActiveRegion__Delete(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node)->Unlink();
}

::uObject* Dict__Fuse_Drawing_Tesselation_ActiveRegion__get_Items(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion(NULL, (::uObject*)__this->_nodes, ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__typeof(), (const void*)Dict__Fuse_Drawing_Tesselation_ActiveRegion__Key, __this));
}

::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__get_Max(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->_head)->Prev();
}

::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__get_Min(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->_head)->Next();
}

::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__Insert(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key)
{
    return __this->InsertBefore(__this->_head, key);
}

::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__InsertBefore(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key)
{
    do
    {
        node = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node)->Prev();
    }
    while (((::uObject*)::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node)->Key() != NULL) && !__this->Leq(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node)->Key(), key));

    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node)->InsertBefore(key);
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__Key(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node)->Key();
}

::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__Search(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key)
{
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node = __this->_head;

    do
    {
        node = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node)->Next();
    }
    while (((::uObject*)::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node)->Key() != NULL) && !__this->Leq(key, ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node)->Key()));

    return node;
}

}}}}}
