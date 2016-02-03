// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_PARENT_VIEW__FUSE_CONTROLS_SCROLL_VIEW_H__
#define __APP_FUSE_ANDROID_PARENT_VIEW__FUSE_CONTROLS_SCROLL_VIEW_H__

#include <app/Fuse.Android.NativeView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ScrollView; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Android {

struct ParentView__Fuse_Controls_ScrollView;

struct ParentView__Fuse_Controls_ScrollView__uType : ::app::Fuse::Android::NativeView__uType
{
    void(*__fp_Attach)(ParentView__Fuse_Controls_ScrollView*);
    void(*__fp_Detach)(ParentView__Fuse_Controls_ScrollView*);
};

ParentView__Fuse_Controls_ScrollView__uType* ParentView__Fuse_Controls_ScrollView__typeof();

void ParentView__Fuse_Controls_ScrollView___ObjInit_2(ParentView__Fuse_Controls_ScrollView* __this);
void ParentView__Fuse_Controls_ScrollView__Attach(ParentView__Fuse_Controls_ScrollView* __this);
void ParentView__Fuse_Controls_ScrollView__Detach(ParentView__Fuse_Controls_ScrollView* __this);
::app::Fuse::Controls::ScrollView* ParentView__Fuse_Controls_ScrollView__get_Control(ParentView__Fuse_Controls_ScrollView* __this);
::app::Uno::Float2 ParentView__Fuse_Controls_ScrollView__get_Size(ParentView__Fuse_Controls_ScrollView* __this);
void ParentView__Fuse_Controls_ScrollView__OnRooted(ParentView__Fuse_Controls_ScrollView* __this, ::app::Fuse::Node* n);
void ParentView__Fuse_Controls_ScrollView__OnUnrooted(ParentView__Fuse_Controls_ScrollView* __this, ::app::Fuse::Node* n);

struct ParentView__Fuse_Controls_ScrollView : ::app::Fuse::Android::NativeView
{
    void _ObjInit_2() { ParentView__Fuse_Controls_ScrollView___ObjInit_2(this); }
    void Attach() { (((ParentView__Fuse_Controls_ScrollView__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ParentView__Fuse_Controls_ScrollView__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::ScrollView* Control() { return ParentView__Fuse_Controls_ScrollView__get_Control(this); }
};

}}}


#endif
