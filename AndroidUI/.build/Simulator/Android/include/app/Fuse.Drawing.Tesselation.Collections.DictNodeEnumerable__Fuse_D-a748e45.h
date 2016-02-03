// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_DICT_NODE_ENUMERABLE__FUSE_D_A748E45_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_DICT_NODE_ENUMERABLE__FUSE_D_A748E45_H__

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-ec31cc7e.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Collectio-6454955f.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion; } } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion;

struct DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__uType : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___uType
{
};

DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__uType* DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__typeof();

void DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit_1(DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* head);
::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__GetNext(DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* current);
DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion* DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* head);

struct DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*> _head;

    void _ObjInit_1(::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* head) { DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit_1(this, head); }
};

}}}}}


#endif
