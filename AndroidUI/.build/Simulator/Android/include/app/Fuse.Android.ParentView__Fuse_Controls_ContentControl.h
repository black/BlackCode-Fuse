// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_PARENT_VIEW__FUSE_CONTROLS_CONTENT_CONTROL_H__
#define __APP_FUSE_ANDROID_PARENT_VIEW__FUSE_CONTROLS_CONTENT_CONTROL_H__

#include <app/Fuse.Android.NativeView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ContentControl; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Android {

struct ParentView__Fuse_Controls_ContentControl;

struct ParentView__Fuse_Controls_ContentControl__uType : ::app::Fuse::Android::NativeView__uType
{
};

ParentView__Fuse_Controls_ContentControl__uType* ParentView__Fuse_Controls_ContentControl__typeof();

void ParentView__Fuse_Controls_ContentControl___ObjInit_2(ParentView__Fuse_Controls_ContentControl* __this);
void ParentView__Fuse_Controls_ContentControl__Attach(ParentView__Fuse_Controls_ContentControl* __this);
void ParentView__Fuse_Controls_ContentControl__Detach(ParentView__Fuse_Controls_ContentControl* __this);
::app::Fuse::Controls::ContentControl* ParentView__Fuse_Controls_ContentControl__get_Control(ParentView__Fuse_Controls_ContentControl* __this);
::app::Uno::Float2 ParentView__Fuse_Controls_ContentControl__get_Size(ParentView__Fuse_Controls_ContentControl* __this);
void ParentView__Fuse_Controls_ContentControl__OnRooted(ParentView__Fuse_Controls_ContentControl* __this, ::app::Fuse::Node* n);
void ParentView__Fuse_Controls_ContentControl__OnUnrooted(ParentView__Fuse_Controls_ContentControl* __this, ::app::Fuse::Node* n);

struct ParentView__Fuse_Controls_ContentControl : ::app::Fuse::Android::NativeView
{
    void _ObjInit_2() { ParentView__Fuse_Controls_ContentControl___ObjInit_2(this); }
    void Attach() { ParentView__Fuse_Controls_ContentControl__Attach(this); }
    void Detach() { ParentView__Fuse_Controls_ContentControl__Detach(this); }
    ::app::Fuse::Controls::ContentControl* Control() { return ParentView__Fuse_Controls_ContentControl__get_Control(this); }
};

}}}


#endif
