// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_DICT_NODE__FUSE_DRAWING_TES_21490BEC_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_DICT_NODE__FUSE_DRAWING_TES_21490BEC_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct ActiveRegion; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion;

struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType : ::uClassType
{
};

DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof();

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this);
::app::Fuse::Drawing::Tesselation::ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Key(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this);
DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Next(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this);
DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Prev(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this);
DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__InsertBefore(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key);
DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__New_1(::uStatic* __this);
void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Key(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* value);
void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Next(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value);
void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Prev(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value);
void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__Unlink(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this);

struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::ActiveRegion*> _key;
    ::uStrong< DictNode__Fuse_Drawing_Tesselation_ActiveRegion*> _prev;
    ::uStrong< DictNode__Fuse_Drawing_Tesselation_ActiveRegion*> _Next;

    void _ObjInit() { DictNode__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(this); }
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* Key() { return DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Key(this); }
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Next() { return DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Next(this); }
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Prev() { return DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Prev(this); }
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* InsertBefore(::app::Fuse::Drawing::Tesselation::ActiveRegion* key) { return DictNode__Fuse_Drawing_Tesselation_ActiveRegion__InsertBefore(this, key); }
    void Key(::app::Fuse::Drawing::Tesselation::ActiveRegion* value) { DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Key(this, value); }
    void Next(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value) { DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Next(this, value); }
    void Prev(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value) { DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Prev(this, value); }
    void Unlink() { DictNode__Fuse_Drawing_Tesselation_ActiveRegion__Unlink(this); }
};

}}}}}


#endif
