// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESKTOP_NATIVE_STYLE_TEMPLATE1_FACTORY_H__
#define __APP_FUSE_DESKTOP_NATIVE_STYLE_TEMPLATE1_FACTORY_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.IFactory.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Desktop { struct NativeStyle_Template1; } } }

namespace app {
namespace Fuse {
namespace Desktop {

struct NativeStyle_Template1_Factory;

struct NativeStyle_Template1_Factory__uType : ::uClassType
{
    ::app::Uno::UX::IFactory __interface_0;
};

NativeStyle_Template1_Factory__uType* NativeStyle_Template1_Factory__typeof();

void NativeStyle_Template1_Factory___ObjInit(NativeStyle_Template1_Factory* __this, ::app::Fuse::Desktop::NativeStyle_Template1* parent);
::uObject* NativeStyle_Template1_Factory__New_1(NativeStyle_Template1_Factory* __this);
NativeStyle_Template1_Factory* NativeStyle_Template1_Factory__New_2(::uStatic* __this, ::app::Fuse::Desktop::NativeStyle_Template1* parent);

struct NativeStyle_Template1_Factory : ::uObject
{
    ::uStrong< ::app::Fuse::Desktop::NativeStyle_Template1*> __parent;

    void _ObjInit(::app::Fuse::Desktop::NativeStyle_Template1* parent) { NativeStyle_Template1_Factory___ObjInit(this, parent); }
    ::uObject* New_1() { return NativeStyle_Template1_Factory__New_1(this); }
};

}}}


#endif
