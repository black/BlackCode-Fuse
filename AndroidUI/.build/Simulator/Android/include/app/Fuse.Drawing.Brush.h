// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Brush;

struct Brush__uType : ::uClassType
{
    bool(*__fp_get_IsCompletelyTransparent)(Brush*);
    void(*__fp_OnPinned)(Brush*);
    void(*__fp_OnPrepare)(Brush*, ::app::Fuse::DrawContext*, ::app::Uno::Float2);
    void(*__fp_OnUnpinned)(Brush*);
};

Brush__uType* Brush__typeof();

void Brush___ObjInit(Brush* __this);
bool Brush__get_IsCompletelyTransparent(Brush* __this);
bool Brush__get_IsPinned(Brush* __this);
void Brush__OnPinned(Brush* __this);
void Brush__OnPrepare(Brush* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
void Brush__OnUnpinned(Brush* __this);
void Brush__Pin(Brush* __this);
void Brush__Prepare(Brush* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
void Brush__Unpin(Brush* __this);

struct Brush : ::uObject
{
    int _pinCount;

    void _ObjInit() { Brush___ObjInit(this); }
    bool IsCompletelyTransparent() { return (((Brush__uType*)this->__obj_type)->__fp_get_IsCompletelyTransparent)(this); }
    bool IsPinned() { return Brush__get_IsPinned(this); }
    void OnPinned() { (((Brush__uType*)this->__obj_type)->__fp_OnPinned)(this); }
    void OnPrepare(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
    void OnUnpinned() { (((Brush__uType*)this->__obj_type)->__fp_OnUnpinned)(this); }
    void Pin() { Brush__Pin(this); }
    void Prepare(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
    void Unpin() { Brush__Unpin(this); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void Brush::OnPrepare(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize) { (((Brush__uType*)this->__obj_type)->__fp_OnPrepare)(this, dc, canvasSize); }
inline void Brush::Prepare(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize) { Brush__Prepare(this, dc, canvasSize); }

}}}


#endif
