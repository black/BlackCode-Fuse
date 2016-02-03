// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESKTOP_NATIVE_STYLE_TEMPLATE1_H__
#define __APP_FUSE_DESKTOP_NATIVE_STYLE_TEMPLATE1_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_PlainTextEdit.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct PlainTextEdit; } } }
namespace app { namespace Fuse { namespace Desktop { struct NativeStyle; } } }

namespace app {
namespace Fuse {
namespace Desktop {

struct NativeStyle_Template1;

struct NativeStyle_Template1__uType : ::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit__uType
{
};

NativeStyle_Template1__uType* NativeStyle_Template1__typeof();

void NativeStyle_Template1___ObjInit_1(NativeStyle_Template1* __this, ::app::Fuse::Desktop::NativeStyle* parent);
NativeStyle_Template1* NativeStyle_Template1__New_1(::uStatic* __this, ::app::Fuse::Desktop::NativeStyle* parent);
void NativeStyle_Template1__OnApply(NativeStyle_Template1* __this, ::app::Fuse::Controls::PlainTextEdit* self);

struct NativeStyle_Template1 : ::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit
{
    ::uStrong< ::app::Fuse::Desktop::NativeStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Desktop::NativeStyle* parent) { NativeStyle_Template1___ObjInit_1(this, parent); }
};

}}}


#endif
