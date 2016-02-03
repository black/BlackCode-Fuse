// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_NATIVE_STYLE_TEMPLATE_TEMPLATE3_H__
#define __APP_FUSE_ANDROID_NATIVE_STYLE_TEMPLATE_TEMPLATE3_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_PlainTextEdit.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Android { struct NativeStyle_Template; } } }
namespace app { namespace Fuse { namespace Controls { struct PlainTextEdit; } } }

namespace app {
namespace Fuse {
namespace Android {

struct NativeStyle_Template_Template3;

struct NativeStyle_Template_Template3__uType : ::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit__uType
{
};

NativeStyle_Template_Template3__uType* NativeStyle_Template_Template3__typeof();

void NativeStyle_Template_Template3___ObjInit_1(NativeStyle_Template_Template3* __this, ::app::Fuse::Android::NativeStyle_Template* parent);
NativeStyle_Template_Template3* NativeStyle_Template_Template3__New_1(::uStatic* __this, ::app::Fuse::Android::NativeStyle_Template* parent);
void NativeStyle_Template_Template3__OnApply(NativeStyle_Template_Template3* __this, ::app::Fuse::Controls::PlainTextEdit* self);

struct NativeStyle_Template_Template3 : ::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit
{
    ::uStrong< ::app::Fuse::Android::NativeStyle_Template*> __parent;

    void _ObjInit_1(::app::Fuse::Android::NativeStyle_Template* parent) { NativeStyle_Template_Template3___ObjInit_1(this, parent); }
};

}}}


#endif
