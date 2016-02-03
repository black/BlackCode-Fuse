// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_LINE_JOIN_IMPL_H__
#define __APP_FUSE_DRAWING_LINE_JOIN_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct LineJoinImpl;

struct LineJoinImpl__uType : ::uClassType
{
    void(*__fp_Create)(LineJoinImpl*, ::app::Uno::Float2, ::app::Uno::Float2, ::app::Uno::Float2, ::app::Uno::Float2, ::uObject*, ::uObject*);
};

LineJoinImpl__uType* LineJoinImpl__typeof();

void LineJoinImpl___ObjInit(LineJoinImpl* __this);
LineJoinImpl* LineJoinImpl__Create_1(::uStatic* __this, int lineJoin);

struct LineJoinImpl : ::uObject
{
    void _ObjInit() { LineJoinImpl___ObjInit(this); }
    void Create(::app::Uno::Float2 leftInner, ::app::Uno::Float2 leftOuter, ::app::Uno::Float2 rightInner, ::app::Uno::Float2 rightOuter, ::uObject* outer, ::uObject* inner);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void LineJoinImpl::Create(::app::Uno::Float2 leftInner, ::app::Uno::Float2 leftOuter, ::app::Uno::Float2 rightInner, ::app::Uno::Float2 rightOuter, ::uObject* outer, ::uObject* inner) { (((LineJoinImpl__uType*)this->__obj_type)->__fp_Create)(this, leftInner, leftOuter, rightInner, rightOuter, outer, inner); }

}}}


#endif
