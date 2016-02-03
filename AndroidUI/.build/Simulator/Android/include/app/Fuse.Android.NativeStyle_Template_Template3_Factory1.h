// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_NATIVE_STYLE_TEMPLATE_TEMPLATE3_FACTORY1_H__
#define __APP_FUSE_ANDROID_NATIVE_STYLE_TEMPLATE_TEMPLATE3_FACTORY1_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.IFactory.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Android { struct NativeStyle_Template_Template3; } } }

namespace app {
namespace Fuse {
namespace Android {

struct NativeStyle_Template_Template3_Factory1;

struct NativeStyle_Template_Template3_Factory1__uType : ::uClassType
{
    ::app::Uno::UX::IFactory __interface_0;
};

NativeStyle_Template_Template3_Factory1__uType* NativeStyle_Template_Template3_Factory1__typeof();

void NativeStyle_Template_Template3_Factory1___ObjInit(NativeStyle_Template_Template3_Factory1* __this, ::app::Fuse::Android::NativeStyle_Template_Template3* parent);
::uObject* NativeStyle_Template_Template3_Factory1__New_1(NativeStyle_Template_Template3_Factory1* __this);
NativeStyle_Template_Template3_Factory1* NativeStyle_Template_Template3_Factory1__New_2(::uStatic* __this, ::app::Fuse::Android::NativeStyle_Template_Template3* parent);

struct NativeStyle_Template_Template3_Factory1 : ::uObject
{
    ::uStrong< ::app::Fuse::Android::NativeStyle_Template_Template3*> __parent;

    void _ObjInit(::app::Fuse::Android::NativeStyle_Template_Template3* parent) { NativeStyle_Template_Template3_Factory1___ObjInit(this, parent); }
    ::uObject* New_1() { return NativeStyle_Template_Template3_Factory1__New_1(this); }
};

}}}


#endif
