// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_DICT__FUSE_DRAWING_TESSELA_4A6F6C6D_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_DICT__FUSE_DRAWING_TESSELA_4A6F6C6D_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct ActiveRegion; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct Dict__Fuse_Drawing_Tesselation_ActiveRegion;

struct Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType : ::uClassType
{
    bool(*__fp_Leq)(Dict__Fuse_Drawing_Tesselation_ActiveRegion*, ::app::Fuse::Drawing::Tesselation::ActiveRegion*, ::app::Fuse::Drawing::Tesselation::ActiveRegion*);
};

Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType* Dict__Fuse_Drawing_Tesselation_ActiveRegion__typeof();

void Dict__Fuse_Drawing_Tesselation_ActiveRegion__Finalize(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this);
void Dict__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this);
void Dict__Fuse_Drawing_Tesselation_ActiveRegion__Delete(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node);
::uObject* Dict__Fuse_Drawing_Tesselation_ActiveRegion__get_Items(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this);
::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__get_Max(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this);
::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__get_Min(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this);
::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__Insert(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key);
::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__InsertBefore(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key);
::app::Fuse::Drawing::Tesselation::ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__Key(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node);
::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Dict__Fuse_Drawing_Tesselation_ActiveRegion__Search(Dict__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key);

struct Dict__Fuse_Drawing_Tesselation_ActiveRegion : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*> _head;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion*> _nodes;

    void _ObjInit() { Dict__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(this); }
    void Delete(::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node) { Dict__Fuse_Drawing_Tesselation_ActiveRegion__Delete(this, node); }
    ::uObject* Items() { return Dict__Fuse_Drawing_Tesselation_ActiveRegion__get_Items(this); }
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Max() { return Dict__Fuse_Drawing_Tesselation_ActiveRegion__get_Max(this); }
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Min() { return Dict__Fuse_Drawing_Tesselation_ActiveRegion__get_Min(this); }
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Insert(::app::Fuse::Drawing::Tesselation::ActiveRegion* key) { return Dict__Fuse_Drawing_Tesselation_ActiveRegion__Insert(this, key); }
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* InsertBefore(::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key) { return Dict__Fuse_Drawing_Tesselation_ActiveRegion__InsertBefore(this, node, key); }
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* Key(::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node) { return Dict__Fuse_Drawing_Tesselation_ActiveRegion__Key(this, node); }
    bool Leq(::app::Fuse::Drawing::Tesselation::ActiveRegion* a, ::app::Fuse::Drawing::Tesselation::ActiveRegion* b) { return (((Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType*)this->__obj_type)->__fp_Leq)(this, a, b); }
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Search(::app::Fuse::Drawing::Tesselation::ActiveRegion* key) { return Dict__Fuse_Drawing_Tesselation_ActiveRegion__Search(this, key); }
};

}}}}}


#endif
