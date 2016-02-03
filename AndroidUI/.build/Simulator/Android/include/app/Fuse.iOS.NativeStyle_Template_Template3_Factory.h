// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_STYLE_TEMPLATE_TEMPLATE3_FACTORY_H__
#define __APP_FUSE_I_O_S_NATIVE_STYLE_TEMPLATE_TEMPLATE3_FACTORY_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.IFactory.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { struct NativeStyle_Template_Template3; } } }

namespace app {
namespace Fuse {
namespace iOS {

struct NativeStyle_Template_Template3_Factory;

struct NativeStyle_Template_Template3_Factory__uType : ::uClassType
{
    ::app::Uno::UX::IFactory __interface_0;
};

NativeStyle_Template_Template3_Factory__uType* NativeStyle_Template_Template3_Factory__typeof();

void NativeStyle_Template_Template3_Factory___ObjInit(NativeStyle_Template_Template3_Factory* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent);
::uObject* NativeStyle_Template_Template3_Factory__New_1(NativeStyle_Template_Template3_Factory* __this);
NativeStyle_Template_Template3_Factory* NativeStyle_Template_Template3_Factory__New_2(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent);

struct NativeStyle_Template_Template3_Factory : ::uObject
{
    ::uStrong< ::app::Fuse::iOS::NativeStyle_Template_Template3*> __parent;

    void _ObjInit(::app::Fuse::iOS::NativeStyle_Template_Template3* parent) { NativeStyle_Template_Template3_Factory___ObjInit(this, parent); }
    ::uObject* New_1() { return NativeStyle_Template_Template3_Factory__New_1(this); }
};

}}}


#endif
