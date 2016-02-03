// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_RECTANGLE_H__
#define __APP_FUSE_ANDROID_RECTANGLE_H__

#include <app/Fuse.Android.Shape__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct ShapeDrawable; } } } } }
namespace app { namespace Android { namespace Runtime { struct FloatArray; } } }

namespace app {
namespace Fuse {
namespace Android {

struct Rectangle;

struct Rectangle__uType : ::app::Fuse::Android::Shape__Fuse_Controls_Rectangle__uType
{
};

Rectangle__uType* Rectangle__typeof();

void Rectangle___ObjInit_4(Rectangle* __this);
void Rectangle__Detach(Rectangle* __this);
Rectangle* Rectangle__New_1(::uStatic* __this);
void Rectangle__UpdateShapeDrawable(Rectangle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* shape);

struct Rectangle : ::app::Fuse::Android::Shape__Fuse_Controls_Rectangle
{
    ::uStrong< ::app::Android::Runtime::FloatArray*> _cornerArray;

    void _ObjInit_4() { Rectangle___ObjInit_4(this); }
};

}}}


#endif
