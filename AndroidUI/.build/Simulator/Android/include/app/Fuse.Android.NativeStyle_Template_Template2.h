// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_NATIVE_STYLE_TEMPLATE_TEMPLATE2_H__
#define __APP_FUSE_ANDROID_NATIVE_STYLE_TEMPLATE_TEMPLATE2_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_NativeViewHost.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Android { struct NativeStyle_Template; } } }
namespace app { namespace Fuse { namespace Controls { struct NativeViewHost; } } }

namespace app {
namespace Fuse {
namespace Android {

struct NativeStyle_Template_Template2;

struct NativeStyle_Template_Template2__uType : ::app::Uno::UX::Template__Fuse_Controls_NativeViewHost__uType
{
};

NativeStyle_Template_Template2__uType* NativeStyle_Template_Template2__typeof();

void NativeStyle_Template_Template2___ObjInit_1(NativeStyle_Template_Template2* __this, ::app::Fuse::Android::NativeStyle_Template* parent);
NativeStyle_Template_Template2* NativeStyle_Template_Template2__New_1(::uStatic* __this, ::app::Fuse::Android::NativeStyle_Template* parent);
void NativeStyle_Template_Template2__OnApply(NativeStyle_Template_Template2* __this, ::app::Fuse::Controls::NativeViewHost* self);

struct NativeStyle_Template_Template2 : ::app::Uno::UX::Template__Fuse_Controls_NativeViewHost
{
    ::uStrong< ::app::Fuse::Android::NativeStyle_Template*> __parent;

    void _ObjInit_1(::app::Fuse::Android::NativeStyle_Template* parent) { NativeStyle_Template_Template2___ObjInit_1(this, parent); }
};

}}}


#endif
