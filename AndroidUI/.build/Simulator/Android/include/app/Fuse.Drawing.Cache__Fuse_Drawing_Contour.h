// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_CACHE__FUSE_DRAWING_CONTOUR_H__
#define __APP_FUSE_DRAWING_CACHE__FUSE_DRAWING_CONTOUR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Cache__Fuse_Drawing_Contour;

struct Cache__Fuse_Drawing_Contour__uType : ::uClassType
{
};

Cache__Fuse_Drawing_Contour__uType* Cache__Fuse_Drawing_Contour__typeof();

void Cache__Fuse_Drawing_Contour___ObjInit(Cache__Fuse_Drawing_Contour* __this, ::uArray* immutableItems);
void Cache__Fuse_Drawing_Contour___ObjInit_1(Cache__Fuse_Drawing_Contour* __this, ::uObject* source);
void Cache__Fuse_Drawing_Contour__Evaluate(Cache__Fuse_Drawing_Contour* __this);
::app::Fuse::Drawing::Contour* Cache__Fuse_Drawing_Contour__get_Item(Cache__Fuse_Drawing_Contour* __this, int index);
::uObject* Cache__Fuse_Drawing_Contour__get_Items(Cache__Fuse_Drawing_Contour* __this);
int Cache__Fuse_Drawing_Contour__get_Length(Cache__Fuse_Drawing_Contour* __this);
Cache__Fuse_Drawing_Contour* Cache__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uArray* immutableItems);
Cache__Fuse_Drawing_Contour* Cache__Fuse_Drawing_Contour__New_2(::uStatic* __this, ::uObject* source);

struct Cache__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uArray*> _cache;

    void _ObjInit(::uArray* immutableItems) { Cache__Fuse_Drawing_Contour___ObjInit(this, immutableItems); }
    void _ObjInit_1(::uObject* source) { Cache__Fuse_Drawing_Contour___ObjInit_1(this, source); }
    void Evaluate() { Cache__Fuse_Drawing_Contour__Evaluate(this); }
    ::app::Fuse::Drawing::Contour* Item(int index) { return Cache__Fuse_Drawing_Contour__get_Item(this, index); }
    ::uObject* Items() { return Cache__Fuse_Drawing_Contour__get_Items(this); }
    int Length() { return Cache__Fuse_Drawing_Contour__get_Length(this); }
};

}}}


#endif
