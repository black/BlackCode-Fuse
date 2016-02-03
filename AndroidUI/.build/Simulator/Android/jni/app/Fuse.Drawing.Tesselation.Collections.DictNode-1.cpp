#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-21490bec.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof()
{
    static ::uStaticStrong<DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType*> type;
    if (type != NULL) return type;

    type = (DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType*)::uAllocClassType(sizeof(DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType), "Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion>", false, 0, 3, 0);

    type->SetStrongRefs(
        "_key", offsetof(DictNode__Fuse_Drawing_Tesselation_ActiveRegion, _key),
        "_Next", offsetof(DictNode__Fuse_Drawing_Tesselation_ActiveRegion, _Next),
        "_prev", offsetof(DictNode__Fuse_Drawing_Tesselation_ActiveRegion, _prev));

    return type;
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    __this->Key(NULL);
    __this->Next(__this);
    __this->Prev(__this);
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Key(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return __this->_key;
}

DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Next(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return __this->_Next;
}

DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Prev(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return __this->_prev;
}

DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__InsertBefore(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key)
{
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* collection_123;
    collection_123 = DictNode__Fuse_Drawing_Tesselation_ActiveRegion__New_1(NULL);
    ::uPtr< DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(collection_123)->Key(key);
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* newNode = collection_123;
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node = __this;
    newNode->Next(node->Next());
    ::uPtr< DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node->Next())->Prev(newNode);
    newNode->Prev(node);
    node->Next(newNode);
    return newNode;
}

DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__New_1(::uStatic* __this)
{
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* inst = (DictNode__Fuse_Drawing_Tesselation_ActiveRegion*)::uAllocObject(sizeof(DictNode__Fuse_Drawing_Tesselation_ActiveRegion), DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof());
    inst->_ObjInit();
    return inst;
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Key(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* value)
{
    __this->_key = value;
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Next(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value)
{
    __this->_Next = value;
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Prev(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value)
{
    __this->_prev = value;
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__Unlink(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    ::uPtr< DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->Prev())->Next(__this->Next());
    ::uPtr< DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->Next())->Prev(__this->Prev());
    __this->Next(NULL);
    __this->Prev(NULL);
}

}}}}}
