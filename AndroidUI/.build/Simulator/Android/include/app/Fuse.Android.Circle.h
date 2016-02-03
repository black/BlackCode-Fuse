// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_CIRCLE_H__
#define __APP_FUSE_ANDROID_CIRCLE_H__

#include <app/Fuse.Android.Shape__Fuse_Controls_Circle.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct ShapeDrawable; } } } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Android {

struct Circle;

struct Circle__uType : ::app::Fuse::Android::Shape__Fuse_Controls_Circle__uType
{
};

Circle__uType* Circle__typeof();

void Circle___ObjInit_4(Circle* __this);
::app::Uno::Float4 Circle__AdjustLayout(Circle* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 size);
Circle* Circle__New_1(::uStatic* __this);
void Circle__UpdateShapeDrawable(Circle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* shape);

struct Circle : ::app::Fuse::Android::Shape__Fuse_Controls_Circle
{
    void _ObjInit_4() { Circle___ObjInit_4(this); }
};

}}}


#endif
