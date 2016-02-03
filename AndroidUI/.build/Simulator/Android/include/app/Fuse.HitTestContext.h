// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_HIT_TEST_CONTEXT_H__
#define __APP_FUSE_HIT_TEST_CONTEXT_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct HitTestContext;

struct HitTestContext__uType : ::uClassType
{
};

HitTestContext__uType* HitTestContext__typeof();

void HitTestContext___ObjInit(HitTestContext* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback);
void HitTestContext__Dispose(HitTestContext* __this);
::uDelegate* HitTestContext__get_Callback(HitTestContext* __this);
::app::Uno::Float2 HitTestContext__get_LocalPoint(HitTestContext* __this);
::app::Uno::Float2 HitTestContext__get_WindowPoint(HitTestContext* __this);
::app::Uno::Geometry::Ray HitTestContext__get_WorldRay(HitTestContext* __this);
void HitTestContext__Hit(HitTestContext* __this, ::app::Fuse::Node* obj);
void HitTestContext__Hit_1(HitTestContext* __this, ::app::Fuse::Node* obj, float hitDistance);
HitTestContext* HitTestContext__New_1(::uStatic* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback);
void HitTestContext__PopLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp);
void HitTestContext__PopWorldRay(HitTestContext* __this, ::app::Uno::Geometry::Ray o);
::app::Uno::Float2 HitTestContext__PushLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp);
::app::Uno::Geometry::Ray HitTestContext__PushWorldRay(HitTestContext* __this, ::app::Uno::Geometry::Ray n);
void HitTestContext__set_WindowPoint(HitTestContext* __this, ::app::Uno::Float2 value);

struct HitTestContext : ::uObject
{
    ::app::Uno::Float2 _localPoint;
    ::app::Uno::Geometry::Ray _worldRay;
    ::uStrong< ::uDelegate*> _callback;
    ::app::Uno::Float2 _WindowPoint;

    void _ObjInit(::app::Uno::Float2 windowPoint, ::uDelegate* callback) { HitTestContext___ObjInit(this, windowPoint, callback); }
    void Dispose() { HitTestContext__Dispose(this); }
    ::uDelegate* Callback() { return HitTestContext__get_Callback(this); }
    ::app::Uno::Float2 LocalPoint() { return HitTestContext__get_LocalPoint(this); }
    ::app::Uno::Float2 WindowPoint() { return HitTestContext__get_WindowPoint(this); }
    ::app::Uno::Geometry::Ray WorldRay() { return HitTestContext__get_WorldRay(this); }
    void Hit(::app::Fuse::Node* obj) { HitTestContext__Hit(this, obj); }
    void Hit_1(::app::Fuse::Node* obj, float hitDistance) { HitTestContext__Hit_1(this, obj, hitDistance); }
    void PopLocalPoint(::app::Uno::Float2 lp) { HitTestContext__PopLocalPoint(this, lp); }
    void PopWorldRay(::app::Uno::Geometry::Ray o) { HitTestContext__PopWorldRay(this, o); }
    ::app::Uno::Float2 PushLocalPoint(::app::Uno::Float2 lp) { return HitTestContext__PushLocalPoint(this, lp); }
    ::app::Uno::Geometry::Ray PushWorldRay(::app::Uno::Geometry::Ray n) { return HitTestContext__PushWorldRay(this, n); }
    void WindowPoint(::app::Uno::Float2 value) { HitTestContext__set_WindowPoint(this, value); }
};

}}


#endif
