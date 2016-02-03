// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_NATIVE_STYLE_TEMPLATE_H__
#define __APP_FUSE_ANDROID_NATIVE_STYLE_TEMPLATE_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_GraphicsView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Android { struct NativeStyle; } } }
namespace app { namespace Fuse { namespace Controls { struct GraphicsView; } } }

namespace app {
namespace Fuse {
namespace Android {

struct NativeStyle_Template;

struct NativeStyle_Template__uType : ::app::Uno::UX::Template__Fuse_Controls_GraphicsView__uType
{
};

NativeStyle_Template__uType* NativeStyle_Template__typeof();

void NativeStyle_Template___ObjInit_1(NativeStyle_Template* __this, ::app::Fuse::Android::NativeStyle* parent);
NativeStyle_Template* NativeStyle_Template__New_1(::uStatic* __this, ::app::Fuse::Android::NativeStyle* parent);
void NativeStyle_Template__OnApply(NativeStyle_Template* __this, ::app::Fuse::Controls::GraphicsView* self);

struct NativeStyle_Template : ::app::Uno::UX::Template__Fuse_Controls_GraphicsView
{
    ::uStrong< ::app::Fuse::Android::NativeStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Android::NativeStyle* parent) { NativeStyle_Template___ObjInit_1(this, parent); }
};

}}}


#endif
