// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_PARENT_VIEW__FUSE_CONTROLS_NATIVE_VIEW_HOST_H__
#define __APP_FUSE_ANDROID_PARENT_VIEW__FUSE_CONTROLS_NATIVE_VIEW_HOST_H__

#include <app/Fuse.Android.NativeView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct NativeViewHost; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Android {

struct ParentView__Fuse_Controls_NativeViewHost;

struct ParentView__Fuse_Controls_NativeViewHost__uType : ::app::Fuse::Android::NativeView__uType
{
};

ParentView__Fuse_Controls_NativeViewHost__uType* ParentView__Fuse_Controls_NativeViewHost__typeof();

void ParentView__Fuse_Controls_NativeViewHost___ObjInit_2(ParentView__Fuse_Controls_NativeViewHost* __this);
void ParentView__Fuse_Controls_NativeViewHost__Attach(ParentView__Fuse_Controls_NativeViewHost* __this);
void ParentView__Fuse_Controls_NativeViewHost__Detach(ParentView__Fuse_Controls_NativeViewHost* __this);
::app::Fuse::Controls::NativeViewHost* ParentView__Fuse_Controls_NativeViewHost__get_Control(ParentView__Fuse_Controls_NativeViewHost* __this);
::app::Uno::Float2 ParentView__Fuse_Controls_NativeViewHost__get_Size(ParentView__Fuse_Controls_NativeViewHost* __this);
void ParentView__Fuse_Controls_NativeViewHost__OnRooted(ParentView__Fuse_Controls_NativeViewHost* __this, ::app::Fuse::Node* n);
void ParentView__Fuse_Controls_NativeViewHost__OnUnrooted(ParentView__Fuse_Controls_NativeViewHost* __this, ::app::Fuse::Node* n);

struct ParentView__Fuse_Controls_NativeViewHost : ::app::Fuse::Android::NativeView
{
    void _ObjInit_2() { ParentView__Fuse_Controls_NativeViewHost___ObjInit_2(this); }
    void Attach() { ParentView__Fuse_Controls_NativeViewHost__Attach(this); }
    void Detach() { ParentView__Fuse_Controls_NativeViewHost__Detach(this); }
    ::app::Fuse::Controls::NativeViewHost* Control() { return ParentView__Fuse_Controls_NativeViewHost__get_Control(this); }
};

}}}


#endif
