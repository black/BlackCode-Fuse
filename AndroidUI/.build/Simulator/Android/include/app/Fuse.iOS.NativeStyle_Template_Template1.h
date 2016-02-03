// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_STYLE_TEMPLATE_TEMPLATE1_H__
#define __APP_FUSE_I_O_S_NATIVE_STYLE_TEMPLATE_TEMPLATE1_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextBlock.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextBlock; } } }
namespace app { namespace Fuse { namespace iOS { struct NativeStyle_Template; } } }

namespace app {
namespace Fuse {
namespace iOS {

struct NativeStyle_Template_Template1;

struct NativeStyle_Template_Template1__uType : ::app::Uno::UX::Template__Fuse_Controls_TextBlock__uType
{
};

NativeStyle_Template_Template1__uType* NativeStyle_Template_Template1__typeof();

void NativeStyle_Template_Template1___ObjInit_1(NativeStyle_Template_Template1* __this, ::app::Fuse::iOS::NativeStyle_Template* parent);
NativeStyle_Template_Template1* NativeStyle_Template_Template1__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent);
void NativeStyle_Template_Template1__OnApply(NativeStyle_Template_Template1* __this, ::app::Fuse::Controls::TextBlock* self);

struct NativeStyle_Template_Template1 : ::app::Uno::UX::Template__Fuse_Controls_TextBlock
{
    ::uStrong< ::app::Fuse::iOS::NativeStyle_Template*> __parent;

    void _ObjInit_1(::app::Fuse::iOS::NativeStyle_Template* parent) { NativeStyle_Template_Template1___ObjInit_1(this, parent); }
};

}}}


#endif
