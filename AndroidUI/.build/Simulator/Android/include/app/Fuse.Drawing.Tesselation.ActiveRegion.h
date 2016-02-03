// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_ACTIVE_REGION_H__
#define __APP_FUSE_DRAWING_TESSELATION_ACTIVE_REGION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Mesh; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct ActiveRegion;

struct ActiveRegion__uType : ::uClassType
{
};

ActiveRegion__uType* ActiveRegion__typeof();

void ActiveRegion___ObjInit(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel);
void ActiveRegion__FixUpperEdge(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* newEdge);
ActiveRegion* ActiveRegion__get_Above(ActiveRegion* __this);
ActiveRegion* ActiveRegion__get_Below(ActiveRegion* __this);
bool ActiveRegion__get_fixUpperEdge(ActiveRegion* __this);
bool ActiveRegion__get_IsDirty(ActiveRegion* __this);
bool ActiveRegion__get_IsInside(ActiveRegion* __this);
bool ActiveRegion__get_Sentinel(ActiveRegion* __this);
ActiveRegion* ActiveRegion__get_TopLeft(ActiveRegion* __this);
ActiveRegion* ActiveRegion__get_TopRight(ActiveRegion* __this);
::app::Fuse::Drawing::Tesselation::HalfEdge* ActiveRegion__get_UpperEdge(ActiveRegion* __this);
::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* ActiveRegion__get_UpperEdgeDictNode(ActiveRegion* __this);
int ActiveRegion__get_WindingNumber(ActiveRegion* __this);
ActiveRegion* ActiveRegion__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel);
void ActiveRegion__set_fixUpperEdge(ActiveRegion* __this, bool value);
void ActiveRegion__set_IsDirty(ActiveRegion* __this, bool value);
void ActiveRegion__set_IsInside(ActiveRegion* __this, bool value);
void ActiveRegion__set_Sentinel(ActiveRegion* __this, bool value);
void ActiveRegion__set_UpperEdge(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value);
void ActiveRegion__set_UpperEdgeDictNode(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value);
void ActiveRegion__set_WindingNumber(ActiveRegion* __this, int value);
::uString* ActiveRegion__ToString(ActiveRegion* __this);

struct ActiveRegion : ::uObject
{
    ::uWeak< ::app::Fuse::Drawing::Tesselation::Mesh*> _mesh;
    ::uWeak< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _upperEdge;
    ::uWeak< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*> _upperEdgeDictNode;
    bool _Sentinel;
    int _WindingNumber;
    bool _IsInside;
    bool _IsDirty;
    bool _fixUpperEdge;

    void _ObjInit(::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel) { ActiveRegion___ObjInit(this, mesh, upperEdge, sentinel); }
    void FixUpperEdge(::app::Fuse::Drawing::Tesselation::HalfEdge* newEdge) { ActiveRegion__FixUpperEdge(this, newEdge); }
    ActiveRegion* Above() { return ActiveRegion__get_Above(this); }
    ActiveRegion* Below() { return ActiveRegion__get_Below(this); }
    bool fixUpperEdge() { return ActiveRegion__get_fixUpperEdge(this); }
    bool IsDirty() { return ActiveRegion__get_IsDirty(this); }
    bool IsInside() { return ActiveRegion__get_IsInside(this); }
    bool Sentinel() { return ActiveRegion__get_Sentinel(this); }
    ActiveRegion* TopLeft() { return ActiveRegion__get_TopLeft(this); }
    ActiveRegion* TopRight() { return ActiveRegion__get_TopRight(this); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* UpperEdge() { return ActiveRegion__get_UpperEdge(this); }
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* UpperEdgeDictNode() { return ActiveRegion__get_UpperEdgeDictNode(this); }
    int WindingNumber() { return ActiveRegion__get_WindingNumber(this); }
    void fixUpperEdge(bool value) { ActiveRegion__set_fixUpperEdge(this, value); }
    void IsDirty(bool value) { ActiveRegion__set_IsDirty(this, value); }
    void IsInside(bool value) { ActiveRegion__set_IsInside(this, value); }
    void Sentinel(bool value) { ActiveRegion__set_Sentinel(this, value); }
    void UpperEdge(::app::Fuse::Drawing::Tesselation::HalfEdge* value) { ActiveRegion__set_UpperEdge(this, value); }
    void UpperEdgeDictNode(::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value) { ActiveRegion__set_UpperEdgeDictNode(this, value); }
    void WindingNumber(int value) { ActiveRegion__set_WindingNumber(this, value); }
};

}}}}


#endif
